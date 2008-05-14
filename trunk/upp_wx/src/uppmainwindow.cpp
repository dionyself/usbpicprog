///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 16 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE! ---> Haha, I edited it anyway :P
///////////////////////////////////////////////////////////////////////////

#include "uppmainwindow.h"
#include "include_icons.h"
 #include "wx/app.h"

enum{
wxID_PROGRAM=wxID_HIGHEST+1,
wxID_READ,
wxID_VERIFY,
wxID_ERASE,
wxID_BLANKCHECK,
wxID_AUTODETECT,
wxID_CONNECT ,
wxID_DISCONNECT 
};


///////////////////////////////////////////////////////////////////////////

UppMainWindow::UppMainWindow( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
    
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	SetIcon(wxIcon( usbpicprog_xpm ));
	
	wxBoxSizer* bSizer;
	bSizer = new wxBoxSizer( wxVERTICAL );
	
	uppHexEdit = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_DONTWRAP|wxTE_MULTILINE );
	uppHexEdit->SetFont(wxFont(12, wxMODERN, wxNORMAL,wxNORMAL));
	//uppHexEdit->SetDefaultStyle(wxTextAttr()::SetFont());
	bSizer->Add( uppHexEdit, 1, wxBOTTOM|wxRIGHT|wxLEFT|wxEXPAND );
	
	this->SetSizer( bSizer );
	this->Layout();
	uppMenuBar = new wxMenuBar( 0 );
	uppMenuFile = new wxMenu();
	wxMenuItem* uppMenuNew;
	uppMenuNew = new wxMenuItem( uppMenuFile, wxID_NEW, wxString( wxT("&New") ) + wxT('\t') + wxT("CTRL+N"), wxT("Clear open hex file"), wxITEM_NORMAL );
	uppMenuFile->Append( uppMenuNew );
	
	wxMenuItem* uppMenuOpen;
	uppMenuOpen = new wxMenuItem( uppMenuFile, wxID_OPEN, wxString( wxT("&Open") ) + wxT('\t') + wxT("CTRL+O"), wxT("Open a hex file"), wxITEM_NORMAL );
	uppMenuFile->Append( uppMenuOpen );
	
	wxMenuItem* uppMenuRefresh;
	uppMenuRefresh = new wxMenuItem( uppMenuFile, wxID_REFRESH, wxString( wxT("&Reload") ) + wxT('\t') + wxT("CTRL+R"), wxT("Reload current hex file"), wxITEM_NORMAL );
	uppMenuFile->Append( uppMenuRefresh );
	
	wxMenuItem* uppMenuSave;
	uppMenuSave = new wxMenuItem( uppMenuFile, wxID_SAVE, wxString( wxT("&Save") ) + wxT('\t') + wxT("CTRL+S"), wxT("Save the hex file"), wxITEM_NORMAL );
	uppMenuFile->Append( uppMenuSave );
	
	wxMenuItem* uppMenuSaveAs;
	uppMenuSaveAs = new wxMenuItem( uppMenuFile, wxID_SAVE_AS, wxString( wxT("Save &As") ) , wxT("Save the hex file as"), wxITEM_NORMAL );
	uppMenuFile->Append( uppMenuSaveAs );
	
	uppMenuFile->AppendSeparator();
	
	wxMenuItem* uppMenuExit;
	uppMenuExit = new wxMenuItem( uppMenuFile, wxID_EXIT, wxString( wxT("&Quit") ) + wxT('\t') + wxT("ALT+F4"), wxT("Quit Usbpicprog"), wxITEM_NORMAL );
	uppMenuFile->Append( uppMenuExit );
	
	uppMenuBar->Append( uppMenuFile, wxT("&File") );
	
	uppMenuActions = new wxMenu();
	wxMenuItem* uppMenuProgram;
	uppMenuProgram = new wxMenuItem( uppMenuActions, wxID_PROGRAM, wxString( wxT("&Program") ) + wxT('\t') + wxT("F7"), wxT("Program the device"), wxITEM_NORMAL );
	uppMenuActions->Append( uppMenuProgram );
	
	wxMenuItem* uppMenuRead;
	uppMenuRead = new wxMenuItem( uppMenuActions, wxID_READ, wxString( wxT("&Read") ) + wxT('\t') + wxT("F8"), wxT("Read the device"), wxITEM_NORMAL );
	uppMenuActions->Append( uppMenuRead );
	
	wxMenuItem* uppMenuVerify;
	uppMenuVerify = new wxMenuItem( uppMenuActions, wxID_VERIFY, wxString( wxT("&Verify") ) , wxT("Verify the device"), wxITEM_NORMAL );
	uppMenuActions->Append( uppMenuVerify );
	
	wxMenuItem* uppMenuErase;
	uppMenuErase = new wxMenuItem( uppMenuActions, wxID_ERASE, wxString( wxT("&Erase") ) , wxT("Erase the device"), wxITEM_NORMAL );
	uppMenuActions->Append( uppMenuErase );
	
	wxMenuItem* uppMenuBlankCheck;
	uppMenuBlankCheck = new wxMenuItem( uppMenuActions, wxID_BLANKCHECK, wxString( wxT("&Blankcheck") ) , wxT("Check if the device is blank"), wxITEM_NORMAL );
	uppMenuActions->Append( uppMenuBlankCheck );
	
	wxMenuItem* uppMenuAutoDetect;
	uppMenuAutoDetect = new wxMenuItem( uppMenuActions, wxID_AUTODETECT, wxString( wxT("&Autodetect") ) , wxT("Detect the device"), wxITEM_NORMAL );
	uppMenuActions->Append( uppMenuAutoDetect );
	
	wxMenuItem* uppMenuConnect;
	uppMenuConnect = new wxMenuItem( uppMenuActions, wxID_CONNECT, wxString( wxT("&Connect") ) , wxT("Connect Usbpicprog"), wxITEM_NORMAL );
	uppMenuActions->Append( uppMenuConnect );
	
	wxMenuItem* uppMenuDisConnect;
	uppMenuDisConnect = new wxMenuItem( uppMenuActions, wxID_DISCONNECT, wxString( wxT("&Disconnect") ) , wxT("Disconnect Usbpicprog"), wxITEM_NORMAL );
	uppMenuActions->Append( uppMenuDisConnect );
	
	
	uppMenuBar->Append( uppMenuActions, wxT("&Actions") );
	
	uppMenuHelp = new wxMenu();
	wxMenuItem* uppMenuItemHelp;
	uppMenuItemHelp = new wxMenuItem( uppMenuHelp, wxID_HELP, wxString( wxT("&Help") ) + wxT('\t') + wxT("F1"), wxT("Open http://usbpicprog.sf.net"), wxITEM_NORMAL );
	uppMenuHelp->Append( uppMenuItemHelp );
	
	wxMenuItem* uppMenuAbout;
	uppMenuAbout = new wxMenuItem( uppMenuHelp, wxID_ABOUT, wxString( wxT("&About") ) , wxT("About Usbpicprog"), wxITEM_NORMAL );
	uppMenuHelp->Append( uppMenuAbout );
	
	uppMenuBar->Append( uppMenuHelp, wxT("&Help") );
	
	this->SetMenuBar( uppMenuBar );

	m_statusBar1 = this->CreateStatusBar( 4, 1, wxID_ANY );

	int statuswidths[10];
	statuswidths[STATUS_FIELD_HARDWARE] = -2;// auto resize left side of the status bar
	statuswidths[STATUS_FIELD_OTHER] = -2; // auto resize message box reserved for other things
	statuswidths[STATUS_FIELD_PROGRESS] = -1; // resize the progressbar also less
	statuswidths[STATUS_FIELD_SIDE] = 20;  // fix for mac os x where in the right bottom corner there is a handle to resize the window
	m_statusBar1->SetStatusWidths(4, statuswidths); 

	wxRect rect;
	m_statusBar1->GetFieldRect(STATUS_FIELD_PROGRESS, rect);

	uppProgressBar = new wxGauge(m_statusBar1, wxID_ANY, 100, rect.GetPosition(), rect.GetSize(), wxGA_HORIZONTAL, wxDefaultValidator, wxT("Progress"));

	m_toolBar1 = this->CreateToolBar( wxTB_DOCKABLE|wxTB_HORIZONTAL, wxID_ANY ); 
	m_toolBar1->AddTool( wxID_NEW, wxT("new"), wxArtProvider::GetBitmap(wxART_NEW,wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, wxT("new"), wxT("Clear open hex file") );
	m_toolBar1->AddTool( wxID_OPEN, wxT("open"), wxArtProvider::GetBitmap(wxART_FILE_OPEN,wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, wxT("open"),  wxT("Open a hex file") );
	m_toolBar1->AddTool( wxID_REFRESH, wxT("reload"), wxIcon(refresh_xpm), wxNullBitmap, wxITEM_NORMAL, wxT("reload"),  wxT("Reload the hex file") );
	m_toolBar1->AddTool( wxID_SAVE, wxT("save"), wxArtProvider::GetBitmap(wxART_FILE_SAVE,wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, wxT("save"), wxT("Save the hex file") );
	m_toolBar1->AddTool( wxID_SAVE_AS, wxT("save as"), wxArtProvider::GetBitmap(wxART_FILE_SAVE_AS,wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, wxT("save as"), wxT("Save the hex file as") );
	m_toolBar1->AddSeparator();
	m_toolBar1->AddTool( wxID_PROGRAM, wxT("program"), wxIcon( program_xpm ), wxNullBitmap, wxITEM_NORMAL, wxT("program"), wxT("Program the device") );
	m_toolBar1->AddTool( wxID_READ, wxT("read"), wxIcon( read_xpm ), wxNullBitmap, wxITEM_NORMAL, wxT("read"), wxT("Read the device") );
	m_toolBar1->AddTool( wxID_VERIFY, wxT("verify"), wxIcon( verify_xpm ), wxNullBitmap, wxITEM_NORMAL, wxT("verify"), wxT("Verify the device") );
	m_toolBar1->AddTool( wxID_ERASE, wxT("erase"), wxIcon( erase_xpm ), wxNullBitmap, wxITEM_NORMAL, wxT("erase"), wxT("Erase the device") );
	m_toolBar1->AddTool( wxID_BLANKCHECK, wxT("blankcheck"), wxIcon( blankcheck_xpm ), wxNullBitmap, wxITEM_NORMAL, wxT("blankcheck"), wxT("Blankcheck the device") );
	
	m_toolBar1->AddSeparator();
	m_comboBox1 = new wxComboBox( m_toolBar1, wxID_ANY, wxT("P18F2550"), wxDefaultPosition, wxSize(150,-1), 0, NULL, 0 ); 
	m_toolBar1->AddControl( m_comboBox1 );
	m_toolBar1->Realize();

	#ifdef __WXMAC__
		wxApp::s_macAboutMenuItemId = wxID_ABOUT;
	#endif

	
	
	// Connect Events
	this->Connect( uppMenuNew->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_new ) );
	this->Connect( uppMenuOpen->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_open ) );
	this->Connect( uppMenuRefresh->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_refresh ) );
	this->Connect( uppMenuSave->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_save ) );
	this->Connect( uppMenuSaveAs->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_save_as ) );
	this->Connect( uppMenuExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_exit ) );
	this->Connect( uppMenuProgram->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_program ) );
	this->Connect( uppMenuRead->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_read ) );
	this->Connect( uppMenuVerify->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_verify ) );
	this->Connect( uppMenuErase->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_erase ) );
	this->Connect( uppMenuBlankCheck->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_blankcheck ) );
	this->Connect( uppMenuAutoDetect->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_autodetect ) );
	this->Connect( uppMenuConnect->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_connect ) );
	this->Connect( uppMenuDisConnect->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_disconnect ) );
	this->Connect( uppMenuItemHelp->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_help ) );
	this->Connect( uppMenuAbout->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_about ) );
	
	m_comboBox1->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( UppMainWindow::on_combo_changed ), NULL, this );
	
	this->SetSize(800,600);
}

BEGIN_EVENT_TABLE(UppMainWindow, wxFrame)
 EVT_SIZE(UppMainWindow::OnSize)
END_EVENT_TABLE()

UppMainWindow::~UppMainWindow()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_new ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_open ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_refresh ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_save ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_save_as ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_exit ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_program ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_read ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_verify ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_erase ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_blankcheck ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_autodetect ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_connect ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_disconnect ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_help ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( UppMainWindow::on_about ) );
	m_comboBox1->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( UppMainWindow::on_combo_changed ), NULL, this );
}
