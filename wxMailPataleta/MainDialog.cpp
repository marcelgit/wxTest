#include "MainDialog.h"
#include <wx/msgdlg.h>
#include <wx/log.h>
#include "MyPdf.h"

MainDialog::MainDialog(wxWindow* parent)
    : MainDialogBaseClass(parent)
{
}

MainDialog::~MainDialog()
{
}

void MainDialog::OnButtonOKClicked(wxCommandEvent& event)
{
    CreatePdf();
    Close();
}

void MainDialog::CreatePdf()
{

    wxLogMessage("1)");
    wxLogMessage("wxString::Format(\"%%.3f\", 123.4) = %s", wxString::Format("%.3f", 123.4));
    wxLogMessage("thousands sep = %s", wxLocale::GetInfo(wxLOCALE_THOUSANDS_SEP, wxLOCALE_CAT_NUMBER));
    wxLogMessage("decimal   sep = %s", wxLocale::GetInfo(wxLOCALE_DECIMAL_POINT, wxLOCALE_CAT_NUMBER));

    // Undo the wx locale initialization, as we want to be sure to use the
    // same (default) locale "C" always and everywhere. Using other locales
    // introduces a lot of subtle errors. E.g. reading floating point numbers
    // from anywhere (like text files!) fails because e.g. "1.4" is no proper
    // floating point string in the german locale (but "1,4" is).
    //setlocale(LC_ALL, "C");
    wxLocale(wxLANGUAGE_SPANISH, wxLOCALE_DONT_LOAD_DEFAULT);

    wxLogMessage("2)");
    wxLogMessage("wxString::Format(\"%%.3f\", 123.4) = %s", wxString::Format("%.3f", 123.4));
    wxLogMessage("thousands sep = %s", wxLocale::GetInfo(wxLOCALE_THOUSANDS_SEP, wxLOCALE_CAT_NUMBER));
    wxLogMessage("decimal   sep = %s", wxLocale::GetInfo(wxLOCALE_DECIMAL_POINT, wxLOCALE_CAT_NUMBER));

    // Instantiation of inherited class
    MyPdf pdf;
    pdf.AliasNbPages();
    pdf.AddPage();
  //pdf.SetLineHeight(5);
//  pdf.Cell(0,10,wxString::Format(wxT("Printing line number %d"),i),0,1);
    wxDateTime fecha( m_fechaInformeDatePicker->GetValue() );
//  fecha.SetCountry(wxDateTime::Germany);    // Country Germany
//  fecha = wxDateTime::Today();
//  fecha = m_datePicker23->GetValue();
    int dia = fecha.GetDay();
    int mes = fecha.GetMonth() + 1;
    int anyo = fecha.GetYear();
//  pdf.Cell(0,20,wxString::Format(wxT("Fecha: %d/%m/%Y"), dia.GetDay(), dia.GetMonth(), dia.GetYear()),0,1);

    // Cabecera
    pdf.SetFont(wxT("Helvetica"),wxT("B"),15);
    pdf.Cell(83);
    pdf.Cell(0, 10,wxString::Format(wxT("%02d/%02d/%4d"), dia, mes, anyo),0,1);
    
    // Crédito
    pdf.SetFont(wxT("Times"),wxT(""),12);
    pdf.Cell(1, 10,wxT(" "),0,1);
    pdf.Cell(80);
    pdf.Cell(35, 10,wxT("Saldo anterior"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(30);
    double saldoAnt;
    bool isOK;
    isOK = m_saldoAnteriorTextCtrl->GetValue().ToDouble(&saldoAnt);
    if ( isOK ) pdf.Cell(30, 10, wxString::Format(wxT("%14.2f"), saldoAnt), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);
    pdf.Cell(80);
    pdf.Cell(35, 10,wxT("Crédito concedido"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(30);
    double ctoConce;
    isOK = m_creditoConcedidoTextCtrl->GetValue().ToDouble(&ctoConce);
    if ( isOK ) pdf.Cell(30, 10, wxString::Format(wxT("%14.2f"), ctoConce), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);
    pdf.Cell(80);
    pdf.Cell(35, 10,wxT("Crédito cobrado"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(30);
    double ctoCobro;
    isOK = m_creditoCobradoTextCtrl->GetValue().ToDouble(&ctoCobro);
    if ( isOK ) pdf.Cell(30, 10, wxString::Format(wxT("%14.2f"), ctoCobro), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);
    pdf.Cell(80);
    pdf.Cell(35, 10,wxT("Saldo hoy"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(30);
    double saldoFin;
    isOK = m_saldoFinalTextCtrl->GetValue().ToDouble(&saldoFin);
    if ( isOK ) pdf.Cell(30, 10, wxString::Format(wxT("%14.2f"), saldoFin), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Previsión de pagos
    pdf.Cell(1, 10,wxT(" "),0,1);
    // Banco 1º
    pdf.Cell(5);
    pdf.Cell(60, 10, m_banco1textCtrl->GetValue(), wxPDF_BORDER_NONE, 0);
    pdf.Cell(20);
    wxDateTime fechaB11( m_vencimiento1banco1datePicker->GetValue() );
    int diaB11 = fechaB11.GetDay();
    int mesB11 = fechaB11.GetMonth() + 1;
    int anyoB11 = fechaB11.GetYear();
    pdf.Cell(20, 10, wxString::Format(wxT("%02d/%02d/%4d"), diaB11, mesB11, anyoB11),0,0);
    pdf.Cell(40);
    double impB11;
    isOK = m_importe1banco1textCtrl->GetValue().ToDouble(&impB11);
    if ( isOK ) pdf.Cell(30, 10, wxString::Format(wxT("%14.2f"), impB11), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    pdf.Cell(85);
    wxDateTime fechaB12( m_vencimiento2banco1datePicker->GetValue() );
    int diaB12 = fechaB12.GetDay();
    int mesB12 = fechaB12.GetMonth() + 1;
    int anyoB12 = fechaB12.GetYear();
    pdf.Cell(20, 10, wxString::Format(wxT("%02d/%02d/%4d"), diaB12, mesB12, anyoB12),0,0);
    pdf.Cell(40);
    double impB12;
    isOK = m_importe2banco1textCtrl->GetValue().ToDouble(&impB12);
    if ( isOK ) pdf.Cell(30, 10, wxString::Format(wxT("%14.2f"), impB12), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Banco 2º
    //pdf.Cell(1, 10,wxT(" "),0,1);
    pdf.Cell(5);
    pdf.Cell(60, 10, m_banco2textCtrl->GetValue(), wxPDF_BORDER_NONE, 0);
    pdf.Cell(20);
    wxDateTime fechaB21( m_vencimiento1banco2datePicker->GetValue() );
    int diaB21 = fechaB21.GetDay();
    int mesB21 = fechaB21.GetMonth() + 1;
    int anyoB21 = fechaB21.GetYear();
    pdf.Cell(20, 10, wxString::Format(wxT("%02d/%02d/%4d"), diaB21, mesB21, anyoB21),0,0);
    pdf.Cell(40);
    double impB21;
    isOK = m_importe1banco2textCtrl->GetValue().ToDouble(&impB21);
    if ( isOK ) pdf.Cell(30, 10, wxString::Format(wxT("%14.2f"), impB21), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    pdf.Cell(85);
    wxDateTime fechaB22( m_vencimiento2banco2datePicker->GetValue() );
    int diaB22 = fechaB22.GetDay();
    int mesB22 = fechaB22.GetMonth() + 1;
    int anyoB22 = fechaB22.GetYear();
    pdf.Cell(20, 10, wxString::Format(wxT("%02d/%02d/%4d"), diaB22, mesB22, anyoB22),0,0);
    pdf.Cell(40);
    double impB22;
    isOK = m_importe2banco2textCtrl->GetValue().ToDouble(&impB22);
    if ( isOK ) pdf.Cell(30, 10, wxString::Format(wxT("%14.2f"), impB22), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Banco 3º
    //pdf.Cell(1, 10,wxT(" "),0,1);
    pdf.Cell(5);
    pdf.Cell(60, 10, m_banco3textCtrl->GetValue(), wxPDF_BORDER_NONE, 0);
    pdf.Cell(20);
    wxDateTime fechaB31( m_vencimiento1banco3datePicker->GetValue() );
    int diaB31 = fechaB31.GetDay();
    int mesB31 = fechaB31.GetMonth() + 1;
    int anyoB31 = fechaB31.GetYear();
    pdf.Cell(20, 10, wxString::Format(wxT("%02d/%02d/%4d"), diaB31, mesB31, anyoB31),0,0);
    pdf.Cell(40);
    double impB31;
    isOK = m_importe1banco3textCtrl->GetValue().ToDouble(&impB31);
    if ( isOK ) pdf.Cell(30, 10, wxString::Format(wxT("%14.2f"), impB31), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    pdf.Cell(85);
    wxDateTime fechaB32( m_vencimiento2banco3datePicker->GetValue() );
    int diaB32 = fechaB32.GetDay();
    int mesB32 = fechaB32.GetMonth() + 1;
    int anyoB32 = fechaB32.GetYear();
    pdf.Cell(20, 10, wxString::Format(wxT("%02d/%02d/%4d"), diaB32, mesB32, anyoB32),0,0);
    pdf.Cell(40);
    double impB32;
    isOK = m_importe2banco3textCtrl->GetValue().ToDouble(&impB32);
    if ( isOK ) pdf.Cell(30, 10, wxString::Format(wxT("%14.2f"), impB32), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Total de pagarés
    pdf.Cell(1, 10,wxT(" "),0,1);
    pdf.Cell(25);
    pdf.Cell(90, 10, wxT("Suma total de pagos pendientes"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(30);
    double totPagos;
    isOK = m_importeTotalVencimientosTextCtrl->GetValue().ToDouble(&totPagos);
    if ( isOK ) pdf.Cell(30, 10, wxString::Format(wxT("%14.2f"), totPagos), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);
    
    // Cartera de pagarés
    pdf.Cell(1, 10,wxT(" "),0,1);
    pdf.Cell(25);
    pdf.Cell(90, 10, wxT("Total en pagarés de clientes en cartera"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(30);
    double totCobros;
    isOK = m_totalPagaresEnCarteraTextCtrl->GetValue().ToDouble(&totCobros);
    if ( isOK ) pdf.Cell(30, 10, wxString::Format(wxT("%14.2f"), totCobros), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);
    
    pdf.Cell(1, 10,wxT(" "),0,1);
    pdf.Cell(5);
    pdf.Cell(80, 10, wxT("Total en pagarés hasta"), wxPDF_BORDER_NONE, 0);
    wxDateTime fechaP1( m_prevision1datePicker->GetValue() );
    int diaP1 = fechaP1.GetDay();
    int mesP1 = fechaP1.GetMonth() + 1;
    int anyoP1 = fechaP1.GetYear();
    pdf.Cell(20, 10, wxString::Format(wxT("%02d/%02d/%4d"), diaP1, mesP1, anyoP1),0,0);
    pdf.Cell(40);
    double impP1;
    isOK = m_importePrevision1textCtrl->GetValue().ToDouble(&impP1);
    if ( isOK ) pdf.Cell(30, 10, wxString::Format(wxT("%14.2f"), impP1), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    pdf.Cell(5);
    pdf.Cell(80, 10, wxT("Total en pagarés hasta"), wxPDF_BORDER_NONE, 0);
    wxDateTime fechaP2( m_prevision2datePicker->GetValue() );
    int diaP2 = fechaP2.GetDay();
    int mesP2 = fechaP2.GetMonth() + 1;
    int anyoP2 = fechaP2.GetYear();
    pdf.Cell(20, 10, wxString::Format(wxT("%02d/%02d/%4d"), diaP2, mesP2, anyoP2),0,0);
    pdf.Cell(40);
    double impP2;
    isOK = m_importePrevision2textCtrl->GetValue().ToDouble(&impP2);
    if ( isOK ) pdf.Cell(30, 10, wxString::Format(wxT("%14.2f"), impP2), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Crear archivo
    wxString myFic(wxString::Format(wxT("MaiPataleta%d.pdf"), fecha.GetDay()));
    pdf.SaveAsFile(myFic);
    //Close();
}

void MainDialog::OnCreditoCobradoUpdated(wxCommandEvent& event)
{
    UpdateSaldoFinal();
}

void MainDialog::OnCreditoConcedidoUpdated(wxCommandEvent& event)
{
    UpdateSaldoFinal();
}

void MainDialog::OnSaldoAnteriorUpdated(wxCommandEvent& event)
{
    UpdateSaldoFinal();
}

void MainDialog::UpdateSaldoFinal()
{
    //m_saldoFinalTextCtrl->GetValue()
    bool isOK;
    double tmpSaldoInicial, tmpCreditoConcedido, tmpCreditoCobrado, tmpSaldoFinal;
    isOK = m_saldoAnteriorTextCtrl->GetValue().ToDouble(&tmpSaldoInicial);
    isOK = m_creditoConcedidoTextCtrl->GetValue().ToDouble(&tmpCreditoConcedido);
    isOK = m_creditoCobradoTextCtrl->GetValue().ToDouble(&tmpCreditoCobrado);
    tmpSaldoFinal = tmpSaldoInicial + tmpCreditoConcedido - tmpCreditoCobrado;
    wxString txtSaldoFinal( wxString::Format(wxT("%14.2f"), tmpSaldoFinal) );
    m_saldoFinalTextCtrl->SetValue(txtSaldoFinal);
}

void MainDialog::OnImporte1Banco1Updated(wxCommandEvent& event)
{
    UpdateTotalPagos();
}

void MainDialog::OnImporte1Banco2Updated(wxCommandEvent& event)
{
    UpdateTotalPagos();
}

void MainDialog::OnImporte1Banco3Updated(wxCommandEvent& event)
{
    UpdateTotalPagos();
}

void MainDialog::OnImporte2Banco1Updated(wxCommandEvent& event)
{
    UpdateTotalPagos();
}

void MainDialog::OnImporte2Banco2Updated(wxCommandEvent& event)
{
    UpdateTotalPagos();
}

void MainDialog::OnImporte2Banco3Updated(wxCommandEvent& event)
{
    UpdateTotalPagos();
}

void MainDialog::UpdateTotalPagos()
{
    //m_importeTotalVencimientosTextCtrl
    bool isOK;
    double tmpImp1B1, tmpImp2B1, tmpImp1B2, tmpImp2B2, tmpImp1B3, tmpImp2B3, tmpTotal;
    isOK = m_importe1banco1textCtrl->GetValue().ToDouble(&tmpImp1B1);
    isOK = m_importe2banco1textCtrl->GetValue().ToDouble(&tmpImp2B1);
    isOK = m_importe1banco2textCtrl->GetValue().ToDouble(&tmpImp1B2);
    isOK = m_importe2banco2textCtrl->GetValue().ToDouble(&tmpImp2B2);
    isOK = m_importe1banco3textCtrl->GetValue().ToDouble(&tmpImp1B3);
    isOK = m_importe2banco3textCtrl->GetValue().ToDouble(&tmpImp2B3);
    tmpTotal = tmpImp1B1 + tmpImp2B1 + tmpImp1B2 + tmpImp2B2 + tmpImp1B3 + tmpImp2B3;
    wxString txtTotal( wxString::Format(wxT("%14.2f"), tmpTotal) );
    m_importeTotalVencimientosTextCtrl->SetValue(txtTotal);
}