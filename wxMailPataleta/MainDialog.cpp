#include <wx/debug.h> 
#include <wx/msgdlg.h>
#include <wx/mimetype.h>
#include <wx/log.h>
#include <wx/filename.h>
#include "MainDialog.h"
#include "MyPdf.h"

#ifndef wxHAS_IMAGES_IN_RESOURCES
#ifdef WXDEBUG
    #include "marce.xpm"
#else
    #include "LogoPataleta.xpm"
#endif
#endif

MainDialog::MainDialog(wxWindow* parent)
    : MainDialogBaseClass(parent)
{
    #ifdef WXDEBUG
        SetIcon(wxICON(marce));
    #else
        SetIcon(wxICON(LogoPataleta));
    #endif
    // Set locale from OS
    setlocale(LC_ALL, "");
}

MainDialog::~MainDialog()
{
    // Restore locale C
    setlocale(LC_ALL, "C");
}

void MainDialog::OnInitDialog(wxInitDialogEvent &event)
{
    // Set locale from OS
    setlocale(LC_ALL, "");
}

void MainDialog::OnButtonOKClicked(wxCommandEvent& event)
{
    wxString filePdf;
    filePdf = CreatePdf();
    OpenPdf( filePdf );
    Close();
}

void MainDialog::OnButtonSendClicked(wxCommandEvent& event)
{
    wxString filePdf;
    filePdf = CreatePdf();
    SendPdf( filePdf );
    Close();
}

