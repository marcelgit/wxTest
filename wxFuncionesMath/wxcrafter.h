//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _WXTEST_WXFUNCIONESMATH_WXCRAFTER_BASE_CLASSES_H
#define _WXTEST_WXFUNCIONESMATH_WXCRAFTER_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/frame.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/menu.h>
#include <wx/toolbar.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/spinctrl.h>
#include <wx/button.h>
#include <wx/textctrl.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

#ifdef WXC_FROM_DIP
#undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
#define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
#define WXC_FROM_DIP(x) x
#endif


class MainFrameBaseClass : public wxFrame
{
protected:
    wxPanel* m_mainPanel;
    wxMenuBar* m_menuBar;
    wxMenu* m_name_File;
    wxMenuItem* m_menuItem_Trig;
    wxMenuItem* m_menuItem_Exp;
    wxMenuItem* m_menuItem_Log;
    wxMenuItem* m_menuItemHip;
    wxMenuItem* m_menuItem_Otras;
    wxMenuItem* m_menuItem_Exit;
    wxMenu* m_name_Help;
    wxMenuItem* m_menuItem_About;
    wxToolBar* m_mainToolbar;

protected:
    virtual void OnMenuItemTrig_Selected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnMenuItemExp_Selected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnMenuItemLog(wxCommandEvent& event) { event.Skip(); }
    virtual void OnMenuItemHip_Selected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnMenuItemOtrasSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnExit(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAbout(wxCommandEvent& event) { event.Skip(); }

public:
    wxPanel* GetMainPanel() { return m_mainPanel; }
    wxMenuBar* GetMenuBar() { return m_menuBar; }
    wxToolBar* GetMainToolbar() { return m_mainToolbar; }
    MainFrameBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Funciones matematicas de la libreria estandar"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxCAPTION|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxSYSTEM_MENU|wxCLOSE_BOX);
    virtual ~MainFrameBaseClass();
};


class TrigonometricasBaseClass : public wxDialog
{
protected:
    wxPanel* m_panel19;
    wxStaticText* m_staticText23;
    wxSpinCtrl* m_spinCtrl_Angulo;
    wxStaticText* m_staticText_sin_lbl;
    wxStaticText* m_staticText_sin_value;
    wxStaticText* m_staticText_cos_lbl;
    wxStaticText* m_staticText_cos_value;
    wxStaticText* m_staticText_tan_lbl;
    wxStaticText* m_staticText_tan_value;
    wxStaticText* m_staticText_asin_lbl;
    wxStaticText* m_staticText_asin_value;
    wxStaticText* m_staticText_acos_lbl;
    wxStaticText* m_staticText_acos_value;
    wxStaticText* m_staticText_atan_lbl;
    wxStaticText* m_staticText_atan_value;
    wxStaticText* m_staticText_atan2_lbl;
    wxStaticText* m_staticText_atan2_value;
    wxStdDialogButtonSizer* m_stdBtnSizer55;
    wxButton* m_button_CLOSE;

protected:
    virtual void OnAnguloChanged(wxSpinEvent& event) { event.Skip(); }
    virtual void OnCloseTrigon(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText23() { return m_staticText23; }
    wxSpinCtrl* GetSpinCtrl_Angulo() { return m_spinCtrl_Angulo; }
    wxStaticText* GetStaticText_sin_lbl() { return m_staticText_sin_lbl; }
    wxStaticText* GetStaticText_sin_value() { return m_staticText_sin_value; }
    wxStaticText* GetStaticText_cos_lbl() { return m_staticText_cos_lbl; }
    wxStaticText* GetStaticText_cos_value() { return m_staticText_cos_value; }
    wxStaticText* GetStaticText_tan_lbl() { return m_staticText_tan_lbl; }
    wxStaticText* GetStaticText_tan_value() { return m_staticText_tan_value; }
    wxStaticText* GetStaticText_asin_lbl() { return m_staticText_asin_lbl; }
    wxStaticText* GetStaticText_asin_value() { return m_staticText_asin_value; }
    wxStaticText* GetStaticText_acos_lbl() { return m_staticText_acos_lbl; }
    wxStaticText* GetStaticText_acos_value() { return m_staticText_acos_value; }
    wxStaticText* GetStaticText_atan_lbl() { return m_staticText_atan_lbl; }
    wxStaticText* GetStaticText_atan_value() { return m_staticText_atan_value; }
    wxStaticText* GetStaticText_atan2_lbl() { return m_staticText_atan2_lbl; }
    wxStaticText* GetStaticText_atan2_value() { return m_staticText_atan2_value; }
    wxPanel* GetPanel19() { return m_panel19; }
    TrigonometricasBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Funciones trigonometricas"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,500), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~TrigonometricasBaseClass();
};


class ExponencialesBaseClass : public wxDialog
{
protected:
    wxPanel* m_panel63;
    wxStaticText* m_staticText_argu_x;
    wxTextCtrl* m_textCtrl_argu_x;
    wxStaticText* m_staticText_argu_y;
    wxTextCtrl* m_textCtrl_argu_y;
    wxStaticText* m_staticText_exp_lbl;
    wxStaticText* m_staticText_exp_res;
    wxStaticText* m_staticText_frexp_lbl;
    wxStaticText* m_staticText_frexp_res;
    wxStaticText* m_staticText_ldexp_lbl;
    wxStaticText* m_staticText_ldexp_res;
    wxStdDialogButtonSizer* m_stdBtnSizer65;
    wxButton* m_buttonClose;
    wxButton* m_buttonApply;

protected:
    virtual void OnCloseExp(wxCommandEvent& event) { event.Skip(); }
    virtual void OnApplyExp(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText_argu_x() { return m_staticText_argu_x; }
    wxTextCtrl* GetTextCtrl_argu_x() { return m_textCtrl_argu_x; }
    wxStaticText* GetStaticText_argu_y() { return m_staticText_argu_y; }
    wxTextCtrl* GetTextCtrl_argu_y() { return m_textCtrl_argu_y; }
    wxStaticText* GetStaticText_exp_lbl() { return m_staticText_exp_lbl; }
    wxStaticText* GetStaticText_exp_res() { return m_staticText_exp_res; }
    wxStaticText* GetStaticText_frexp_lbl() { return m_staticText_frexp_lbl; }
    wxStaticText* GetStaticText_frexp_res() { return m_staticText_frexp_res; }
    wxStaticText* GetStaticText_ldexp_lbl() { return m_staticText_ldexp_lbl; }
    wxStaticText* GetStaticText_ldexp_res() { return m_staticText_ldexp_res; }
    wxPanel* GetPanel63() { return m_panel63; }
    ExponencialesBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Funciones exponenciales"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~ExponencialesBaseClass();
};


class LogaritmicasBaseClass : public wxDialog
{
protected:
    wxPanel* m_panel97;
    wxStaticText* m_staticText_argu;
    wxTextCtrl* m_textCtrl_argu;
    wxStaticText* m_staticText_log_lbl;
    wxStaticText* m_staticText_log_res;
    wxStaticText* m_staticText_log10_lbl;
    wxStaticText* m_staticText_log10_res;
    wxStdDialogButtonSizer* m_stdBtnSizer99;
    wxButton* m_button101;

protected:
    virtual void OnArgumentoChanged(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClose(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText_argu() { return m_staticText_argu; }
    wxTextCtrl* GetTextCtrl_argu() { return m_textCtrl_argu; }
    wxStaticText* GetStaticText_log_lbl() { return m_staticText_log_lbl; }
    wxStaticText* GetStaticText_log_res() { return m_staticText_log_res; }
    wxStaticText* GetStaticText_log10_lbl() { return m_staticText_log10_lbl; }
    wxStaticText* GetStaticText_log10_res() { return m_staticText_log10_res; }
    wxPanel* GetPanel97() { return m_panel97; }
    LogaritmicasBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Funciones logaritmicas"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~LogaritmicasBaseClass();
};


class HiperbolicasBaseClass : public wxDialog
{
protected:
    wxPanel* m_panel123;
    wxStaticText* m_staticText135;
    wxTextCtrl* m_textCtrl_argu;
    wxStaticText* m_staticText_cosh_lbl;
    wxStaticText* m_staticText_cosh_res;
    wxStaticText* m_staticText_sinh_lbl;
    wxStaticText* m_staticText_sinh_res;
    wxStaticText* m_staticText_tanh_lbl;
    wxStaticText* m_staticText_tanh_res;
    wxStdDialogButtonSizer* m_stdBtnSizer131;
    wxButton* m_buttonClose;

protected:
    virtual void OnArgumentoChanged(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClose(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText135() { return m_staticText135; }
    wxTextCtrl* GetTextCtrl_argu() { return m_textCtrl_argu; }
    wxStaticText* GetStaticText_cosh_lbl() { return m_staticText_cosh_lbl; }
    wxStaticText* GetStaticText_cosh_res() { return m_staticText_cosh_res; }
    wxStaticText* GetStaticText_sinh_lbl() { return m_staticText_sinh_lbl; }
    wxStaticText* GetStaticText_sinh_res() { return m_staticText_sinh_res; }
    wxStaticText* GetStaticText_tanh_lbl() { return m_staticText_tanh_lbl; }
    wxStaticText* GetStaticText_tanh_res() { return m_staticText_tanh_res; }
    wxPanel* GetPanel123() { return m_panel123; }
    HiperbolicasBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Funciones hiperbolicas"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~HiperbolicasBaseClass();
};


class OtrasBaseClass : public wxDialog
{
protected:
    wxPanel* m_panel159;
    wxStaticText* m_staticText169;
    wxTextCtrl* m_textCtrlArgu_x;
    wxStaticText* m_staticText173;
    wxTextCtrl* m_textCtrlArgu_y;
    wxStaticText* m_staticText_sqrt_lbl;
    wxStaticText* m_staticText_sqrt_res;
    wxStaticText* m_staticText_ceil_lbl;
    wxStaticText* m_staticText_ceil_res;
    wxStaticText* m_staticText_abs_lbl;
    wxStaticText* m_staticText_abs_res;
    wxStaticText* m_staticText_labs_lbl;
    wxStaticText* m_staticText_labs_res;
    wxStaticText* m_staticText_floor_lbl;
    wxStaticText* m_staticText_floor_res;
    wxStaticText* m_staticText_modf_lbl;
    wxStaticText* m_staticText_modf_res;
    wxStaticText* m_staticText_pow_lbl;
    wxStaticText* m_staticText_pow_res;
    wxStaticText* m_staticText_fmod_lbl;
    wxStaticText* m_staticText_fmod_res;
    wxStdDialogButtonSizer* m_stdBtnSizer161;
    wxButton* m_buttonClose;
    wxButton* m_buttonApply;

protected:
    virtual void OnCloseClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnApplyClick(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText169() { return m_staticText169; }
    wxTextCtrl* GetTextCtrlArgu_x() { return m_textCtrlArgu_x; }
    wxStaticText* GetStaticText173() { return m_staticText173; }
    wxTextCtrl* GetTextCtrlArgu_y() { return m_textCtrlArgu_y; }
    wxStaticText* GetStaticText_sqrt_lbl() { return m_staticText_sqrt_lbl; }
    wxStaticText* GetStaticText_sqrt_res() { return m_staticText_sqrt_res; }
    wxStaticText* GetStaticText_ceil_lbl() { return m_staticText_ceil_lbl; }
    wxStaticText* GetStaticText_ceil_res() { return m_staticText_ceil_res; }
    wxStaticText* GetStaticText_abs_lbl() { return m_staticText_abs_lbl; }
    wxStaticText* GetStaticText_abs_res() { return m_staticText_abs_res; }
    wxStaticText* GetStaticText_labs_lbl() { return m_staticText_labs_lbl; }
    wxStaticText* GetStaticText_labs_res() { return m_staticText_labs_res; }
    wxStaticText* GetStaticText_floor_lbl() { return m_staticText_floor_lbl; }
    wxStaticText* GetStaticText_floor_res() { return m_staticText_floor_res; }
    wxStaticText* GetStaticText_modf_lbl() { return m_staticText_modf_lbl; }
    wxStaticText* GetStaticText_modf_res() { return m_staticText_modf_res; }
    wxStaticText* GetStaticText_pow_lbl() { return m_staticText_pow_lbl; }
    wxStaticText* GetStaticText_pow_res() { return m_staticText_pow_res; }
    wxStaticText* GetStaticText_fmod_lbl() { return m_staticText_fmod_lbl; }
    wxStaticText* GetStaticText_fmod_res() { return m_staticText_fmod_res; }
    wxPanel* GetPanel159() { return m_panel159; }
    OtrasBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Otras funciones matematicas"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~OtrasBaseClass();
};

#endif
