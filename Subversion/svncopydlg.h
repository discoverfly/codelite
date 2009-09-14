#ifndef __svncopydlg__
#define __svncopydlg__

/**
@file
Subclass of SvnCopyBaseDlg, which is generated by wxFormBuilder.
*/

#include "svncopybasedlg.h"

class IConfigTool;

/** Implementing SvnCopyBaseDlg */
class SvnCopyDlg : public SvnCopyBaseDlg
{
	IConfigTool *m_conf;
public:
	/** Constructor */
	SvnCopyDlg( wxWindow* parent, IConfigTool *conf );
	virtual ~SvnCopyDlg();

	void     SetSourceURL(const wxString &url);
	void     SetTargetURL(const wxString &url);
	wxString GetSourceURL();
	wxString GetTargetURL();
	wxString GetComment  ();
	void     SetComment  (const wxString &txt);
};

#endif // __svncopydlg__
