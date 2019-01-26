//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _WXTEST_WXMAILPATALETA_WXCRAFTER_BASE_CLASSES_H
#define _WXTEST_WXMAILPATALETA_WXCRAFTER_BASE_CLASSES_H

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
#include "registro_extern.h"
#include <wx/button.h>
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
    wxDatePickerCtrl* m_banco1datePicker;
    wxTextCtrl* m_importe1textCtrl;
    wxStaticText* m_staticText63;
    wxTextCtrl* m_banco2textCtrl;
    wxDatePickerCtrl* m_banco2datePicker;
    wxTextCtrl* m_importe2textCtrl;
    wxStaticText* m_staticText73;
    wxTextCtrl* m_banco3textCtrl;
    wxDatePickerCtrl* m_banco3datePicker;
    wxTextCtrl* m_importe3textCtrl;
    wxStaticText* m_staticText81;
    wxTextCtrl* m_banco4textCtrl;
    wxDatePickerCtrl* m_banco4datePicker;
    wxTextCtrl* m_importe4textCtrl;
    wxStaticText* m_staticText89;
    wxTextCtrl* m_banco5textCtrl;
    wxDatePickerCtrl* m_banco5datePicker;
    wxTextCtrl* m_importe5textCtrl;
    wxStaticText* m_staticText97;
    wxTextCtrl* m_banco6textCtrl;
    wxDatePickerCtrl* m_banco6datePicker;
    wxTextCtrl* m_importe6textCtrl;
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
    wxButton* m_buttonSEND;
    wxButton* m_buttonCancel;

protected:
    virtual void OnInitDialog(wxInitDialogEvent& event) { event.Skip(); }
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
    virtual void OnButtonSendClicked(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonCancelClicked(wxCommandEvent& event) { event.Skip(); }

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
    wxDatePickerCtrl* GetBanco1datePicker() { return m_banco1datePicker; }
    wxTextCtrl* GetImporte1textCtrl() { return m_importe1textCtrl; }
    wxStaticText* GetStaticText63() { return m_staticText63; }
    wxTextCtrl* GetBanco2textCtrl() { return m_banco2textCtrl; }
    wxDatePickerCtrl* GetBanco2datePicker() { return m_banco2datePicker; }
    wxTextCtrl* GetImporte2textCtrl() { return m_importe2textCtrl; }
    wxStaticText* GetStaticText73() { return m_staticText73; }
    wxTextCtrl* GetBanco3textCtrl() { return m_banco3textCtrl; }
    wxDatePickerCtrl* GetBanco3datePicker() { return m_banco3datePicker; }
    wxTextCtrl* GetImporte3textCtrl() { return m_importe3textCtrl; }
    wxStaticText* GetStaticText81() { return m_staticText81; }
    wxTextCtrl* GetBanco4textCtrl() { return m_banco4textCtrl; }
    wxDatePickerCtrl* GetBanco4datePicker() { return m_banco4datePicker; }
    wxTextCtrl* GetImporte4textCtrl() { return m_importe4textCtrl; }
    wxStaticText* GetStaticText89() { return m_staticText89; }
    wxTextCtrl* GetBanco5textCtrl() { return m_banco5textCtrl; }
    wxDatePickerCtrl* GetBanco5datePicker() { return m_banco5datePicker; }
    wxTextCtrl* GetImporte5textCtrl() { return m_importe5textCtrl; }
    wxStaticText* GetStaticText97() { return m_staticText97; }
    wxTextCtrl* GetBanco6textCtrl() { return m_banco6textCtrl; }
    wxDatePickerCtrl* GetBanco6datePicker() { return m_banco6datePicker; }
    wxTextCtrl* GetImporte6textCtrl() { return m_importe6textCtrl; }
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
    wxButton* GetButtonSEND() { return m_buttonSEND; }
    wxButton* GetButtonCancel() { return m_buttonCancel; }
    MainDialogBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Previsión de tesorería"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(600,900), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL);
    virtual ~MainDialogBaseClass();
};

#endif
