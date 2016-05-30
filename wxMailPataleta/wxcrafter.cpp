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
    
    m_panel17 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    
    mainSizer->Add(m_panel17, 0, wxALL, 5);
    
    wxBoxSizer* boxSizer19 = new wxBoxSizer(wxVERTICAL);
    m_panel17->SetSizer(boxSizer19);
    
    m_fechaInformeDatePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxSize(-1,-1), wxDP_DEFAULT);
    m_fechaInformeDatePicker->SetToolTip(wxT("Fecha del comunicado"));
    
    boxSizer19->Add(m_fechaInformeDatePicker, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_staticLine51 = new wxStaticLine(m_panel17, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxLI_HORIZONTAL);
    
    boxSizer19->Add(m_staticLine51, 0, wxALL|wxEXPAND, 5);
    
    wxFlexGridSizer* flexGridSizer25 = new wxFlexGridSizer(4, 2, 0, 0);
    flexGridSizer25->SetFlexibleDirection( wxBOTH );
    flexGridSizer25->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer25->AddGrowableCol(0);
    
    boxSizer19->Add(flexGridSizer25, 1, wxALL|wxEXPAND, 5);
    
    m_staticText27 = new wxStaticText(m_panel17, wxID_ANY, wxT("Saldo anterior de clientes"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer25->Add(m_staticText27, 4, wxALL, 5);
    
    m_saldoAnteriorTextCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &GlobalVal::importe, wxNUM_VAL_THOUSANDS_SEPARATOR));
    m_saldoAnteriorTextCtrl->SetToolTip(wxT("Es el saldo pendiente de clientes hasta ayer."));
    #if wxVERSION_NUMBER >= 3000
    m_saldoAnteriorTextCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_saldoAnteriorTextCtrl, 1, wxALL, 5);
    
    m_staticText31 = new wxStaticText(m_panel17, wxID_ANY, wxT("Crédito concedido hoy"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer25->Add(m_staticText31, 4, wxALL, 5);
    
    m_creditoConcedidoTextCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &GlobalVal::importe, wxNUM_VAL_THOUSANDS_SEPARATOR));
    #if wxVERSION_NUMBER >= 3000
    m_creditoConcedidoTextCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_creditoConcedidoTextCtrl, 1, wxALL, 5);
    
    m_staticText35 = new wxStaticText(m_panel17, wxID_ANY, wxT("Crédito anterior cobrado hoy"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer25->Add(m_staticText35, 4, wxALL, 5);
    
    m_creditoCobradoTextCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &GlobalVal::importe, wxNUM_VAL_THOUSANDS_SEPARATOR));
    #if wxVERSION_NUMBER >= 3000
    m_creditoCobradoTextCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_creditoCobradoTextCtrl, 1, wxALL, 5);
    
    m_staticText39 = new wxStaticText(m_panel17, wxID_ANY, wxT("Saldo final de hoy"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer25->Add(m_staticText39, 4, wxALL, 5);
    
    m_saldoFinalTextCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_READONLY | wxTE_RIGHT, wxMakeFloatingPointValidator(2, &GlobalVal::importe, wxNUM_VAL_THOUSANDS_SEPARATOR));
    #if wxVERSION_NUMBER >= 3000
    m_saldoFinalTextCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer25->Add(m_saldoFinalTextCtrl, 1, wxALL, 5);
    
    m_staticLine53 = new wxStaticLine(m_panel17, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxLI_HORIZONTAL);
    
    boxSizer19->Add(m_staticLine53, 0, wxALL|wxEXPAND, 5);
    
    wxFlexGridSizer* flexGridSizer49 = new wxFlexGridSizer(7, 4, 0, 0);
    flexGridSizer49->SetFlexibleDirection( wxBOTH );
    flexGridSizer49->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer49->AddGrowableCol(0);
    flexGridSizer49->AddGrowableCol(1);
    
    boxSizer19->Add(flexGridSizer49, 0, wxALL|wxEXPAND, 5);
    
    m_staticText55 = new wxStaticText(m_panel17, wxID_ANY, wxT("Próximo vencimiento de"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer49->Add(m_staticText55, 4, wxALL, 5);
    
    m_banco1textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    m_banco1textCtrl->SetToolTip(wxT("Nombre del primer banco del vencimiento más próximo"));
    #if wxVERSION_NUMBER >= 3000
    m_banco1textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_banco1textCtrl, 2, wxALL, 5);
    
    m_vencimiento1banco1datePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxSize(-1,-1), wxDP_ALLOWNONE|wxDP_DEFAULT);
    m_vencimiento1banco1datePicker->SetToolTip(wxT("Fecha de vencimiento más próximo del primer banco"));
    
    flexGridSizer49->Add(m_vencimiento1banco1datePicker, 1, wxALL, 5);
    
    m_importe1banco1textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &GlobalVal::importe, wxNUM_VAL_THOUSANDS_SEPARATOR));
    m_importe1banco1textCtrl->SetToolTip(wxT("Importe del vencimiento más próximo del primer banco"));
    #if wxVERSION_NUMBER >= 3000
    m_importe1banco1textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_importe1banco1textCtrl, 1, wxALL, 5);
    
    m_staticText63 = new wxStaticText(m_panel17, wxID_ANY, wxT("Siguiente vencimiento"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer49->Add(m_staticText63, 4, wxALL, 5);
    
    flexGridSizer49->Add(0, 0, 2, wxALL, 5);
    
    m_vencimiento2banco1datePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxSize(-1,-1), wxDP_ALLOWNONE|wxDP_DEFAULT);
    
    flexGridSizer49->Add(m_vencimiento2banco1datePicker, 1, wxALL, 5);
    
    m_importe2banco1textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &GlobalVal::importe, wxNUM_VAL_THOUSANDS_SEPARATOR));
    #if wxVERSION_NUMBER >= 3000
    m_importe2banco1textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_importe2banco1textCtrl, 1, wxALL, 5);
    
    m_staticText73 = new wxStaticText(m_panel17, wxID_ANY, wxT("Próximo vencimiento de"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer49->Add(m_staticText73, 4, wxALL, 5);
    
    m_banco2textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    m_banco2textCtrl->SetToolTip(wxT("Segundo banco con un vencimiento pendiente"));
    #if wxVERSION_NUMBER >= 3000
    m_banco2textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_banco2textCtrl, 2, wxALL, 5);
    
    m_vencimiento1banco2datePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxSize(-1,-1), wxDP_ALLOWNONE|wxDP_DEFAULT);
    
    flexGridSizer49->Add(m_vencimiento1banco2datePicker, 1, wxALL, 5);
    
    m_importe1banco2textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &GlobalVal::importe, wxNUM_VAL_THOUSANDS_SEPARATOR));
    #if wxVERSION_NUMBER >= 3000
    m_importe1banco2textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_importe1banco2textCtrl, 1, wxALL, 5);
    
    m_staticText81 = new wxStaticText(m_panel17, wxID_ANY, wxT("Siguiente vencimiento"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer49->Add(m_staticText81, 4, wxALL, 5);
    
    flexGridSizer49->Add(0, 0, 2, wxALL, 5);
    
    m_vencimiento2banco2datePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxSize(-1,-1), wxDP_ALLOWNONE|wxDP_DEFAULT);
    
    flexGridSizer49->Add(m_vencimiento2banco2datePicker, 1, wxALL, 5);
    
    m_importe2banco2textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &GlobalVal::importe, wxNUM_VAL_THOUSANDS_SEPARATOR));
    #if wxVERSION_NUMBER >= 3000
    m_importe2banco2textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_importe2banco2textCtrl, 1, wxALL, 5);
    
    m_staticText89 = new wxStaticText(m_panel17, wxID_ANY, wxT("Próximo vencimiento de"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer49->Add(m_staticText89, 4, wxALL, 5);
    
    m_banco3textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    m_banco3textCtrl->SetToolTip(wxT("Tercer banco con vencimientos pendientes"));
    #if wxVERSION_NUMBER >= 3000
    m_banco3textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_banco3textCtrl, 2, wxALL, 5);
    
    m_vencimiento1banco3datePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxSize(-1,-1), wxDP_ALLOWNONE|wxDP_DEFAULT);
    
    flexGridSizer49->Add(m_vencimiento1banco3datePicker, 1, wxALL, 5);
    
    m_importe1banco3textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &GlobalVal::importe, wxNUM_VAL_THOUSANDS_SEPARATOR));
    #if wxVERSION_NUMBER >= 3000
    m_importe1banco3textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_importe1banco3textCtrl, 1, wxALL, 5);
    
    m_staticText97 = new wxStaticText(m_panel17, wxID_ANY, wxT("Siguiente vencimiento"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer49->Add(m_staticText97, 4, wxALL, 5);
    
    flexGridSizer49->Add(0, 0, 2, wxALL, 5);
    
    m_vencimiento2banco3datePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxSize(-1,-1), wxDP_ALLOWNONE|wxDP_DEFAULT);
    
    flexGridSizer49->Add(m_vencimiento2banco3datePicker, 1, wxALL, 5);
    
    m_importe2banco3textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &GlobalVal::importe, wxNUM_VAL_THOUSANDS_SEPARATOR));
    #if wxVERSION_NUMBER >= 3000
    m_importe2banco3textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_importe2banco3textCtrl, 1, wxALL, 5);
    
    m_staticText127 = new wxStaticText(m_panel17, wxID_ANY, wxT("Suma total de pagos pendientes"), wxDefaultPosition, wxSize(-1,-1), 0);
    wxFont m_staticText127Font = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_staticText127Font.SetWeight(wxFONTWEIGHT_BOLD);
    m_staticText127->SetFont(m_staticText127Font);
    
    flexGridSizer49->Add(m_staticText127, 4, wxALL, 5);
    
    flexGridSizer49->Add(0, 0, 2, wxALL, 5);
    
    flexGridSizer49->Add(0, 0, 1, wxALL, 5);
    
    m_importeTotalVencimientosTextCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_READONLY | wxTE_RIGHT, wxMakeFloatingPointValidator(2, &GlobalVal::importe, wxNUM_VAL_THOUSANDS_SEPARATOR));
    #if wxVERSION_NUMBER >= 3000
    m_importeTotalVencimientosTextCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer49->Add(m_importeTotalVencimientosTextCtrl, 1, wxALL, 5);
    
    m_staticLine135 = new wxStaticLine(m_panel17, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxLI_HORIZONTAL);
    
    boxSizer19->Add(m_staticLine135, 0, wxALL|wxEXPAND, 5);
    
    wxFlexGridSizer* flexGridSizer107 = new wxFlexGridSizer(3, 3, 0, 0);
    flexGridSizer107->SetFlexibleDirection( wxBOTH );
    flexGridSizer107->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer107->AddGrowableCol(0);
    
    boxSizer19->Add(flexGridSizer107, 0, wxALL|wxEXPAND, 5);
    
    m_staticText109 = new wxStaticText(m_panel17, wxID_ANY, wxT("Total en pagarés de clientes en cartera"), wxDefaultPosition, wxSize(-1,-1), 0);
    wxFont m_staticText109Font = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_staticText109Font.SetWeight(wxFONTWEIGHT_BOLD);
    m_staticText109->SetFont(m_staticText109Font);
    
    flexGridSizer107->Add(m_staticText109, 3, wxALL, 5);
    
    flexGridSizer107->Add(0, 0, 1, wxALL, 5);
    
    m_totalPagaresEnCarteraTextCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &GlobalVal::importe, wxNUM_VAL_THOUSANDS_SEPARATOR));
    #if wxVERSION_NUMBER >= 3000
    m_totalPagaresEnCarteraTextCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer107->Add(m_totalPagaresEnCarteraTextCtrl, 1, wxALL, 5);
    
    m_staticText115 = new wxStaticText(m_panel17, wxID_ANY, wxT("Previsión de cobro hasta"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer107->Add(m_staticText115, 3, wxALL, 5);
    
    m_prevision1datePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxSize(-1,-1), wxDP_DEFAULT);
    
    flexGridSizer107->Add(m_prevision1datePicker, 1, wxALL, 5);
    
    m_importePrevision1textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &GlobalVal::importe, wxNUM_VAL_THOUSANDS_SEPARATOR));
    m_importePrevision1textCtrl->SetToolTip(wxT("Importe de los pagarés hasta la fecha"));
    #if wxVERSION_NUMBER >= 3000
    m_importePrevision1textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer107->Add(m_importePrevision1textCtrl, 1, wxALL, 5);
    
    m_staticText121 = new wxStaticText(m_panel17, wxID_ANY, wxT("Previsión hasta"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer107->Add(m_staticText121, 3, wxALL, 5);
    
    m_prevision2datePicker = new wxDatePickerCtrl(m_panel17, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxSize(-1,-1), wxDP_DEFAULT);
    
    flexGridSizer107->Add(m_prevision2datePicker, 1, wxALL, 5);
    
    m_importePrevision2textCtrl = new wxTextCtrl(m_panel17, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_RIGHT, wxMakeFloatingPointValidator(2, &GlobalVal::importe, wxNUM_VAL_THOUSANDS_SEPARATOR));
    #if wxVERSION_NUMBER >= 3000
    m_importePrevision2textCtrl->SetHint(wxT(""));
    #endif
    
    flexGridSizer107->Add(m_importePrevision2textCtrl, 1, wxALL, 5);
    
    m_staticLine137 = new wxStaticLine(m_panel17, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxLI_HORIZONTAL);
    
    boxSizer19->Add(m_staticLine137, 0, wxALL|wxEXPAND, 5);
    
    mainSizer->Add(0, 0, 1, wxALL|wxEXPAND, 5);
    
    m_staticLine15 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxLI_HORIZONTAL);
    
    mainSizer->Add(m_staticLine15, 0, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* boxSizer12 = new wxBoxSizer(wxHORIZONTAL);
    
    mainSizer->Add(boxSizer12, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);
    
    m_buttonOK = new wxButton(this, wxID_OK, wxT("OK"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_buttonOK->SetDefault();
    
    boxSizer12->Add(m_buttonOK, 0, wxALL, 5);
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT("Cancel"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer12->Add(m_buttonCancel, 0, wxALL, 5);
    
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
    m_saldoAnteriorTextCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnSaldoAnteriorUpdated), NULL, this);
    m_creditoConcedidoTextCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnCreditoConcedidoUpdated), NULL, this);
    m_creditoCobradoTextCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnCreditoCobradoUpdated), NULL, this);
    m_importe1banco1textCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte1Banco1Updated), NULL, this);
    m_importe2banco1textCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte2Banco1Updated), NULL, this);
    m_importe1banco2textCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte1Banco2Updated), NULL, this);
    m_importe2banco2textCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte2Banco2Updated), NULL, this);
    m_importe1banco3textCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte1Banco3Updated), NULL, this);
    m_importe2banco3textCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte2Banco3Updated), NULL, this);
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButtonOKClicked), NULL, this);
    
}

MainDialogBaseClass::~MainDialogBaseClass()
{
    m_saldoAnteriorTextCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnSaldoAnteriorUpdated), NULL, this);
    m_creditoConcedidoTextCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnCreditoConcedidoUpdated), NULL, this);
    m_creditoCobradoTextCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnCreditoCobradoUpdated), NULL, this);
    m_importe1banco1textCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte1Banco1Updated), NULL, this);
    m_importe2banco1textCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte2Banco1Updated), NULL, this);
    m_importe1banco2textCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte1Banco2Updated), NULL, this);
    m_importe2banco2textCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte2Banco2Updated), NULL, this);
    m_importe1banco3textCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte1Banco3Updated), NULL, this);
    m_importe2banco3textCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainDialogBaseClass::OnImporte2Banco3Updated), NULL, this);
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainDialogBaseClass::OnButtonOKClicked), NULL, this);
    
}