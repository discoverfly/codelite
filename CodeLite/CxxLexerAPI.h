#ifndef CppLexerAPI_H__
#define CppLexerAPI_H__

#include <wx/filename.h>
#include <wx/string.h>
#include <wx/variant.h>
#include <map>
#include <codelite_exports.h>

#if 0
#define DEBUGMSG wxPrintf
#else
#define DEBUGMSG(...) do {} while(false)
#endif

enum eLexerOptions {
    kLexerOpt_None = 0x00000000,
    kLexerOpt_ReturnComments = 0x00000001,
    kLexerOpt_ReturnWhitespace = 0x00000002,
    kLexerOpt_CollectMacroValueNumbers = 0x00000004,
};

struct WXDLLIMPEXP_CL CxxLexerException
{
    wxString message;
    CxxLexerException(const wxString& msg)
        : message(msg)
    {
    }
};

struct WXDLLIMPEXP_CL CxxLexerToken
{
    int lineNumber;
    int column;
    wxString text;
    int type;
};

struct WXDLLIMPEXP_CL CxxPreProcessorToken
{
    wxString name;
    wxString value;
    typedef std::map<wxString, CxxPreProcessorToken> Map_t;
};
/**
 * @class CppLexerUserData
 */
struct WXDLLIMPEXP_CL CppLexerUserData
{
private:
    size_t m_flags;
    wxString m_comment;
    wxString m_rawStringLabel;
    int m_commentStartLine;
    int m_commentEndLine;
    FILE* m_currentPF;

public:
    void Clear()
    {
        if(m_currentPF) {
            ::fclose(m_currentPF);
            m_currentPF = NULL;
        }

        ClearComment();
        m_rawStringLabel.Clear();
    }

    CppLexerUserData(size_t options)
        : m_flags(options)
        , m_commentStartLine(wxNOT_FOUND)
        , m_commentEndLine(wxNOT_FOUND)
        , m_currentPF(NULL)
    {
    }

    ~CppLexerUserData()
    {
        Clear();
    }

    void SetCurrentPF(FILE* currentPF)
    {
        this->m_currentPF = currentPF;
    }
    /**
     * @brief do we collect comments?
     */
    bool IsCollectingComments() const
    {
        return m_flags & kLexerOpt_ReturnComments;
    }
    bool IsCollectingWhitespace() const
    {
        return m_flags & kLexerOpt_ReturnWhitespace;
    }
    //==--------------------
    // Comment management
    //==--------------------
    void AppendToComment(const wxString& str)
    {
        m_comment << str;
    }
    void SetCommentEndLine(int commentEndLine)
    {
        this->m_commentEndLine = commentEndLine;
    }
    void SetCommentStartLine(int commentStartLine)
    {
        this->m_commentStartLine = commentStartLine;
    }
    int GetCommentEndLine() const
    {
        return m_commentEndLine;
    }
    int GetCommentStartLine() const
    {
        return m_commentStartLine;
    }
    const wxString& GetComment() const
    {
        return m_comment;
    }
    bool HasComment() const
    {
        return !m_comment.IsEmpty();
    }
    /**
     * @brief clear all info collected for the last comment
     */
    void ClearComment()
    {
        m_comment.Clear();
        m_commentEndLine = wxNOT_FOUND;
        m_commentEndLine = wxNOT_FOUND;
    }
};

typedef void* Scanner_t;
/**
 * @brief create a new Lexer for a given file name
 */
extern Scanner_t LexerNew(const wxString& filename, size_t options = kLexerOpt_None);

/**
 * @brief destroy the current lexer and perform cleanup
 */
extern void LexerDestroy(Scanner_t* scanner);

/**
 * @brief return the next token, its type, line number and columns
 */
extern bool LexerNext(Scanner_t scanner, CxxLexerToken& token);

/**
 * @brief unget the last token
 */
extern void LexerUnget(Scanner_t scanner);

/**
 * @brief return the current lexer token
 */
extern wxString LexerCurrentToken(Scanner_t scanner);

/**
 * @brief return the associated data with this scanner
 */
extern CppLexerUserData* LexerGetUserData(Scanner_t scanner);
#endif