wxString MainDialog::CreatePdf()
{
    // Convert Controls values to their types
    bool isOK;
    double saldoAnt;// = 456987.20;
    double ctoConce;
    double ctoCobro;
    double saldoFin;
    double impB11;
    double impB12;
    double impB21;
    double impB22;
    double impB31;
    double impB32;
    double totPagos;
    double totCobros;
    double impP1;
    double impP2;
    isOK = m_saldoAnteriorTextCtrl->GetValue().ToDouble(&saldoAnt);
    isOK = m_creditoConcedidoTextCtrl->GetValue().ToDouble(&ctoConce);
    isOK = m_creditoCobradoTextCtrl->GetValue().ToDouble(&ctoCobro);
    isOK = m_saldoFinalTextCtrl->GetValue().ToDouble(&saldoFin);
    isOK = m_importe1banco1textCtrl->GetValue().ToDouble(&impB11);
    isOK = m_importe2banco1textCtrl->GetValue().ToDouble(&impB12);
    isOK = m_importe1banco2textCtrl->GetValue().ToDouble(&impB21);
    isOK = m_importe2banco2textCtrl->GetValue().ToDouble(&impB22);
    isOK = m_importe1banco3textCtrl->GetValue().ToDouble(&impB31);
    isOK = m_importe2banco3textCtrl->GetValue().ToDouble(&impB32);
    isOK = m_importeTotalVencimientosTextCtrl->GetValue().ToDouble(&totPagos);
    isOK = m_totalPagaresEnCarteraTextCtrl->GetValue().ToDouble(&totCobros);
    isOK = m_importePrevision1textCtrl->GetValue().ToDouble(&impP1);
    isOK = m_importePrevision2textCtrl->GetValue().ToDouble(&impP2);
    if (!isOK)
        wxMessageBox(wxT("No he podido convertir el 2º importe de previsión"));
    wxDateTime fechaB11( m_vencimiento1banco1datePicker->GetValue() );
    int diaB11 = 0;
    int mesB11 = 0;
    int anyoB11 = 0;
    if (fechaB11.IsValid())
    {
        diaB11 = fechaB11.GetDay();
        mesB11 = fechaB11.GetMonth() + 1;
        anyoB11 = fechaB11.GetYear();
    }
    wxDateTime fechaB12( m_vencimiento2banco1datePicker->GetValue() );
    int diaB12 = 0;
    int mesB12 = 0;
    int anyoB12 = 0;
    if (fechaB12.IsValid())
    {
        diaB12 = fechaB12.GetDay();
        mesB12 = fechaB12.GetMonth() + 1;
        anyoB12 = fechaB12.GetYear();
    }
    wxDateTime fechaB21( m_vencimiento1banco2datePicker->GetValue() );
    int diaB21 = 0;
    int mesB21 = 0;
    int anyoB21 = 0;
    if (fechaB21.IsValid())
    {
        diaB21 = fechaB21.GetDay();
        mesB21 = fechaB21.GetMonth() + 1;
        anyoB21 = fechaB21.GetYear();
    }
    wxDateTime fechaB22( m_vencimiento2banco2datePicker->GetValue() );
    int diaB22 = 0;
    int mesB22 = 0;
    int anyoB22 = 0;
    if (fechaB22.IsValid())
    {
        diaB22 = fechaB22.GetDay();
        mesB22 = fechaB22.GetMonth() + 1;
        anyoB22 = fechaB22.GetYear();
    }
    wxDateTime fechaB31( m_vencimiento1banco3datePicker->GetValue() );
    int diaB31 = 0;
    int mesB31 = 0;
    int anyoB31 = 0;
    if (fechaB31.IsValid())
    {
        diaB31 = fechaB31.GetDay();
        mesB31 = fechaB31.GetMonth() + 1;
        anyoB31 = fechaB31.GetYear();
    }
    wxDateTime fechaB32( m_vencimiento2banco3datePicker->GetValue() );
    int diaB32 = 0;
    int mesB32 = 0;
    int anyoB32 = 0;
    if (fechaB32.IsValid())
    {
        diaB32 = fechaB32.GetDay();
        mesB32 = fechaB32.GetMonth() + 1;
        anyoB32 = fechaB32.GetYear();
    }
    wxDateTime fechaP1( m_prevision1datePicker->GetValue() );
    int diaP1 = fechaP1.GetDay();
    int mesP1 = fechaP1.GetMonth() + 1;
    int anyoP1 = fechaP1.GetYear();
    wxDateTime fechaP2( m_prevision2datePicker->GetValue() );
    int diaP2 = fechaP2.GetDay();
    int mesP2 = fechaP2.GetMonth() + 1;
    int anyoP2 = fechaP2.GetYear();
    isOK = true;

    // Set locale from OS
    //setlocale(LC_ALL, "");

    // Format numbert with locale
    wxString txtSaldoAnt;
    wxString txtCtoConce;
    wxString txtCtoCobro;
    wxString txtSaldoFin;
    wxString txtImpB11;
    wxString txtImpB12;
    wxString txtImpB21;
    wxString txtImpB22;
    wxString txtImpB31;
    wxString txtImpB32;
    wxString txtTotPagos;
    wxString txtTotCobros;
    wxString txtImpP1;
    wxString txtImpP2;
    wxString txtFechaB11;
    wxString txtFechaB12;
    wxString txtFechaB21;
    wxString txtFechaB22;
    wxString txtFechaB31;
    wxString txtFechaB32;
    wxString txtFechaP1;
    wxString txtFechaP2;
    txtSaldoAnt = wxString::Format(wxT("%'14.2f"), saldoAnt);
    txtCtoConce = wxString::Format(wxT("%'14.2f"), ctoConce);
    txtCtoCobro = wxString::Format(wxT("%'14.2f"), ctoCobro);
    txtSaldoFin = wxString::Format(wxT("%'14.2f"), saldoFin);
    txtImpB11 = wxString::Format(wxT("%'14.2f"), impB11);
    txtImpB12 = wxString::Format(wxT("%'14.2f"), impB12);
    txtImpB21 = wxString::Format(wxT("%'14.2f"), impB21);
    txtImpB22 = wxString::Format(wxT("%'14.2f"), impB22);
    txtImpB31 = wxString::Format(wxT("%'14.2f"), impB31);
    txtImpB32 = wxString::Format(wxT("%'14.2f"), impB32);
    txtTotPagos = wxString::Format(wxT("%'14.2f"), totPagos);
    txtTotCobros = wxString::Format(wxT("%'14.2f"), totCobros);
    txtImpP1 = wxString::Format(wxT("%'14.2f"), impP1);
    txtImpP2 = wxString::Format(wxT("%'14.2f"), impP2);
    txtFechaB11 = "";
    if (diaB11 > 0)
        txtFechaB11 = wxString::Format(wxT("%02d/%02d/%4d"), diaB11, mesB11, anyoB11);
    txtFechaB12 = "";
    if (diaB12 > 0)
        txtFechaB12 = wxString::Format(wxT("%02d/%02d/%4d"), diaB12, mesB12, anyoB12);
    txtFechaB21 = "";
    if (diaB21 > 0)
        txtFechaB21 = wxString::Format(wxT("%02d/%02d/%4d"), diaB21, mesB21, anyoB21);
    txtFechaB22 = "";
    if (diaB22 > 0)
        txtFechaB22 = wxString::Format(wxT("%02d/%02d/%4d"), diaB22, mesB22, anyoB22);
    txtFechaB31 = "";
    if (diaB31 > 0)
        txtFechaB31 = wxString::Format(wxT("%02d/%02d/%4d"), diaB31, mesB31, anyoB31);
    txtFechaB32 = "";
    if (diaB32 > 0)
        txtFechaB32 = wxString::Format(wxT("%02d/%02d/%4d"), diaB32, mesB32, anyoB32);
    txtFechaP1 = wxString::Format(wxT("%02d/%02d/%4d"), diaP1, mesP1, anyoP1);
    txtFechaP2 = wxString::Format(wxT("%02d/%02d/%4d"), diaP2, mesP2, anyoP2);

    // Instantiation of inherited class
    MyPdf pdf;
    pdf.AliasNbPages();
    pdf.AddPage(wxPORTRAIT, wxPAPER_A4);
    wxDateTime fecha( m_fechaInformeDatePicker->GetValue() );
    int dia = fecha.GetDay();
    int mes = fecha.GetMonth() + 1;
    int anyo = fecha.GetYear();

    // Cabecera
    pdf.SetFont(wxT("Helvetica"),wxT("B"),15);
    pdf.Cell(83);
    pdf.Cell(0, 10,wxString::Format(wxT("%02d/%02d/%4d"), dia, mes, anyo),0,1);
    
    // Crédito
    pdf.SetFont(wxT("Times"),wxT(""),12);
    pdf.Cell(1, 10,wxT(" "),0,1);
    pdf.Cell(80);
    pdf.Cell(35, 10,wxT("Saldo anterior"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(60, 10, txtSaldoAnt, wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);
    pdf.Cell(80);
    pdf.Cell(35, 10,wxT("Crédito concedido"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(30);
    pdf.Cell(30, 10, txtCtoConce, wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);
    pdf.Cell(80);
    pdf.Cell(35, 10,wxT("Crédito cobrado"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(30);
    pdf.Cell(30, 10, txtCtoCobro, wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);
    pdf.Cell(80);
    pdf.Cell(35, 10,wxT("Saldo hoy"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(30);
    pdf.Cell(30, 10, txtSaldoFin, wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Previsión de pagos
    pdf.Cell(1, 10,wxT(" "),0,1);
    // Banco 1º
    pdf.Cell(5);
    pdf.Cell(60, 10, m_banco1textCtrl->GetValue(), wxPDF_BORDER_NONE, 0);
    pdf.Cell(20);
    pdf.Cell(20, 10, txtFechaB11, 0, 0);
    pdf.Cell(40);
    pdf.Cell(30, 10, txtImpB11, wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    pdf.Cell(85);
    pdf.Cell(20, 10, txtFechaB12, 0, 0);
    pdf.Cell(40);
    //if ( isOK ) 
    pdf.Cell(30, 10, txtImpB12, wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Banco 2º
    pdf.Cell(5);
    pdf.Cell(60, 10, m_banco2textCtrl->GetValue(), wxPDF_BORDER_NONE, 0);
    pdf.Cell(20);
    pdf.Cell(20, 10, txtFechaB21, 0, 0);
    pdf.Cell(40);
    pdf.Cell(30, 10, txtImpB21, wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    pdf.Cell(85);
    pdf.Cell(20, 10, txtFechaB22, 0, 0);
    pdf.Cell(40);
    pdf.Cell(30, 10, txtImpB22, wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Banco 3º
    pdf.Cell(5);
    pdf.Cell(60, 10, m_banco3textCtrl->GetValue(), wxPDF_BORDER_NONE, 0);
    pdf.Cell(20);
    pdf.Cell(20, 10, txtFechaB31, 0, 0);
    pdf.Cell(40);
    pdf.Cell(30, 10, txtImpB31, wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    pdf.Cell(85);
    pdf.Cell(20, 10, txtFechaB32, 0, 0);
    pdf.Cell(40);
    pdf.Cell(30, 10, txtImpB32, wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Total de pagarés
    pdf.Cell(1, 10,wxT(" "),0,1);
    pdf.Cell(25);
    pdf.Cell(90, 10, wxT("Suma total de pagos pendientes"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(30);
    pdf.Cell(30, 10, txtTotPagos, wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);
    
    // Cartera de pagarés
    pdf.Cell(1, 10,wxT(" "),0,1);
    pdf.Cell(25);
    pdf.Cell(90, 10, wxT("Total en pagarés de clientes en cartera"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(30);
    pdf.Cell(30, 10, txtTotCobros, wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);
    
    pdf.Cell(1, 10,wxT(" "),0,1);
    pdf.Cell(5);
    pdf.Cell(80, 10, wxT("Total en pagarés hasta"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(20, 10, txtFechaP1, 0, 0);
    pdf.Cell(40);
    pdf.Cell(30, 10, txtImpP1, wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    pdf.Cell(5);
    pdf.Cell(80, 10, wxT("Total en pagarés hasta...................................."), wxPDF_BORDER_NONE, 0);
    pdf.Cell(20, 10, txtFechaP2, 0, 0);
    pdf.Cell(40);
    pdf.Cell(30, 10, txtImpP2, wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Crear archivo
    wxString myFic(wxString::Format(wxT("MaiPataleta%02d.pdf"), fecha.GetDay()));
    pdf.SaveAsFile(myFic);
    
    // Restore locale C
    //setlocale(LC_ALL, "C");
    
    return( myFic );
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
    bool isOK;
    double tmpSaldoInicial, tmpCreditoConcedido, tmpCreditoCobrado, tmpSaldoFinal;
    wxString valorCtrl;
    isOK = m_saldoAnteriorTextCtrl->GetValue().ToDouble(&tmpSaldoInicial);
    isOK = m_creditoConcedidoTextCtrl->GetValue().ToDouble(&tmpCreditoConcedido);
//    valorCtrl = m_creditoCobradoTextCtrl->GetValue();
//    isOK = valorCtrl.ToCDouble(&tmpCreditoCobrado);
    isOK = m_creditoCobradoTextCtrl->GetValue().ToDouble(&tmpCreditoCobrado);
    if (!isOK)
        wxMessageBox(wxT("No he podido convertir el crédito cobrado."));
    tmpSaldoFinal = tmpSaldoInicial + tmpCreditoConcedido - tmpCreditoCobrado;
    wxString txtSaldoFinal( wxString::Format(wxT("%'14.2f"), tmpSaldoFinal) );
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
    bool isOK;
    double tmpImp1B1, tmpImp2B1, tmpImp1B2, tmpImp2B2, tmpImp1B3, tmpImp2B3, tmpTotal;
    isOK = m_importe1banco1textCtrl->GetValue().ToDouble(&tmpImp1B1);
    isOK = m_importe2banco1textCtrl->GetValue().ToDouble(&tmpImp2B1);
    isOK = m_importe1banco2textCtrl->GetValue().ToDouble(&tmpImp1B2);
    isOK = m_importe2banco2textCtrl->GetValue().ToDouble(&tmpImp2B2);
    isOK = m_importe1banco3textCtrl->GetValue().ToDouble(&tmpImp1B3);
    isOK = m_importe2banco3textCtrl->GetValue().ToDouble(&tmpImp2B3);
    if (!isOK)
        wxMessageBox(wxT("No he podido convertir el 2º importe del 3er banco."));
    tmpTotal = tmpImp1B1 + tmpImp2B1 + tmpImp1B2 + tmpImp2B2 + tmpImp1B3 + tmpImp2B3;
    wxString txtTotal( wxString::Format(wxT("%'14.2f"), tmpTotal) );
    m_importeTotalVencimientosTextCtrl->SetValue(txtTotal);
}

void MainDialog::OpenPdf( wxString filePdf )
{
    //wxString gs_lastFile = m_filePicker21->GetPath();   //GetFileName().GetFullName();
    wxString ext = wxFileName(filePdf).GetExt();
    wxFileType *ft = wxTheMimeTypesManager->GetFileTypeFromExtension(ext);
    if ( !ft )
    {
        wxLogError(wxT("Imposible determinar el tipo de fichero para la extensión '%s'"),
                   ext.c_str());
        return;
    }

    wxString cmd;
    bool ok = false;
    const wxFileType::MessageParameters params(filePdf);
#ifdef __WXMSW__
    // try editor, for instance Notepad if extension is .xml
    cmd = ft->GetExpandedCommand(wxT("AcroRd32"), params);
    ok = !cmd.empty();
#endif
    if (!ok) // else try viewer
        ok = ft->GetOpenCommand(&cmd, params);
    delete ft;
    if ( !ok )
    {
        wxLogError(wxT("Imposible encontrar cómo abrir ficheros de extensión '%s'"),
                   ext.c_str());
        return;
    }
    wxExecuteEnv env;
    env.cwd = wxFileName(filePdf).GetPath();
    int code = wxExecute(cmd, wxEXEC_SYNC, NULL, &env);
    wxLogStatus(wxT("Proceso '%s' terminado con codigo de salida %d."),
        cmd.c_str(), code);
}

void MainDialog::SendPdf( wxString filePdf )
{
    
}
