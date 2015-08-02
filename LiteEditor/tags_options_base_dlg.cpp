//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: tags_options_base_dlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "tags_options_base_dlg.h"
#include "tags_options_data.h"


// Declare the bitmap loading function
extern void wxC6B32InitBitmapResources();

static bool bBitmapLoaded = false;


TagsOptionsBaseDlg::TagsOptionsBaseDlg(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC6B32InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(mainSizer);
    
    m_treebook2 = new wxTreebook(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxBK_DEFAULT);
    m_treebook2->SetName(wxT("m_treebook2"));
    
    mainSizer->Add(m_treebook2, 1, wxALL|wxEXPAND, 5);
    
    m_paneDisplayAndBehavior = new wxPanel(m_treebook2, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_treebook2->AddPage(m_paneDisplayAndBehavior, _("Display and Behavior"), false, wxNOT_FOUND);
    
    wxBoxSizer* bSizer19 = new wxBoxSizer(wxVERTICAL);
    m_paneDisplayAndBehavior->SetSizer(bSizer19);
    
    wxStaticBoxSizer* sbSizer2 = new wxStaticBoxSizer( new wxStaticBox(m_paneDisplayAndBehavior, wxID_ANY, _("Display:")), wxVERTICAL);
    
    bSizer19->Add(sbSizer2, 0, wxALL|wxEXPAND, 5);
    
    wxFlexGridSizer* flexGridSizer12 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer12->SetFlexibleDirection( wxBOTH );
    flexGridSizer12->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    sbSizer2->Add(flexGridSizer12, 0, wxALL, 5);
    
    m_staticText14 = new wxStaticText(m_paneDisplayAndBehavior, wxID_ANY, _("Number of items to display in the completion box:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    flexGridSizer12->Add(m_staticText14, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_spinCtrlNumberOfCCItems = new wxTextCtrl(m_paneDisplayAndBehavior, wxID_ANY, wxT("50"), wxDefaultPosition, wxSize(-1, -1), 0);
    #if wxVERSION_NUMBER >= 3000
    m_spinCtrlNumberOfCCItems->SetHint(wxT(""));
    #endif
    
    flexGridSizer12->Add(m_spinCtrlNumberOfCCItems, 0, wxALL|wxALIGN_LEFT, 5);
    
    m_checkBoxEnableCaseSensitiveCompletion = new wxCheckBox(m_paneDisplayAndBehavior, wxID_ANY, _("Code Completion is case sensitive (improves performance)"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxEnableCaseSensitiveCompletion->SetValue(false);
    m_checkBoxEnableCaseSensitiveCompletion->SetToolTip(_("When enabled, the code completion search engine will use case sensitive searches. \nSo 'QString' is NOT equal 'qstring'"));
    
    flexGridSizer12->Add(m_checkBoxEnableCaseSensitiveCompletion, 0, wxALL, 5);
    
    flexGridSizer12->Add(0, 0, 1, wxALL, 5);
    
    m_checkDisplayTypeInfo = new wxCheckBox(m_paneDisplayAndBehavior, wxID_ANY, _("Display type info tooltips"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkDisplayTypeInfo->SetValue(false);
    m_checkDisplayTypeInfo->SetToolTip(_("Display information about the hovered text"));
    
    flexGridSizer12->Add(m_checkDisplayTypeInfo, 0, wxALL, 5);
    
    flexGridSizer12->Add(0, 0, 1, wxALL, 5);
    
    m_checkDisplayFunctionTip = new wxCheckBox(m_paneDisplayAndBehavior, wxID_ANY, _("Display function calltip"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkDisplayFunctionTip->SetValue(false);
    m_checkDisplayFunctionTip->SetToolTip(_("Display function argument list after typing an open brace '('"));
    
    flexGridSizer12->Add(m_checkDisplayFunctionTip, 0, wxALL, 5);
    
    flexGridSizer12->Add(0, 0, 1, wxALL, 5);
    
    m_checkCppKeywordAssist = new wxCheckBox(m_paneDisplayAndBehavior, wxID_ANY, _("Display completion box for language keywords"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkCppKeywordAssist->SetValue(false);
    m_checkCppKeywordAssist->SetToolTip(_("When enabled, codelite will auto show the code completion box for C/C++ keywords after typing 2 chars"));
    
    flexGridSizer12->Add(m_checkCppKeywordAssist, 0, wxALL, 5);
    
    flexGridSizer12->Add(0, 0, 1, wxALL, 5);
    
    m_checkBoxKeepFunctionSignature = new wxCheckBox(m_paneDisplayAndBehavior, wxID_ANY, _("Keep function signature un-formatted"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxKeepFunctionSignature->SetValue(false);
    
    flexGridSizer12->Add(m_checkBoxKeepFunctionSignature, 0, wxALL|wxEXPAND, 5);
    
    wxStaticBoxSizer* sbSizer15 = new wxStaticBoxSizer( new wxStaticBox(m_paneDisplayAndBehavior, wxID_ANY, _("Behavior:")), wxVERTICAL);
    
    bSizer19->Add(sbSizer15, 0, wxALL|wxEXPAND, 5);
    
    wxFlexGridSizer* flexGridSizer59 = new wxFlexGridSizer(0, 1, 0, 0);
    flexGridSizer59->SetFlexibleDirection( wxBOTH );
    flexGridSizer59->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    sbSizer15->Add(flexGridSizer59, 0, wxEXPAND, 5);
    
    m_checkBoxretagWorkspaceOnStartup = new wxCheckBox(m_paneDisplayAndBehavior, wxID_ANY, _("Perform a retag  when workspace is loaded"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxretagWorkspaceOnStartup->SetValue(false);
    m_checkBoxretagWorkspaceOnStartup->SetToolTip(_("Retag workspace once loaded"));
    
    flexGridSizer59->Add(m_checkBoxretagWorkspaceOnStartup, 0, wxALL, 5);
    
    m_checkDisableParseOnSave = new wxCheckBox(m_paneDisplayAndBehavior, wxID_ANY, _("Do not parse the file after saving it"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkDisableParseOnSave->SetValue(false);
    m_checkDisableParseOnSave->SetToolTip(_("Do not trigger file parsing after saving a file"));
    
    flexGridSizer59->Add(m_checkDisableParseOnSave, 0, wxALL, 5);
    
    m_checkBoxDeepUsingNamespaceResolving = new wxCheckBox(m_paneDisplayAndBehavior, wxID_ANY, _("Scan all included files to locate 'using namespace' statements"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxDeepUsingNamespaceResolving->SetValue(false);
    m_checkBoxDeepUsingNamespaceResolving->SetToolTip(_("Allways search for 'using namespace' statements in all included files"));
    
    flexGridSizer59->Add(m_checkBoxDeepUsingNamespaceResolving, 0, wxALL, 5);
    
    m_paneColouring = new wxPanel(m_treebook2, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_treebook2->AddPage(m_paneColouring, _("Colouring"), false, wxNOT_FOUND);
    
    wxBoxSizer* bSizer16 = new wxBoxSizer(wxVERTICAL);
    m_paneColouring->SetSizer(bSizer16);
    
    wxArrayString m_pgMgrColouringArr;
    wxUnusedVar(m_pgMgrColouringArr);
    wxArrayInt m_pgMgrColouringIntArr;
    wxUnusedVar(m_pgMgrColouringIntArr);
    m_pgMgrColouring = new wxPropertyGridManager(m_paneColouring, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxPG_DESCRIPTION|wxPG_SPLITTER_AUTO_CENTER|wxPG_BOLD_MODIFIED);
    
    bSizer16->Add(m_pgMgrColouring, 1, wxALL|wxEXPAND, 5);
    
    m_pgPropTrackPreProcessors = m_pgMgrColouring->Append(  new wxBoolProperty( _("Track PreProcessor blocks"), wxPG_LABEL, 0) );
    m_pgPropTrackPreProcessors->SetHelpString(_("Track Pre Processor blocks in the code and colour unreachable code with grey text (\"disabled text\")"));
    
    m_pgPropColourLocalVariables = m_pgMgrColouring->Append(  new wxBoolProperty( _("Colour local variables"), wxPG_LABEL, 1) );
    m_pgPropColourLocalVariables->SetHelpString(_("Local variables inside functions will use their own colour to diffrentiate them from other code\nThe colour can be selected from the 'Colours and Fonts' menu"));
    
    m_pgMgrColouringArr.Clear();
    m_pgMgrColouringIntArr.Clear();
    m_pgMgrColouringArr.Add(_("class"));
    m_pgMgrColouringArr.Add(_("struct"));
    m_pgMgrColouringArr.Add(_("function"));
    m_pgMgrColouringArr.Add(_("enum"));
    m_pgMgrColouringArr.Add(_("enumerator"));
    m_pgMgrColouringArr.Add(_("union"));
    m_pgMgrColouringArr.Add(_("prototype"));
    m_pgMgrColouringArr.Add(_("typedef"));
    m_pgMgrColouringArr.Add(_("macro"));
    m_pgMgrColouringArr.Add(_("namespace"));
    m_pgMgrColouringArr.Add(_("member"));
    m_pgMgrColouringArr.Add(_("variable"));
    m_pgMgrColouringIntArr.Add(CC_COLOUR_CLASS);
    m_pgMgrColouringIntArr.Add(CC_COLOUR_STRUCT);
    m_pgMgrColouringIntArr.Add(CC_COLOUR_FUNCTION);
    m_pgMgrColouringIntArr.Add(CC_COLOUR_ENUM);
    m_pgMgrColouringIntArr.Add(CC_COLOUR_ENUMERATOR);
    m_pgMgrColouringIntArr.Add(CC_COLOUR_UNION);
    m_pgMgrColouringIntArr.Add(CC_COLOUR_PROTOTYPE);
    m_pgMgrColouringIntArr.Add(CC_COLOUR_TYPEDEF);
    m_pgMgrColouringIntArr.Add(CC_COLOUR_MACRO);
    m_pgMgrColouringIntArr.Add(CC_COLOUR_NAMESPACE);
    m_pgMgrColouringIntArr.Add(CC_COLOUR_MEMBER);
    m_pgMgrColouringIntArr.Add(CC_COLOUR_VARIABLE);
    m_pgPropColourWorkspaceSymbols = m_pgMgrColouring->Append(  new wxFlagsProperty( _("Colour workspace symbols"), wxPG_LABEL, m_pgMgrColouringArr, m_pgMgrColouringIntArr, 0) );
    m_pgPropColourWorkspaceSymbols->SetHelpString(_("Select from the list below which symbols type should be coloured by codelite with different colour.\nThe colour is configurable from the 'Colours and Fonts' dialog"));
    
    m_paneTriggering = new wxPanel(m_treebook2, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_treebook2->AddPage(m_paneTriggering, _("Triggering"), false, wxNOT_FOUND);
    
    wxBoxSizer* bSizer17 = new wxBoxSizer(wxVERTICAL);
    m_paneTriggering->SetSizer(bSizer17);
    
    wxStaticBoxSizer* sbSizer7 = new wxStaticBoxSizer( new wxStaticBox(m_paneTriggering, wxID_ANY, _("Automatic Word Completion:")), wxVERTICAL);
    
    bSizer17->Add(sbSizer7, 0, wxALL|wxEXPAND, 5);
    
    wxFlexGridSizer* fgSizer4 = new wxFlexGridSizer(0, 2, 0, 0);
    fgSizer4->SetFlexibleDirection( wxBOTH );
    fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    fgSizer4->AddGrowableCol(1);
    
    sbSizer7->Add(fgSizer4, 0, wxALL|wxEXPAND, 5);
    
    m_checkWordAssist = new wxCheckBox(m_paneTriggering, wxID_ANY, _("Auto display code completion box when typing"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkWordAssist->SetValue(false);
    m_checkWordAssist->SetToolTip(_("When enabled, codelite will auto show the code completion box after N chars were typed"));
    
    fgSizer4->Add(m_checkWordAssist, 0, wxALL, 5);
    
    fgSizer4->Add(0, 0, 1, wxEXPAND, 5);
    
    m_staticTextMinWordLen = new wxStaticText(m_paneTriggering, wxID_ANY, _("Minimun chars to type:"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_staticTextMinWordLen->SetToolTip(_("Minimun chars to type:"));
    
    fgSizer4->Add(m_staticTextMinWordLen, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_sliderMinWordLen = new wxSlider(m_paneTriggering, wxID_ANY, 3, 1, 25, wxDefaultPosition, wxSize(-1, -1), wxSL_LABELS|wxSL_AUTOTICKS|wxSL_HORIZONTAL);
    m_sliderMinWordLen->SetToolTip(_("Number of chars to type before showing the code completion box"));
    
    fgSizer4->Add(m_sliderMinWordLen, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);
    
    m_checkAutoInsertSingleChoice = new wxCheckBox(m_paneTriggering, wxID_ANY, _("Auto insert single match"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkAutoInsertSingleChoice->SetValue(true);
    m_checkAutoInsertSingleChoice->SetToolTip(_("When there is only a single match don't show the code completion box but rather insert the match"));
    
    fgSizer4->Add(m_checkAutoInsertSingleChoice, 0, wxALL, 5);
    
    m_treebook2->AddPage(NULL, _("CTags"), false, wxNOT_FOUND);
    
    m_panelCtagsSearchPaths = new wxPanel(m_treebook2, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_treebook2->InsertSubPage(3, m_panelCtagsSearchPaths, _("Search paths"), false, wxNOT_FOUND);
    
    wxBoxSizer* bSizer7 = new wxBoxSizer(wxVERTICAL);
    m_panelCtagsSearchPaths->SetSizer(bSizer7);
    
    m_notebook36 = new wxNotebook(m_panelCtagsSearchPaths, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxBK_DEFAULT);
    m_notebook36->SetName(wxT("m_notebook36"));
    
    bSizer7->Add(m_notebook36, 1, wxALL|wxEXPAND, 5);
    
    m_panel38 = new wxPanel(m_notebook36, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_notebook36->AddPage(m_panel38, _("Search Paths"), true);
    
    wxBoxSizer* boxSizer30 = new wxBoxSizer(wxVERTICAL);
    m_panel38->SetSizer(boxSizer30);
    
    m_banner34 = new wxBannerWindow(m_panel38, wxID_ANY, wxTOP, wxDefaultPosition, wxSize(-1,-1), wxBORDER_THEME);
    m_banner34->SetBitmap(wxNullBitmap);
    m_banner34->SetText(_("Search paths"), _("codelite will search for include files in these locations"));
    m_banner34->SetGradient(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION), wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    m_banner34->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
    
    boxSizer30->Add(m_banner34, 0, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer9 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer30->Add(bSizer9, 1, wxEXPAND, 5);
    
    m_textCtrlCtagsSearchPaths = new wxTextCtrl(m_panel38, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), wxTE_RICH2|wxTE_PROCESS_TAB|wxTE_PROCESS_ENTER|wxTE_MULTILINE);
    #ifdef __WXMSW__
    // To get the newer version of the font on MSW, we use font wxSYS_DEFAULT_GUI_FONT with family set to wxFONTFAMILY_TELETYPE
    wxFont m_textCtrlCtagsSearchPathsFont = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_textCtrlCtagsSearchPathsFont.SetFamily(wxFONTFAMILY_TELETYPE);
    #else
    wxFont m_textCtrlCtagsSearchPathsFont = wxSystemSettings::GetFont(wxSYS_ANSI_FIXED_FONT);
    m_textCtrlCtagsSearchPathsFont.SetFamily(wxFONTFAMILY_TELETYPE);
    #endif
    m_textCtrlCtagsSearchPaths->SetFont(m_textCtrlCtagsSearchPathsFont);
    
    bSizer9->Add(m_textCtrlCtagsSearchPaths, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer8 = new wxBoxSizer(wxVERTICAL);
    
    bSizer9->Add(bSizer8, 0, wxEXPAND, 5);
    
    m_buttonAddSearchPath = new wxButton(m_panel38, wxID_ANY, _("&Add..."), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer8->Add(m_buttonAddSearchPath, 0, wxALL|wxEXPAND, 5);
    
    m_buttonCtagsSuggest = new wxButton(m_panel38, wxID_ANY, _("Suggest"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_buttonCtagsSuggest->SetToolTip(_("Suggest search paths based on the installed compilers"));
    
    bSizer8->Add(m_buttonCtagsSuggest, 0, wxALL, 5);
    
    m_panel40 = new wxPanel(m_notebook36, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_notebook36->AddPage(m_panel40, _("Exclude Paths"), false);
    
    wxBoxSizer* boxSizer42 = new wxBoxSizer(wxVERTICAL);
    m_panel40->SetSizer(boxSizer42);
    
    m_banner44 = new wxBannerWindow(m_panel40, wxID_ANY, wxTOP, wxDefaultPosition, wxSize(-1,-1), wxBORDER_THEME);
    m_banner44->SetBitmap(wxNullBitmap);
    m_banner44->SetText(_("Exclude paths"), _("codelite code completion will ignore any files found in one of the paths below"));
    m_banner44->SetGradient(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION), wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    m_banner44->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
    
    boxSizer42->Add(m_banner44, 0, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer91 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer42->Add(bSizer91, 1, wxEXPAND, 5);
    
    m_textCtrlCtagsExcludePaths = new wxTextCtrl(m_panel40, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), wxTE_RICH2|wxTE_PROCESS_TAB|wxTE_PROCESS_ENTER|wxTE_MULTILINE);
    #ifdef __WXMSW__
    // To get the newer version of the font on MSW, we use font wxSYS_DEFAULT_GUI_FONT with family set to wxFONTFAMILY_TELETYPE
    wxFont m_textCtrlCtagsExcludePathsFont = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_textCtrlCtagsExcludePathsFont.SetFamily(wxFONTFAMILY_TELETYPE);
    #else
    wxFont m_textCtrlCtagsExcludePathsFont = wxSystemSettings::GetFont(wxSYS_ANSI_FIXED_FONT);
    m_textCtrlCtagsExcludePathsFont.SetFamily(wxFONTFAMILY_TELETYPE);
    #endif
    m_textCtrlCtagsExcludePaths->SetFont(m_textCtrlCtagsExcludePathsFont);
    
    bSizer91->Add(m_textCtrlCtagsExcludePaths, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer81 = new wxBoxSizer(wxVERTICAL);
    
    bSizer91->Add(bSizer81, 0, wxEXPAND, 5);
    
    m_buttonAddExcludePath = new wxButton(m_panel40, wxID_ANY, _("&Add..."), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer81->Add(m_buttonAddExcludePath, 0, wxALL|wxEXPAND, 5);
    
    m_panelCtagsAdvanced = new wxPanel(m_treebook2, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_treebook2->InsertSubPage(3, m_panelCtagsAdvanced, _("Advanced"), false, wxNOT_FOUND);
    
    wxBoxSizer* bSizer6 = new wxBoxSizer(wxVERTICAL);
    m_panelCtagsAdvanced->SetSizer(bSizer6);
    
    wxFlexGridSizer* fgSizer2 = new wxFlexGridSizer(0, 2, 0, 0);
    fgSizer2->SetFlexibleDirection( wxBOTH );
    fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    fgSizer2->AddGrowableCol(1);
    
    bSizer6->Add(fgSizer2, 0, wxALL|wxEXPAND, 5);
    
    m_staticText3 = new wxStaticText(m_panelCtagsAdvanced, wxID_ANY, _("File Types:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer2->Add(m_staticText3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textFileSpec = new wxTextCtrl(m_panelCtagsAdvanced, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textFileSpec->SetHint(wxT(""));
    #endif
    
    fgSizer2->Add(m_textFileSpec, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);
    
    wxBoxSizer* bSizer14 = new wxBoxSizer(wxVERTICAL);
    
    bSizer6->Add(bSizer14, 0, wxEXPAND, 5);
    
    m_staticText92 = new wxStaticText(m_panelCtagsAdvanced, wxID_ANY, _("CodeLite can suggest a list of 'Tokens' that will be added to the 'Tokens' table based on parsing the following header files \n(space separated list):"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer14->Add(m_staticText92, 0, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer15 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer14->Add(bSizer15, 1, wxEXPAND, 5);
    
    m_textCtrlFilesList = new wxTextCtrl(m_panelCtagsAdvanced, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlFilesList->SetHint(wxT(""));
    #endif
    
    bSizer15->Add(m_textCtrlFilesList, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_buttonParse = new wxButton(m_panelCtagsAdvanced, wxID_ANY, _("Parse!"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer15->Add(m_buttonParse, 0, wxALL, 5);
    
    m_notebook2 = new wxNotebook(m_panelCtagsAdvanced, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), 0);
    m_notebook2->SetName(wxT("m_notebook2"));
    
    bSizer6->Add(m_notebook2, 1, wxALL|wxEXPAND, 5);
    
    m_panelClangGeneral = new wxPanel(m_notebook2, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxTAB_TRAVERSAL);
    m_panelClangGeneral->SetToolTip(_("List here list of tokens to be pre-processed by codelite-indexer. \nUsually, you would like to add here macros which confuse the parser\nClick the below link to read more about this feature and the syntax supported.\n"));
    m_notebook2->AddPage(m_panelClangGeneral, _("Tokens"), false);
    
    wxBoxSizer* bSizer5 = new wxBoxSizer(wxVERTICAL);
    m_panelClangGeneral->SetSizer(bSizer5);
    
    m_textPrep = new wxTextCtrl(m_panelClangGeneral, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), wxTE_RICH2|wxTE_PROCESS_TAB|wxTE_PROCESS_ENTER|wxTE_MULTILINE|wxTE_DONTWRAP);
    #ifdef __WXMSW__
    // To get the newer version of the font on MSW, we use font wxSYS_DEFAULT_GUI_FONT with family set to wxFONTFAMILY_TELETYPE
    wxFont m_textPrepFont = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_textPrepFont.SetFamily(wxFONTFAMILY_TELETYPE);
    #else
    wxFont m_textPrepFont = wxSystemSettings::GetFont(wxSYS_ANSI_FIXED_FONT);
    m_textPrepFont.SetFamily(wxFONTFAMILY_TELETYPE);
    #endif
    m_textPrep->SetFont(m_textPrepFont);
    
    bSizer5->Add(m_textPrep, 1, wxEXPAND, 5);
    
    wxStaticBoxSizer* sbSizer52 = new wxStaticBoxSizer( new wxStaticBox(m_panelClangGeneral, wxID_ANY, wxT("")), wxVERTICAL);
    
    bSizer5->Add(sbSizer52, 0, wxALL|wxEXPAND, 5);
    
    m_staticText9 = new wxStaticText(m_panelClangGeneral, wxID_ANY, _("List here list of tokens to be pre-processed by codelite-indexer usually, you would like to add here\nmacros which confuse the parser"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_staticText9->SetToolTip(_("List here list of tokens to be pre-processed by codelite-indexer. \nUsually, you would like to add here macros which confuse the parser\nClick the below link to read more about this feature and the syntax supported.\n"));
    
    sbSizer52->Add(m_staticText9, 0, wxALL|wxEXPAND, 5);
    
    m_hyperlink1 = new wxHyperlinkCtrl(m_panelClangGeneral, wxID_ANY, _("Macros Handling"), wxT("http://codelite.org/LiteEditor/MacrosHandling101"), wxDefaultPosition, wxSize(-1, -1), wxHL_DEFAULT_STYLE);
    
    sbSizer52->Add(m_hyperlink1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    wxBoxSizer* bSizer131 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer5->Add(bSizer131, 0, wxEXPAND, 5);
    
    m_panel5 = new wxPanel(m_notebook2, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxTAB_TRAVERSAL);
    m_notebook2->AddPage(m_panel5, _("Types"), false);
    
    wxBoxSizer* bSizer13 = new wxBoxSizer(wxVERTICAL);
    m_panel5->SetSizer(bSizer13);
    
    wxStaticBoxSizer* sbSizer521 = new wxStaticBoxSizer( new wxStaticBox(m_panel5, wxID_ANY, wxT("")), wxVERTICAL);
    
    bSizer13->Add(sbSizer521, 0, wxALL|wxEXPAND, 5);
    
    m_staticText91 = new wxStaticText(m_panel5, wxID_ANY, _("Specify here a list of types which are to be specially handled while parsing C and C++\nsource files in the format of TYPE1=TYPE2. So when TYPE1 is found, CodeLite will offer\ncompletion as if it was TYPE2 was found"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    sbSizer521->Add(m_staticText91, 0, wxALL|wxEXPAND, 5);
    
    m_textTypes = new wxTextCtrl(m_panel5, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), wxTE_RICH2|wxTE_MULTILINE);
    #ifdef __WXMSW__
    // To get the newer version of the font on MSW, we use font wxSYS_DEFAULT_GUI_FONT with family set to wxFONTFAMILY_TELETYPE
    wxFont m_textTypesFont = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_textTypesFont.SetFamily(wxFONTFAMILY_TELETYPE);
    #else
    wxFont m_textTypesFont = wxSystemSettings::GetFont(wxSYS_ANSI_FIXED_FONT);
    m_textTypesFont.SetFamily(wxFONTFAMILY_TELETYPE);
    #endif
    m_textTypes->SetFont(m_textTypesFont);
    
    bSizer13->Add(m_textTypes, 1, wxEXPAND, 5);
    
    m_panelClang = new wxPanel(m_treebook2, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_treebook2->AddPage(m_panelClang, _("Clang"), false, wxNOT_FOUND);
    
    wxBoxSizer* bSizer18 = new wxBoxSizer(wxVERTICAL);
    m_panelClang->SetSizer(bSizer18);
    
    m_checkBoxEnableClangCC = new wxCheckBox(m_panelClang, wxID_ANY, _("Enable clang code completion"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxEnableClangCC->SetValue(false);
    
    bSizer18->Add(m_checkBoxEnableClangCC, 0, wxALL, 5);
    
    m_notebookClang = new wxNotebook(m_panelClang, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), 0);
    m_notebookClang->SetName(wxT("m_notebookClang"));
    
    bSizer18->Add(m_notebookClang, 1, wxALL|wxEXPAND, 5);
    
    m_panel3 = new wxPanel(m_notebookClang, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxTAB_TRAVERSAL);
    m_notebookClang->AddPage(m_panel3, _("General"), false);
    
    wxBoxSizer* bSizer20 = new wxBoxSizer(wxVERTICAL);
    m_panel3->SetSizer(bSizer20);
    
    wxFlexGridSizer* fgSizer5 = new wxFlexGridSizer(0, 1, 0, 0);
    fgSizer5->SetFlexibleDirection( wxBOTH );
    fgSizer5->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    fgSizer5->AddGrowableCol(0);
    
    bSizer20->Add(fgSizer5, 0, wxALL|wxEXPAND, 5);
    
    m_checkBoxClangFirst = new wxCheckBox(m_panel3, wxID_ANY, _("Only use clang code completion"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxClangFirst->SetValue(false);
    m_checkBoxClangFirst->SetToolTip(_("Check this option so codelite will use the clang's code completion over the ctags one.\nclang is more accurate, while ctags is faster"));
    
    fgSizer5->Add(m_checkBoxClangFirst, 0, wxALL, 5);
    
    m_staticText13 = new wxStaticText(m_panel3, wxID_ANY, _("Search paths:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer20->Add(m_staticText13, 0, wxALL|wxEXPAND, 5);
    
    m_panel8 = new wxPanel(m_panel3, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxTAB_TRAVERSAL);
    
    bSizer20->Add(m_panel8, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer24 = new wxBoxSizer(wxVERTICAL);
    m_panel8->SetSizer(bSizer24);
    
    m_textCtrlClangSearchPaths = new wxTextCtrl(m_panel8, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), wxTE_RICH2|wxTE_PROCESS_TAB|wxTE_PROCESS_ENTER|wxTE_MULTILINE);
    #ifdef __WXMSW__
    // To get the newer version of the font on MSW, we use font wxSYS_DEFAULT_GUI_FONT with family set to wxFONTFAMILY_TELETYPE
    wxFont m_textCtrlClangSearchPathsFont = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_textCtrlClangSearchPathsFont.SetFamily(wxFONTFAMILY_TELETYPE);
    #else
    wxFont m_textCtrlClangSearchPathsFont = wxSystemSettings::GetFont(wxSYS_ANSI_FIXED_FONT);
    m_textCtrlClangSearchPathsFont.SetFamily(wxFONTFAMILY_TELETYPE);
    #endif
    m_textCtrlClangSearchPaths->SetFont(m_textCtrlClangSearchPathsFont);
    m_textCtrlClangSearchPaths->SetToolTip(_("Add here search paths used by clang for locating include files"));
    
    bSizer24->Add(m_textCtrlClangSearchPaths, 1, wxEXPAND, 5);
    
    m_buttonSuggest = new wxButton(m_panel8, wxID_ANY, _("Suggest search paths..."), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer24->Add(m_buttonSuggest, 0, wxTOP|wxBOTTOM|wxEXPAND, 5);
    
    m_panel4 = new wxPanel(m_notebookClang, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxTAB_TRAVERSAL);
    m_notebookClang->AddPage(m_panel4, _("Advanced"), false);
    
    wxBoxSizer* bSizer21 = new wxBoxSizer(wxVERTICAL);
    m_panel4->SetSizer(bSizer21);
    
    wxFlexGridSizer* fgSizerClangCache = new wxFlexGridSizer(0, 2, 0, 0);
    fgSizerClangCache->SetFlexibleDirection( wxBOTH );
    fgSizerClangCache->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    fgSizerClangCache->AddGrowableCol(1);
    
    bSizer21->Add(fgSizerClangCache, 0, wxEXPAND, 5);
    
    m_staticText101 = new wxStaticText(m_panel4, wxID_ANY, _("Clear clang translation unit cache:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizerClangCache->Add(m_staticText101, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_buttonClearCache = new wxButton(m_panel4, wxID_CLEAR, _("Clear"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonClearCache->SetToolTip(_("Clicking this button will erase all clang's generated PCH files. \nUse this button as the first step to resolve a code completion issue"));
    
    fgSizerClangCache->Add(m_buttonClearCache, 0, wxALL|wxEXPAND|wxALIGN_RIGHT, 5);
    
    m_staticText12 = new wxStaticText(m_panel4, wxID_ANY, _("Parsing policy:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizerClangCache->Add(m_staticText12, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxArrayString m_choiceCachePolicyArr;
    m_choiceCachePolicyArr.Add(wxT("Lazy"));
    m_choiceCachePolicyArr.Add(wxT("On File Load"));
    m_choiceCachePolicy = new wxChoice(m_panel4, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), m_choiceCachePolicyArr, 0);
    m_choiceCachePolicy->SetSelection(1);
    
    fgSizerClangCache->Add(m_choiceCachePolicy, 0, wxALL|wxEXPAND|wxALIGN_RIGHT, 5);
    
    wxBoxSizer* bSizer3 = new wxBoxSizer(wxHORIZONTAL);
    
    mainSizer->Add(bSizer3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_buttonOK = new wxButton(this, wxID_OK, _("&OK"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonOK->SetDefault();
    
    bSizer3->Add(m_buttonOK, 0, wxALL, 5);
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, _("Cancel"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer3->Add(m_buttonCancel, 0, wxALL, 5);
    
    
    #if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(m_treebook2)){
        wxPersistenceManager::Get().RegisterAndRestore(m_treebook2);
    } else {
        wxPersistenceManager::Get().Restore(m_treebook2);
    }
    #endif
    m_treebook2->ExpandNode( 0, true );
    m_treebook2->ExpandNode( 1, true );
    m_treebook2->ExpandNode( 2, true );
    m_treebook2->ExpandNode( 3, true );
    m_treebook2->ExpandNode( 4, true );
    
    #if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(m_notebook36)){
        wxPersistenceManager::Get().RegisterAndRestore(m_notebook36);
    } else {
        wxPersistenceManager::Get().Restore(m_notebook36);
    }
    #endif
    m_treebook2->ExpandNode( 5, true );
    
    #if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(m_notebook2)){
        wxPersistenceManager::Get().RegisterAndRestore(m_notebook2);
    } else {
        wxPersistenceManager::Get().Restore(m_notebook2);
    }
    #endif
    m_treebook2->ExpandNode( 6, true );
    
    #if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(m_notebookClang)){
        wxPersistenceManager::Get().RegisterAndRestore(m_notebookClang);
    } else {
        wxPersistenceManager::Get().Restore(m_notebookClang);
    }
    #endif
    
    SetName(wxT("TagsOptionsBaseDlg"));
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    CentreOnParent(wxBOTH);
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_pgMgrColouring->Connect(wxEVT_PG_CHANGED, wxPropertyGridEventHandler(TagsOptionsBaseDlg::OnColouringPropertyValueChanged), NULL, this);
    m_staticTextMinWordLen->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnAutoShowWordAssitUI), NULL, this);
    m_sliderMinWordLen->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnAutoShowWordAssitUI), NULL, this);
    m_buttonAddSearchPath->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(TagsOptionsBaseDlg::OnAddSearchPath), NULL, this);
    m_buttonCtagsSuggest->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(TagsOptionsBaseDlg::OnSuggestCtags), NULL, this);
    m_buttonAddExcludePath->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(TagsOptionsBaseDlg::OnAddExcludePath), NULL, this);
    m_buttonParse->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(TagsOptionsBaseDlg::OnParse), NULL, this);
    m_buttonParse->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnFileSelectedUI), NULL, this);
    m_notebookClang->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnClangCCEnabledUI), NULL, this);
    m_checkBoxClangFirst->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnClangCCEnabledUI), NULL, this);
    m_textCtrlClangSearchPaths->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnClangCCEnabledUI), NULL, this);
    m_buttonSuggest->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(TagsOptionsBaseDlg::OnSuggestSearchPaths), NULL, this);
    m_buttonSuggest->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnClangCCEnabledUI), NULL, this);
    m_staticText101->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnClangCCEnabledUI), NULL, this);
    m_buttonClearCache->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(TagsOptionsBaseDlg::OnClearClangCache), NULL, this);
    m_buttonClearCache->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnClearClangCacheUI), NULL, this);
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(TagsOptionsBaseDlg::OnButtonOK), NULL, this);
    
}

TagsOptionsBaseDlg::~TagsOptionsBaseDlg()
{
    m_pgMgrColouring->Disconnect(wxEVT_PG_CHANGED, wxPropertyGridEventHandler(TagsOptionsBaseDlg::OnColouringPropertyValueChanged), NULL, this);
    m_staticTextMinWordLen->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnAutoShowWordAssitUI), NULL, this);
    m_sliderMinWordLen->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnAutoShowWordAssitUI), NULL, this);
    m_buttonAddSearchPath->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(TagsOptionsBaseDlg::OnAddSearchPath), NULL, this);
    m_buttonCtagsSuggest->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(TagsOptionsBaseDlg::OnSuggestCtags), NULL, this);
    m_buttonAddExcludePath->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(TagsOptionsBaseDlg::OnAddExcludePath), NULL, this);
    m_buttonParse->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(TagsOptionsBaseDlg::OnParse), NULL, this);
    m_buttonParse->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnFileSelectedUI), NULL, this);
    m_notebookClang->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnClangCCEnabledUI), NULL, this);
    m_checkBoxClangFirst->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnClangCCEnabledUI), NULL, this);
    m_textCtrlClangSearchPaths->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnClangCCEnabledUI), NULL, this);
    m_buttonSuggest->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(TagsOptionsBaseDlg::OnSuggestSearchPaths), NULL, this);
    m_buttonSuggest->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnClangCCEnabledUI), NULL, this);
    m_staticText101->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnClangCCEnabledUI), NULL, this);
    m_buttonClearCache->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(TagsOptionsBaseDlg::OnClearClangCache), NULL, this);
    m_buttonClearCache->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(TagsOptionsBaseDlg::OnClearClangCacheUI), NULL, this);
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(TagsOptionsBaseDlg::OnButtonOK), NULL, this);
    
}
