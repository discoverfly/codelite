//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "wxcrafter_plugin.h"
#include "codelite_exports.h"


// Declare the bitmap loading function
extern void wxC9D6CInitBitmapResources();

static bool bBitmapLoaded = false;


EditDlgBase::EditDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer2 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer2);
    
    m_stc10 = new wxStyledTextCtrl(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0);
    m_stc10->SetFocus();
    // Configure the fold margin
    m_stc10->SetMarginType     (4, wxSTC_MARGIN_SYMBOL);
    m_stc10->SetMarginMask     (4, wxSTC_MASK_FOLDERS);
    m_stc10->SetMarginSensitive(4, true);
    m_stc10->SetMarginWidth    (4, 0);
    
    // Configure the tracker margin
    m_stc10->SetMarginWidth(1, 0);
    
    // Configure the symbol margin
    m_stc10->SetMarginType (2, wxSTC_MARGIN_SYMBOL);
    m_stc10->SetMarginMask (2, ~(wxSTC_MASK_FOLDERS));
    m_stc10->SetMarginWidth(2, 0);
    m_stc10->SetMarginSensitive(2, true);
    
    // Configure the line numbers margin
    m_stc10->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stc10->SetMarginWidth(0,0);
    
    // Configure the line symbol margin
    m_stc10->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stc10->SetMarginMask(3, 0);
    m_stc10->SetMarginWidth(3,0);
    // Select the lexer
    m_stc10->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stc10->StyleClearAll();
    m_stc10->SetWrapMode(0);
    m_stc10->SetIndentationGuides(0);
    m_stc10->SetKeyWords(0, wxT(""));
    m_stc10->SetKeyWords(1, wxT(""));
    m_stc10->SetKeyWords(2, wxT(""));
    m_stc10->SetKeyWords(3, wxT(""));
    m_stc10->SetKeyWords(4, wxT(""));
    
    boxSizer2->Add(m_stc10, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* boxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer2->Add(boxSizer4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_button6 = new wxButton(this, wxID_OK, _("&OK"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_button6->SetDefault();
    
    boxSizer4->Add(m_button6, 0, wxALL, 5);
    
    m_button8 = new wxButton(this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer4->Add(m_button8, 0, wxALL, 5);
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
}

EditDlgBase::~EditDlgBase()
{
}

DiffSideBySidePanelBase::DiffSideBySidePanelBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9D6CInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer13 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer13);
    
    wxFlexGridSizer* flexGridSizer20 = new wxFlexGridSizer(0, 3, 0, 0);
    flexGridSizer20->SetFlexibleDirection( wxBOTH );
    flexGridSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer20->AddGrowableCol(0);
    flexGridSizer20->AddGrowableCol(2);
    flexGridSizer20->AddGrowableRow(1);
    
    boxSizer13->Add(flexGridSizer20, 1, wxEXPAND, 5);
    
    m_filePickerLeft = new wxFilePickerCtrl(this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*"), wxDefaultPosition, wxSize(-1,-1), wxFLP_DEFAULT_STYLE|wxFLP_USE_TEXTCTRL);
    
    flexGridSizer20->Add(m_filePickerLeft, 1, wxALL|wxEXPAND, 2);
    
    flexGridSizer20->Add(0, 0, 1, wxALL, 5);
    
    m_filePickerRight = new wxFilePickerCtrl(this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*"), wxDefaultPosition, wxSize(-1,-1), wxFLP_DEFAULT_STYLE|wxFLP_USE_TEXTCTRL);
    
    flexGridSizer20->Add(m_filePickerRight, 0, wxALL|wxEXPAND, 2);
    
    m_stcLeft = new wxStyledTextCtrl(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0);
    // Configure the fold margin
    m_stcLeft->SetMarginType     (4, wxSTC_MARGIN_SYMBOL);
    m_stcLeft->SetMarginMask     (4, wxSTC_MASK_FOLDERS);
    m_stcLeft->SetMarginSensitive(4, true);
    m_stcLeft->SetMarginWidth    (4, 0);
    
    // Configure the tracker margin
    m_stcLeft->SetMarginWidth(1, 0);
    
    // Configure the symbol margin
    m_stcLeft->SetMarginType (2, wxSTC_MARGIN_SYMBOL);
    m_stcLeft->SetMarginMask (2, ~(wxSTC_MASK_FOLDERS));
    m_stcLeft->SetMarginWidth(2, 0);
    m_stcLeft->SetMarginSensitive(2, true);
    
    // Configure the line numbers margin
    int m_stcLeft_PixelWidth = 4 + 5 *m_stcLeft->TextWidth(wxSTC_STYLE_LINENUMBER, wxT("9"));
    m_stcLeft->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stcLeft->SetMarginWidth(0,m_stcLeft_PixelWidth);
    
    // Configure the line symbol margin
    m_stcLeft->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stcLeft->SetMarginMask(3, 0);
    m_stcLeft->SetMarginWidth(3,0);
    // Select the lexer
    m_stcLeft->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stcLeft->StyleClearAll();
    m_stcLeft->SetWrapMode(0);
    m_stcLeft->SetIndentationGuides(0);
    m_stcLeft->SetKeyWords(0, wxT(""));
    m_stcLeft->SetKeyWords(1, wxT(""));
    m_stcLeft->SetKeyWords(2, wxT(""));
    m_stcLeft->SetKeyWords(3, wxT(""));
    m_stcLeft->SetKeyWords(4, wxT(""));
    
    flexGridSizer20->Add(m_stcLeft, 1, wxALL|wxEXPAND, 2);
    
    flexGridSizer20->Add(0, 0, 1, wxALL, 5);
    
    m_stcRight = new wxStyledTextCtrl(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), 0);
    // Configure the fold margin
    m_stcRight->SetMarginType     (4, wxSTC_MARGIN_SYMBOL);
    m_stcRight->SetMarginMask     (4, wxSTC_MASK_FOLDERS);
    m_stcRight->SetMarginSensitive(4, true);
    m_stcRight->SetMarginWidth    (4, 0);
    
    // Configure the tracker margin
    m_stcRight->SetMarginWidth(1, 0);
    
    // Configure the symbol margin
    m_stcRight->SetMarginType (2, wxSTC_MARGIN_SYMBOL);
    m_stcRight->SetMarginMask (2, ~(wxSTC_MASK_FOLDERS));
    m_stcRight->SetMarginWidth(2, 0);
    m_stcRight->SetMarginSensitive(2, true);
    
    // Configure the line numbers margin
    int m_stcRight_PixelWidth = 4 + 5 *m_stcRight->TextWidth(wxSTC_STYLE_LINENUMBER, wxT("9"));
    m_stcRight->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stcRight->SetMarginWidth(0,m_stcRight_PixelWidth);
    
    // Configure the line symbol margin
    m_stcRight->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stcRight->SetMarginMask(3, 0);
    m_stcRight->SetMarginWidth(3,0);
    // Select the lexer
    m_stcRight->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stcRight->StyleClearAll();
    m_stcRight->SetWrapMode(0);
    m_stcRight->SetIndentationGuides(0);
    m_stcRight->SetKeyWords(0, wxT(""));
    m_stcRight->SetKeyWords(1, wxT(""));
    m_stcRight->SetKeyWords(2, wxT(""));
    m_stcRight->SetKeyWords(3, wxT(""));
    m_stcRight->SetKeyWords(4, wxT(""));
    
    flexGridSizer20->Add(m_stcRight, 1, wxALL|wxEXPAND, 2);
    
    SetSizeHints(500,300);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_stcLeft->Connect(wxEVT_STC_PAINTED, wxStyledTextEventHandler(DiffSideBySidePanelBase::OnLeftStcPainted), NULL, this);
    m_stcRight->Connect(wxEVT_STC_PAINTED, wxStyledTextEventHandler(DiffSideBySidePanelBase::OnRightStcPainted), NULL, this);
    
}

DiffSideBySidePanelBase::~DiffSideBySidePanelBase()
{
    m_stcLeft->Disconnect(wxEVT_STC_PAINTED, wxStyledTextEventHandler(DiffSideBySidePanelBase::OnLeftStcPainted), NULL, this);
    m_stcRight->Disconnect(wxEVT_STC_PAINTED, wxStyledTextEventHandler(DiffSideBySidePanelBase::OnRightStcPainted), NULL, this);
    
}
