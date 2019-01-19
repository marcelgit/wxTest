//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "wxcrafter.h"


// Declare the bitmap loading function
extern void wxC9ED9InitBitmapResources();

static bool bBitmapLoaded = false;


MainDialogBaseClass::MainDialogBaseClass(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9ED9InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(mainSizer);
    
    m_panel17 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), wxTAB_TRAVERSAL);
    
    mainSizer->Add(m_panel17, 0, wxALL, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizer19 = new wxBoxSizer(wxVERTICAL);
    m_panel17->SetSizer(boxSizer19);
    
    m_fechaInformeDatePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxDP_DEFAULT|wxTAB_TRAVERSAL);
    m_fechaInformeDatePicker->SetToolTip(wxT("Fecha del comunicado"));
    
    boxSizer19->Add(m_fechaInformeDatePicker, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(5));
    
    m_staticLine51 = new wxStaticLine(m_panel17, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxLI_HORIZONTAL);
    
    boxSizer19->Add(m_staticLine51, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    wxFlexGridSizer* flexGridSizer25 = new wxFlexGridSizer(4, 2, 0, 0);
    flexGridSizer25->SetFlexibleDirection( wxBOTH );
    flexGridSizer25->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer25->AddGrowableCol(0);
    
    boxSizer19->Add(flexGridSizer25, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticText27 = new wxStaticText(m_panel17, wxID_ANY, wxT("Saldo anterior de clientes"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), 0);
    
    flexGridSizer25->Add(m_staticText27, 4, wxALL, WXC_FROM_DIP(5));
    
    m_saldoAnteriorTextCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT("0"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &registro::saldo_anterior, wxNUM_VAL_THOUSANDS_SEPARATOR));
    m_saldoAnteriorTextCtrl->SetToolTip(wxT("Es el saldo pendiente de clientes hasta ayer."));
    #if wxVERSION_NUMBER >= 3000
    m_saldoAnteriorTextCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_saldoAnteriorTextCtrl, 1, wxALL, WXC_FROM_DIP(5));
    
    m_staticText31 = new wxStaticText(m_panel17, wxID_ANY, wxT("Crédito concedido hoy"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), 0);
    
    flexGridSizer25->Add(m_staticText31, 4, wxALL, WXC_FROM_DIP(5));
    
    m_creditoConcedidoTextCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT("0"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &registro::credito_concedido, wxNUM_VAL_THOUSANDS_SEPARATOR));
    m_creditoConcedidoTextCtrl->SetToolTip(wxT("Importe del crédito concedido hoy"));
    #if wxVERSION_NUMBER >= 3000
    m_creditoConcedidoTextCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_creditoConcedidoTextCtrl, 1, wxALL, WXC_FROM_DIP(5));
    
    m_staticText35 = new wxStaticText(m_panel17, wxID_ANY, wxT("Crédito anterior cobrado hoy"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), 0);
    
    flexGridSizer25->Add(m_staticText35, 4, wxALL, WXC_FROM_DIP(5));
    
    m_creditoCobradoTextCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT("0"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &registro::credito_cobrado, wxNUM_VAL_THOUSANDS_SEPARATOR));
    m_creditoCobradoTextCtrl->SetToolTip(wxT("Importe del crédito cobrado hoy"));
    #if wxVERSION_NUMBER >= 3000
    m_creditoCobradoTextCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_creditoCobradoTextCtrl, 1, wxALL, WXC_FROM_DIP(5));
    
    m_staticText39 = new wxStaticText(m_panel17, wxID_ANY, wxT("Saldo final de hoy"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), 0);
    
    flexGridSizer25->Add(m_staticText39, 4, wxALL, WXC_FROM_DIP(5));
    
    m_saldoFinalTextCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT("0"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_READONLY | wxTE_RIGHT, wxMakeFloatingPointValidator(2, &registro::saldo_final, wxNUM_VAL_THOUSANDS_SEPARATOR));
    m_saldoFinalTextCtrl->SetToolTip(wxT("Crédito final. Se obtiene sumando el crédito concedido al saldo inicial y restando el crédito cobrado."));
    #if wxVERSION_NUMBER >= 3000
    m_saldoFinalTextCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_saldoFinalTextCtrl, 1, wxALL, WXC_FROM_DIP(5));
    
    m_staticLine53 = new wxStaticLine(m_panel17, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxLI_HORIZONTAL);
    
    boxSizer19->Add(m_staticLine53, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    wxFlexGridSizer* flexGridSizer49 = new wxFlexGridSizer(7, 4, 0, 0);
    flexGridSizer49->SetFlexibleDirection( wxBOTH );
    flexGridSizer49->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer49->AddGrowableCol(0);
    flexGridSizer49->AddGrowableCol(1);
    
    boxSizer19->Add(flexGridSizer49, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticText55 = new wxStaticText(m_panel17, wxID_ANY, wxT("Próximo vencimiento de"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), 0);
    
    flexGridSizer49->Add(m_staticText55, 4, wxALL, WXC_FROM_DIP(5));
    
    m_banco1textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_PROCESS_ENTER);
    m_banco1textCtrl->SetToolTip(wxT("Nombre del banco del primer vencimiento"));
    #if wxVERSION_NUMBER >= 3000
    m_banco1textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_banco1textCtrl, 2, wxALL, WXC_FROM_DIP(5));
    
    m_banco1datePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxDP_ALLOWNONE);
    m_banco1datePicker->SetToolTip(wxT("Fecha del primer vencimiento."));
    
    flexGridSizer49->Add(m_banco1datePicker, 1, wxALL, WXC_FROM_DIP(5));
    
    m_importe1textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT("0"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &registro::imp_banco1_vto1, wxNUM_VAL_THOUSANDS_SEPARATOR));
    m_importe1textCtrl->SetToolTip(wxT("Importe del primer vencimiento."));
    #if wxVERSION_NUMBER >= 3000
    m_importe1textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_importe1textCtrl, 1, wxALL, WXC_FROM_DIP(5));
    
    m_staticText63 = new wxStaticText(m_panel17, wxID_ANY, wxT("Siguiente vencimiento"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), 0);
    
    flexGridSizer49->Add(m_staticText63, 4, wxALL, WXC_FROM_DIP(5));
    
    m_banco2textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_PROCESS_ENTER);
    m_banco2textCtrl->SetToolTip(wxT("Nombre del banco del segundo vencimiento"));
    #if wxVERSION_NUMBER >= 3000
    m_banco2textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_banco2textCtrl, 0, wxALL, WXC_FROM_DIP(5));
    
    m_banco2datePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxDP_ALLOWNONE);
    m_banco2datePicker->SetToolTip(wxT("Fecha del segundo vencimiento."));
    
    flexGridSizer49->Add(m_banco2datePicker, 1, wxALL, WXC_FROM_DIP(5));
    
    m_importe2textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT("0"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &registro::imp_banco1_vto2, wxNUM_VAL_THOUSANDS_SEPARATOR));
    m_importe2textCtrl->SetToolTip(wxT("Importe del segundo vencimiento."));
    #if wxVERSION_NUMBER >= 3000
    m_importe2textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_importe2textCtrl, 1, wxALL, WXC_FROM_DIP(5));
    
    m_staticText73 = new wxStaticText(m_panel17, wxID_ANY, wxT("Próximo vencimiento de"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), 0);
    
    flexGridSizer49->Add(m_staticText73, 4, wxALL, WXC_FROM_DIP(5));
    
    m_banco3textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_PROCESS_ENTER);
    m_banco3textCtrl->SetToolTip(wxT("Nombre del banco del tercer vencimiento"));
    #if wxVERSION_NUMBER >= 3000
    m_banco3textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_banco3textCtrl, 2, wxALL, WXC_FROM_DIP(5));
    
    m_banco3datePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxDP_ALLOWNONE);
    m_banco3datePicker->SetToolTip(wxT("Fecha del tercer vencimiento."));
    
    flexGridSizer49->Add(m_banco3datePicker, 1, wxALL, WXC_FROM_DIP(5));
    
    m_importe3textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT("0"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &registro::imp_banco2_vto1, wxNUM_VAL_THOUSANDS_SEPARATOR));
    m_importe3textCtrl->SetToolTip(wxT("Importe del tercer vencimiento."));
    #if wxVERSION_NUMBER >= 3000
    m_importe3textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_importe3textCtrl, 1, wxALL, WXC_FROM_DIP(5));
    
    m_staticText81 = new wxStaticText(m_panel17, wxID_ANY, wxT("Siguiente vencimiento"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), 0);
    
    flexGridSizer49->Add(m_staticText81, 4, wxALL, WXC_FROM_DIP(5));
    
    m_banco4textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), 0);
    m_banco4textCtrl->SetToolTip(wxT("Nombre del banco del cuarto vencimiento"));
    #if wxVERSION_NUMBER >= 3000
    m_banco4textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_banco4textCtrl, 0, wxALL, WXC_FROM_DIP(5));
    
    m_banco4datePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxDP_ALLOWNONE);
    m_banco4datePicker->SetToolTip(wxT("Fecha del cuarto vencimiento."));
    
    flexGridSizer49->Add(m_banco4datePicker, 1, wxALL, WXC_FROM_DIP(5));
    
    m_importe4textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT("0"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &registro::imp_banco2_vto2, wxNUM_VAL_THOUSANDS_SEPARATOR));
    m_importe4textCtrl->SetToolTip(wxT("Importe del cuarto vencimiento."));
    #if wxVERSION_NUMBER >= 3000
    m_importe4textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_importe4textCtrl, 1, wxALL, WXC_FROM_DIP(5));
    
    m_staticText89 = new wxStaticText(m_panel17, wxID_ANY, wxT("Próximo vencimiento de"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), 0);
    
    flexGridSizer49->Add(m_staticText89, 4, wxALL, WXC_FROM_DIP(5));
    
    m_banco5textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_PROCESS_ENTER);
    m_banco5textCtrl->SetToolTip(wxT("Nombre del banco del quinto vencimiento"));
    #if wxVERSION_NUMBER >= 3000
    m_banco5textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_banco5textCtrl, 2, wxALL, WXC_FROM_DIP(5));
    
    m_banco5datePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxDP_ALLOWNONE);
    m_banco5datePicker->SetToolTip(wxT("Fecha del quinto vencimiento."));
    
    flexGridSizer49->Add(m_banco5datePicker, 1, wxALL, WXC_FROM_DIP(5));
    
    m_importe5textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT("0"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &registro::imp_banco3_vto1, wxNUM_VAL_THOUSANDS_SEPARATOR));
    m_importe5textCtrl->SetToolTip(wxT("Importe del quinto vencimiento."));
    #if wxVERSION_NUMBER >= 3000
    m_importe5textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_importe5textCtrl, 1, wxALL, WXC_FROM_DIP(5));
    
    m_staticText97 = new wxStaticText(m_panel17, wxID_ANY, wxT("Siguiente vencimiento"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), 0);
    
    flexGridSizer49->Add(m_staticText97, 4, wxALL, WXC_FROM_DIP(5));
    
    m_banco6textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), 0);
    m_banco6textCtrl->SetToolTip(wxT("Nombre del banco del sexto vencimiento"));
    #if wxVERSION_NUMBER >= 3000
    m_banco6textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_banco6textCtrl, 0, wxALL, WXC_FROM_DIP(5));
    
    m_banco6datePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxDP_ALLOWNONE);
    m_banco6datePicker->SetToolTip(wxT("Fecha del sexto vencimiento."));
    
    flexGridSizer49->Add(m_banco6datePicker, 1, wxALL, WXC_FROM_DIP(5));
    
    m_importe6textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT("0"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &registro::imp_banco3_vto2, wxNUM_VAL_THOUSANDS_SEPARATOR));
    m_importe6textCtrl->SetToolTip(wxT("Importe del sexto vencimiento."));
    #if wxVERSION_NUMBER >= 3000
    m_importe6textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_importe6textCtrl, 1, wxALL, WXC_FROM_DIP(5));
    
    m_staticText127 = new wxStaticText(m_panel17, wxID_ANY, wxT("Suma total de pagos pendientes"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), 0);
    wxFont m_staticText127Font = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_staticText127Font.SetWeight(wxFONTWEIGHT_BOLD);
    m_staticText127->SetFont(m_staticText127Font);
    
    flexGridSizer49->Add(m_staticText127, 4, wxALL, WXC_FROM_DIP(5));
    
    flexGridSizer49->Add(0, 0, 2, wxALL, WXC_FROM_DIP(5));
    
    flexGridSizer49->Add(0, 0, 1, wxALL, WXC_FROM_DIP(5));
    
    m_importeTotalVencimientosTextCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT("0"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_READONLY | wxTE_RIGHT, wxMakeFloatingPointValidator(2, &registro::imp_total_bancos, wxNUM_VAL_THOUSANDS_SEPARATOR));
    m_importeTotalVencimientosTextCtrl->SetToolTip(wxT("Suma de todos los vencimientos."));
    #if wxVERSION_NUMBER >= 3000
    m_importeTotalVencimientosTextCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_importeTotalVencimientosTextCtrl, 1, wxALL, WXC_FROM_DIP(5));
    
    m_staticLine135 = new wxStaticLine(m_panel17, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxLI_HORIZONTAL);
    
    boxSizer19->Add(m_staticLine135, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    wxFlexGridSizer* flexGridSizer107 = new wxFlexGridSizer(3, 3, 0, 0);
    flexGridSizer107->SetFlexibleDirection( wxBOTH );
    flexGridSizer107->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer107->AddGrowableCol(0);
    
    boxSizer19->Add(flexGridSizer107, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticText109 = new wxStaticText(m_panel17, wxID_ANY, wxT("Total en pagarés de clientes en cartera"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), 0);
    wxFont m_staticText109Font = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_staticText109Font.SetWeight(wxFONTWEIGHT_BOLD);
    m_staticText109->SetFont(m_staticText109Font);
    
    flexGridSizer107->Add(m_staticText109, 3, wxALL, WXC_FROM_DIP(5));
    
    flexGridSizer107->Add(0, 0, 1, wxALL, WXC_FROM_DIP(5));
    
    m_totalPagaresEnCarteraTextCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT("0"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &registro::total_cobros, wxNUM_VAL_THOUSANDS_SEPARATOR));
    m_totalPagaresEnCarteraTextCtrl->SetToolTip(wxT("Importe total de los pagarés de clientes en cartera."));
    #if wxVERSION_NUMBER >= 3000
    m_totalPagaresEnCarteraTextCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer107->Add(m_totalPagaresEnCarteraTextCtrl, 1, wxALL, WXC_FROM_DIP(5));
    
    m_staticText115 = new wxStaticText(m_panel17, wxID_ANY, wxT("Previsión de cobro hasta"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), 0);
    
    flexGridSizer107->Add(m_staticText115, 3, wxALL, WXC_FROM_DIP(5));
    
    m_prevision1datePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxDP_DEFAULT);
    m_prevision1datePicker->SetToolTip(wxT("Fecha tope para primer vencimiento"));
    
    flexGridSizer107->Add(m_prevision1datePicker, 1, wxALL, WXC_FROM_DIP(5));
    
    m_importePrevision1textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT("0"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &registro::imp_prevision1, wxNUM_VAL_THOUSANDS_SEPARATOR));
    m_importePrevision1textCtrl->SetToolTip(wxT("Importe de los pagarés hasta la fecha"));
    #if wxVERSION_NUMBER >= 3000
    m_importePrevision1textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer107->Add(m_importePrevision1textCtrl, 1, wxALL, WXC_FROM_DIP(5));
    
    m_staticText121 = new wxStaticText(m_panel17, wxID_ANY, wxT("Previsión hasta"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), 0);
    
    flexGridSizer107->Add(m_staticText121, 3, wxALL, WXC_FROM_DIP(5));
    
    m_prevision2datePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxDP_DEFAULT);
    m_prevision2datePicker->SetToolTip(wxT("Fecha tope para el segundo vencimiento"));
    
    flexGridSizer107->Add(m_prevision2datePicker, 1, wxALL, WXC_FROM_DIP(5));
    
    m_importePrevision2textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT("0"), wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &registro::imp_prevision2, wxNUM_VAL_THOUSANDS_SEPARATOR));
    m_importePrevision2textCtrl->SetToolTip(wxT("Importe de pagarés a la fecha"));
    #if wxVERSION_NUMBER >= 3000
    m_importePrevision2textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer107->Add(m_importePrevision2textCtrl, 1, wxALL, WXC_FROM_DIP(5));
    
    m_staticLine137 = new wxStaticLine(m_panel17, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel17, wxSize(-1,-1)), wxLI_HORIZONTAL);
    
    boxSizer19->Add(m_staticLine137, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    mainSizer->Add(0, 0, 1, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    m_staticLine15 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), wxLI_HORIZONTAL);
    
    mainSizer->Add(m_staticLine15, 0, wxALL|wxEXPAND, WXC_FROM_DIP(5));
    
    wxBoxSizer* boxSizer12 = new wxBoxSizer(wxHORIZONTAL);
    
    mainSizer->Add(boxSizer12, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, WXC_FROM_DIP(5));
    
    m_buttonOK = new wxButton(this, wxID_OK, wxT("Abrir PDF"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), 0);
    m_buttonOK->SetDefault();
    
    boxSizer12->Add(m_buttonOK, 0, wxALL, WXC_FROM_DIP(5));
    
    m_buttonSEND = new wxButton(this, wxID_APPLY, wxT("Enviar"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), 0);
    
    boxSizer12->Add(m_buttonSEND, 0, wxALL, WXC_FROM_DIP(5));
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT("Salir"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1,-1)), 0);
    
    boxSizer12->Add(m_buttonCancel, 0, wxALL, WXC_FROM_DIP(5));
    
    SetName(wxT("MainDialogBaseClass"));
    SetSize(600,500);
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    this->Connect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(MainDialogBaseClass::OnInitDialog), NULL, this);
    m_saldoAnteriorTextCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnSaldoAnteriorUpdated), NULL, this);
    m_creditoConcedidoTextCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnCreditoConcedidoUpdated), NULL, this);
    m_creditoCobradoTextCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnCreditoCobradoUpdated), NULL, this);
    m_importe1textCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte1Banco1Updated), NULL, this);
    m_importe2textCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte2Banco1Updated), NULL, this);
    m_importe3textCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte1Banco2Updated), NULL, this);
    m_importe4textCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte2Banco2Updated), NULL, this);
    m_importe5textCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte1Banco3Updated), NULL, this);
    m_importe6textCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte2Banco3Updated), NULL, this);
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButtonOKClicked), NULL, this);
    m_buttonSEND->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButtonSendClicked), NULL, this);
    
}

MainDialogBaseClass::~MainDialogBaseClass()
{
    this->Disconnect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(MainDialogBaseClass::OnInitDialog), NULL, this);
    m_saldoAnteriorTextCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnSaldoAnteriorUpdated), NULL, this);
    m_creditoConcedidoTextCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnCreditoConcedidoUpdated), NULL, this);
    m_creditoCobradoTextCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnCreditoCobradoUpdated), NULL, this);
    m_importe1textCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte1Banco1Updated), NULL, this);
    m_importe2textCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte2Banco1Updated), NULL, this);
    m_importe3textCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte1Banco2Updated), NULL, this);
    m_importe4textCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte2Banco2Updated), NULL, this);
    m_importe5textCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte1Banco3Updated), NULL, this);
    m_importe6textCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte2Banco3Updated), NULL, this);
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButtonOKClicked), NULL, this);
    m_buttonSEND->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButtonSendClicked), NULL, this);
    
}
