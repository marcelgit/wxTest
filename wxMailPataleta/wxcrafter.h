//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef WXTEST_WXMAILPATALETA_WXCRAFTER_BASE_CLASSES_H
#define WXTEST_WXMAILPATALETA_WXCRAFTER_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/datectrl.h>
#include <wx/statline.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include "globalVal.h"
#include <wx/button.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class MainDialogBaseClass : public wxDialog
{
protected:
    wxPanel* m_panel17;
    wxDatePickerCtrl* m_fechaInformeDatePicker;
    wxStaticLine* m_staticLine51;
    wxStaticText* m_staticText27;
    wxTextCtrl* m_saldoAnteriorTextCtrl;
    wxStaticText* m_staticText31;
    wxTextCtrl* m_creditoConcedidoTextCtrl;
    wxStaticText* m_staticText35;
    wxTextCtrl* m_creditoCobradoTextCtrl;
    wxStaticText* m_staticText39;
    wxTextCtrl* m_saldoFinalTextCtrl;
    wxStaticLine* m_staticLine53;
    wxStaticText* m_staticText55;
    wxTextCtrl* m_banco1textCtrl;
    wxDatePickerCtrl* m_vencimiento1banco1datePicker;
    wxTextCtrl* m_importe1banco1textCtrl;
    wxStaticText* m_staticText63;
    wxDatePickerCtrl* m_vencimiento2banco1datePicker;
    wxTextCtrl* m_importe2banco1textCtrl;
    wxStaticText* m_staticText73;
    wxTextCtrl* m_banco2textCtrl;
    wxDatePickerCtrl* m_vencimiento1banco2datePicker;
    wxTextCtrl* m_importe1banco2textCtrl;
    wxStaticText* m_staticText81;
    wxDatePickerCtrl* m_vencimiento2banco2datePicker;
    wxTextCtrl* m_importe2banco2textCtrl;
    wxStaticText* m_staticText89;
    wxTextCtrl* m_banco3textCtrl;
    wxDatePickerCtrl* m_vencimiento1banco3datePicker;
    wxTextCtrl* m_importe1banco3textCtrl;
    wxStaticText* m_staticText97;
    wxDatePickerCtrl* m_vencimiento2banco3datePicker;
    wxTextCtrl* m_importe2banco3textCtrl;
    wxStaticText* m_staticText127;
    wxTextCtrl* m_importeTotalVencimientosTextCtrl;
    wxStaticLine* m_staticLine135;
    wxStaticText* m_staticText109;
    wxTextCtrl* m_totalPagaresEnCarteraTextCtrl;
    wxStaticText* m_staticText115;
    wxDatePickerCtrl* m_prevision1datePicker;
    wxTextCtrl* m_importePrevision1textCtrl;
    wxStaticText* m_staticText121;
    wxDatePickerCtrl* m_prevision2datePicker;
    wxTextCtrl* m_importePrevision2textCtrl;
    wxStaticLine* m_staticLine137;
    wxStaticLine* m_staticLine15;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnSaldoAnteriorUpdated(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCreditoConcedidoUpdated(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCreditoCobradoUpdated(wxCommandEvent& event) { event.Skip(); }
    virtual void OnImporte1Banco1Updated(wxCommandEvent& event) { event.Skip(); }
    virtual void OnImporte2Banco1Updated(wxCommandEvent& event) { event.Skip(); }
    virtual void OnImporte1Banco2Updated(wxCommandEvent& event) { event.Skip(); }
    virtual void OnImporte2Banco2Updated(wxCommandEvent& event) { event.Skip(); }
    virtual void OnImporte1Banco3Updated(wxCommandEvent& event) { event.Skip(); }
    virtual void OnImporte2Banco3Updated(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonOKClicked(wxCommandEvent& event) { event.Skip(); }

public:
    wxDatePickerCtrl* GetFechaInformeDatePicker() { return m_fechaInformeDatePicker; }
    wxStaticLine* GetStaticLine51() { return m_staticLine51; }
    wxStaticText* GetStaticText27() { return m_staticText27; }
    wxTextCtrl* GetSaldoAnteriorTextCtrl() { return m_saldoAnteriorTextCtrl; }
    wxStaticText* GetStaticText31() { return m_staticText31; }
    wxTextCtrl* GetCreditoConcedidoTextCtrl() { return m_creditoConcedidoTextCtrl; }
    wxStaticText* GetStaticText35() { return m_staticText35; }
    wxTextCtrl* GetCreditoCobradoTextCtrl() { return m_creditoCobradoTextCtrl; }
    wxStaticText* GetStaticText39() { return m_staticText39; }
    wxTextCtrl* GetSaldoFinalTextCtrl() { return m_saldoFinalTextCtrl; }
    wxStaticLine* GetStaticLine53() { return m_staticLine53; }
    wxStaticText* GetStaticText55() { return m_staticText55; }
    wxTextCtrl* GetBanco1textCtrl() { return m_banco1textCtrl; }
    wxDatePickerCtrl* GetVencimiento1banco1datePicker() { return m_vencimiento1banco1datePicker; }
    wxTextCtrl* GetImporte1banco1textCtrl() { return m_importe1banco1textCtrl; }
    wxStaticText* GetStaticText63() { return m_staticText63; }
    wxDatePickerCtrl* GetVencimiento2banco1datePicker() { return m_vencimiento2banco1datePicker; }
    wxTextCtrl* GetImporte2banco1textCtrl() { return m_importe2banco1textCtrl; }
    wxStaticText* GetStaticText73() { return m_staticText73; }
    wxTextCtrl* GetBanco2textCtrl() { return m_banco2textCtrl; }
    wxDatePickerCtrl* GetVencimiento1banco2datePicker() { return m_vencimiento1banco2datePicker; }
    wxTextCtrl* GetImporte1banco2textCtrl() { return m_importe1banco2textCtrl; }
    wxStaticText* GetStaticText81() { return m_staticText81; }
    wxDatePickerCtrl* GetVencimiento2banco2datePicker() { return m_vencimiento2banco2datePicker; }
    wxTextCtrl* GetImporte2banco2textCtrl() { return m_importe2banco2textCtrl; }
    wxStaticText* GetStaticText89() { return m_staticText89; }
    wxTextCtrl* GetBanco3textCtrl() { return m_banco3textCtrl; }
    wxDatePickerCtrl* GetVencimiento1banco3datePicker() { return m_vencimiento1banco3datePicker; }
    wxTextCtrl* GetImporte1banco3textCtrl() { return m_importe1banco3textCtrl; }
    wxStaticText* GetStaticText97() { return m_staticText97; }
    wxDatePickerCtrl* GetVencimiento2banco3datePicker() { return m_vencimiento2banco3datePicker; }
    wxTextCtrl* GetImporte2banco3textCtrl() { return m_importe2banco3textCtrl; }
    wxStaticText* GetStaticText127() { return m_staticText127; }
    wxTextCtrl* GetImporteTotalVencimientosTextCtrl() { return m_importeTotalVencimientosTextCtrl; }
    wxStaticLine* GetStaticLine135() { return m_staticLine135; }
    wxStaticText* GetStaticText109() { return m_staticText109; }
    wxTextCtrl* GetTotalPagaresEnCarteraTextCtrl() { return m_totalPagaresEnCarteraTextCtrl; }
    wxStaticText* GetStaticText115() { return m_staticText115; }
    wxDatePickerCtrl* GetPrevision1datePicker() { return m_prevision1datePicker; }
    wxTextCtrl* GetImportePrevision1textCtrl() { return m_importePrevision1textCtrl; }
    wxStaticText* GetStaticText121() { return m_staticText121; }
    wxDatePickerCtrl* GetPrevision2datePicker() { return m_prevision2datePicker; }
    wxTextCtrl* GetImportePrevision2textCtrl() { return m_importePrevision2textCtrl; }
    wxStaticLine* GetStaticLine137() { return m_staticLine137; }
    wxPanel* GetPanel17() { return m_panel17; }
    wxStaticLine* GetStaticLine15() { return m_staticLine15; }
    wxButton* GetButtonOK() { return m_buttonOK; }
    wxButton* GetButtonCancel() { return m_buttonCancel; }
    MainDialogBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Previsión de tesorería"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(600,500), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~MainDialogBaseClass();
};

#endif