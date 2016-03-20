#include "MainFrame.h"
#include <wx/aboutdlg.h>
#include "TrigonometricasClass.h"
#include "ExponencialesClass.h"
#include "LogaritmicasClass.h"
#include "HiperbolicasClass.h"
#include "OtrasClass.h"

MainFrame::MainFrame(wxWindow* parent)
    : MainFrameBaseClass(parent)
{
}

MainFrame::~MainFrame()
{
}

void MainFrame::OnExit(wxCommandEvent& event)
{
    wxUnusedVar(event);
    Close();
}

void MainFrame::OnAbout(wxCommandEvent& event)
{
    wxUnusedVar(event);
    wxAboutDialogInfo info;
    info.SetCopyright(_("Standard Library"));
    info.SetLicence(_("GPL v2 or later"));
    info.SetDescription(_("Aplicacion para mostrar las funciones de la libreria estandar"));
    ::wxAboutBox(info);
}
void MainFrame::OnMenuItemExp_Selected(wxCommandEvent& event)
{
	ExponencialesClass *dlgExp = new ExponencialesClass(this);
	dlgExp->ShowModal();
	dlgExp->Destroy();
}
void MainFrame::OnMenuItemTrig_Selected(wxCommandEvent& event)
{
	TrigonometricasClass *dlgTrig = new TrigonometricasClass(this);
	dlgTrig->ShowModal();
	dlgTrig->Destroy();
}
void MainFrame::OnMenuItemLog(wxCommandEvent& event)
{
	LogaritmicasClass *dlgLog = new LogaritmicasClass(this);
	dlgLog->ShowModal();
	dlgLog->Destroy();
}
void MainFrame::OnMenuItemHip(wxMenuEvent& event)
{
}
void MainFrame::OnMenuItemHip_Selected(wxCommandEvent& event)
{
	HiperbolicasClass *dlgHip = new HiperbolicasClass(this);
	dlgHip->ShowModal();
	dlgHip->Destroy();
}
void MainFrame::OnMenuItemOtrasSelected(wxCommandEvent& event)
{
	OtrasClass *dlgOtras = new OtrasClass(this);
	dlgOtras->ShowModal();
	dlgOtras->Destroy();
}
