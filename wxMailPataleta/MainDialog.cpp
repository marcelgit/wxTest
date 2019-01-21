#include <vector>
//#include <algorithm>
#include <wx/debug.h> 
#include <wx/msgdlg.h>
#include <wx/mimetype.h>
#include <wx/log.h>
#include <wx/filename.h>
#include "wx/wxsqlite3.h"
#include "MainDialog.h"
#include "MyPdf.h"
#include "registro_global.h"

#ifndef wxHAS_IMAGES_IN_RESOURCES
    #include "LogoPataleta600x400.xpm"
#endif

wxSQLite3Database* initDB(void)
{
	wxString dbName = wxGetCwd() + wxT("/dbMailPataleta.db");
    wxSQLite3Database* db = new wxSQLite3Database();
    db->Open(dbName);
        wxString sentencia = wxT("CREATE TABLE IF NOT EXISTS tabla ");
        sentencia += wxT("(Fecha TEXT PRIMARY KEY");
        sentencia += wxT(", SaldoAnterior REAL");
        sentencia += wxT(", CreditoConcedido REAL");
        sentencia += wxT(", CreditoCobrado REAL");
        sentencia += wxT(", Banco1Nombre TEXT");
        sentencia += wxT(", Banco1Fecha TEXT");
        sentencia += wxT(", Banco1Importe REAL");
        sentencia += wxT(", Banco2Nombre TEXT");
        sentencia += wxT(", Banco2Fecha TEXT");
        sentencia += wxT(", Banco2Importe REAL");
        sentencia += wxT(", Banco3Nombre TEXT");
        sentencia += wxT(", Banco3Fecha TEXT");
        sentencia += wxT(", Banco3Importe REAL");
        sentencia += wxT(", Banco4Nombre TEXT");
        sentencia += wxT(", Banco4Fecha TEXT");
        sentencia += wxT(", Banco4Importe REAL");
        sentencia += wxT(", Banco5Nombre TEXT");
        sentencia += wxT(", Banco5Fecha TEXT");
        sentencia += wxT(", Banco5Importe REAL");
        sentencia += wxT(", Banco6Nombre TEXT");
        sentencia += wxT(", Banco6Fecha TEXT");
        sentencia += wxT(", Banco6Importe REAL");
        sentencia += wxT(", Pagares REAL");
        sentencia += wxT(", CobroVto1Fecha TEXT");
        sentencia += wxT(", CobroVto1Importe REAL");
        sentencia += wxT(", CobroVto2Fecha TEXT");
        sentencia += wxT(", CobroVto2Importe REAL)");
        try
        {
            db->ExecuteUpdate(sentencia);
        }
        catch (wxSQLite3Exception& e)
        {
            wxString errSQL;
            errSQL.Printf(wxT("Error al crear la tabla: %d, %s"), e.GetErrorCode(), e.GetMessage().ToUTF8());
            //cerr << e.GetErrorCode() << ":" << (const char*)(e.GetMessage().mb_str()) << endl;
            wxMessageBox(errSQL);
        }
        catch (...)
        {
            wxMessageBox(wxT("No he podido crear la tabla."));
        }
	return db;
}

void clearDB(wxSQLite3Database* db)
{
	assert(db != NULL);
	db->Close();
	delete db;
}

MainDialog::MainDialog(wxWindow* parent)
    : MainDialogBaseClass(parent)
{
    SetIcon(wxICON(LogoPataleta600x400));
}

MainDialog::~MainDialog()
{
}

void MainDialog::OnInitDialog(wxInitDialogEvent &event)
{
    ReadCurrentData();
}

void MainDialog::OnButtonOKClicked(wxCommandEvent& event)
{
    //wxMessageBox(wxT("Abrir"));
    SaveData();
    wxString filePdf;
    filePdf = CreatePdf();
    OpenPdf( filePdf );
    Close();
}

void MainDialog::OnButtonSendClicked(wxCommandEvent& event)
{
    SaveData();
    wxString filePdf;
    filePdf = CreatePdf();
    SendPdf( filePdf );
    Close();
}

wxString MainDialog::CreatePdf()
{
    // Convert Controls values to their types
    wxDateTime fechaB1( m_banco1datePicker->GetValue() );
    int diaB1 = 0;
    int mesB1 = 0;
    int anyoB1 = 0;
    if (fechaB1.IsValid())
    {
        diaB1 = fechaB1.GetDay();
        mesB1 = fechaB1.GetMonth() + 1;
        anyoB1 = fechaB1.GetYear();
    }
    wxDateTime fechaB2( m_banco2datePicker->GetValue() );
    int diaB2 = 0;
    int mesB2 = 0;
    int anyoB2 = 0;
    if (fechaB2.IsValid())
    {
        diaB2 = fechaB2.GetDay();
        mesB2 = fechaB2.GetMonth() + 1;
        anyoB2 = fechaB2.GetYear();
    }
    wxDateTime fechaB3( m_banco3datePicker->GetValue() );
    int diaB3 = 0;
    int mesB3 = 0;
    int anyoB3 = 0;
    if (fechaB3.IsValid())
    {
        diaB3 = fechaB3.GetDay();
        mesB3 = fechaB3.GetMonth() + 1;
        anyoB3 = fechaB3.GetYear();
    }
    wxDateTime fechaB4( m_banco4datePicker->GetValue() );
    int diaB4 = 0;
    int mesB4 = 0;
    int anyoB4 = 0;
    if (fechaB4.IsValid())
    {
        diaB4 = fechaB4.GetDay();
        mesB4 = fechaB4.GetMonth() + 1;
        anyoB4 = fechaB4.GetYear();
    }
    wxDateTime fechaB5( m_banco5datePicker->GetValue() );
    int diaB5 = 0;
    int mesB5 = 0;
    int anyoB5 = 0;
    if (fechaB5.IsValid())
    {
        diaB5 = fechaB5.GetDay();
        mesB5 = fechaB5.GetMonth() + 1;
        anyoB5 = fechaB5.GetYear();
    }
    wxDateTime fechaB6( m_banco6datePicker->GetValue() );
    int diaB6 = 0;
    int mesB6 = 0;
    int anyoB6 = 0;
    if (fechaB6.IsValid())
    {
        diaB6 = fechaB6.GetDay();
        mesB6 = fechaB6.GetMonth() + 1;
        anyoB6 = fechaB6.GetYear();
    }
    wxDateTime fechaP1( m_prevision1datePicker->GetValue() );
    int diaP1 = fechaP1.GetDay();
    int mesP1 = fechaP1.GetMonth() + 1;
    int anyoP1 = fechaP1.GetYear();
    wxDateTime fechaP2( m_prevision2datePicker->GetValue() );
    int diaP2 = fechaP2.GetDay();
    int mesP2 = fechaP2.GetMonth() + 1;
    int anyoP2 = fechaP2.GetYear();
    wxString txtFechaB1;
    wxString txtFechaB2;
    wxString txtFechaB3;
    wxString txtFechaB4;
    wxString txtFechaB5;
    wxString txtFechaB6;
    wxString txtFechaP1;
    wxString txtFechaP2;
    txtFechaB1 = "";
    if (diaB1 > 0)
        txtFechaB1 = wxString::Format(wxT("%02d/%02d/%4d"), diaB1, mesB1, anyoB1);
    txtFechaB2 = "";
    if (diaB2 > 0)
        txtFechaB2 = wxString::Format(wxT("%02d/%02d/%4d"), diaB2, mesB2, anyoB2);
    txtFechaB3 = "";
    if (diaB3 > 0)
        txtFechaB3 = wxString::Format(wxT("%02d/%02d/%4d"), diaB3, mesB3, anyoB3);
    txtFechaB4 = "";
    if (diaB4 > 0)
        txtFechaB4 = wxString::Format(wxT("%02d/%02d/%4d"), diaB4, mesB4, anyoB4);
    txtFechaB5 = "";
    if (diaB5 > 0)
        txtFechaB5 = wxString::Format(wxT("%02d/%02d/%4d"), diaB5, mesB5, anyoB5);
    txtFechaB6 = "";
    if (diaB6 > 0)
        txtFechaB6 = wxString::Format(wxT("%02d/%02d/%4d"), diaB6, mesB6, anyoB6);
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
    pdf.Cell(60, 10, m_saldoAnteriorTextCtrl->GetValue(), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);
    pdf.Cell(80);
    pdf.Cell(35, 10,wxT("Crédito concedido"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(30);
    pdf.Cell(30, 10, m_creditoConcedidoTextCtrl->GetValue(), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);
    pdf.Cell(80);
    pdf.Cell(35, 10,wxT("Crédito cobrado"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(30);
    pdf.Cell(30, 10, m_creditoCobradoTextCtrl->GetValue(), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);
    pdf.Cell(80);
    pdf.Cell(35, 10,wxT("Saldo hoy"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(30);
    pdf.Cell(30, 10, m_saldoFinalTextCtrl->GetValue(), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Previsión de pagos
    pdf.Cell(1, 10,wxT(" "),0,1);
    // Banco 1º
    pdf.Cell(5);
    pdf.Cell(60, 10, m_banco1textCtrl->GetValue(), wxPDF_BORDER_NONE, 0);
    pdf.Cell(20);
    pdf.Cell(20, 10, txtFechaB1, 0, 0);
    pdf.Cell(40);
    pdf.Cell(30, 10, m_importe1textCtrl->GetValue(), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Banco 2º
    pdf.Cell(5);
    pdf.Cell(60, 10, m_banco2textCtrl->GetValue(), wxPDF_BORDER_NONE, 0);
    pdf.Cell(20);
    pdf.Cell(20, 10, txtFechaB2, 0, 0);
    pdf.Cell(40);
    pdf.Cell(30, 10, m_importe2textCtrl->GetValue(), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Banco 3º
    pdf.Cell(5);
    pdf.Cell(60, 10, m_banco3textCtrl->GetValue(), wxPDF_BORDER_NONE, 0);
    pdf.Cell(20);
    pdf.Cell(20, 10, txtFechaB3, 0, 0);
    pdf.Cell(40);
    pdf.Cell(30, 10, m_importe3textCtrl->GetValue(), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Banco 4º
    pdf.Cell(5);
    pdf.Cell(60, 10, m_banco4textCtrl->GetValue(), wxPDF_BORDER_NONE, 0);
    pdf.Cell(20);
    pdf.Cell(20, 10, txtFechaB4, 0, 0);
    pdf.Cell(40);
    pdf.Cell(30, 10, m_importe4textCtrl->GetValue(), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Banco 5º
    pdf.Cell(5);
    pdf.Cell(60, 10, m_banco5textCtrl->GetValue(), wxPDF_BORDER_NONE, 0);
    pdf.Cell(20);
    pdf.Cell(20, 10, txtFechaB5, 0, 0);
    pdf.Cell(40);
    pdf.Cell(30, 10, m_importe5textCtrl->GetValue(), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Banco 6º
    pdf.Cell(5);
    pdf.Cell(60, 10, m_banco6textCtrl->GetValue(), wxPDF_BORDER_NONE, 0);
    pdf.Cell(20);
    pdf.Cell(20, 10, txtFechaB6, 0, 0);
    pdf.Cell(40);
    pdf.Cell(30, 10, m_importe6textCtrl->GetValue(), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Total de pagarés
    pdf.Cell(1, 10,wxT(" "),0,1);
    pdf.Cell(25);
    pdf.Cell(90, 10, wxT("Suma total de pagos pendientes"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(30);
    pdf.Cell(30, 10, m_importeTotalVencimientosTextCtrl->GetValue(), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);
    
    // Cartera de pagarés
    pdf.Cell(1, 10,wxT(" "),0,1);
    pdf.Cell(25);
    pdf.Cell(90, 10, wxT("Total en pagarés de clientes en cartera"), wxPDF_BORDER_NONE, 0);
    pdf.Cell(30);
    pdf.Cell(30, 10, m_totalPagaresEnCarteraTextCtrl->GetValue(), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);
    
    pdf.Cell(1, 10,wxT(" "),0,1);
    pdf.Cell(5);
    pdf.Cell(80, 10, wxT("Total en pagarés hasta...................................."), wxPDF_BORDER_NONE, 0);
    pdf.Cell(20, 10, txtFechaP1, 0, 0);
    pdf.Cell(40);
    pdf.Cell(30, 10, m_importePrevision1textCtrl->GetValue(), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    pdf.Cell(5);
    pdf.Cell(80, 10, wxT("Total en pagarés hasta...................................."), wxPDF_BORDER_NONE, 0);
    pdf.Cell(20, 10, txtFechaP2, 0, 0);
    pdf.Cell(40);
    pdf.Cell(30, 10, m_importePrevision2textCtrl->GetValue(), wxPDF_BORDER_NONE, 1, wxPDF_ALIGN_RIGHT);

    // Crear archivo
    wxString myFic(wxString::Format(wxT("MailPataleta%02d.pdf"), fecha.GetDay()));
    pdf.SaveAsFile(myFic);
 
    return( myFic );
}

void MainDialog::SaveData()
{
    // Salvar en la base de datos
    wxDateTime fecha( m_fechaInformeDatePicker->GetValue() );
    int dia = fecha.GetDay();
    int mes = fecha.GetMonth() + 1;
    int anyo = fecha.GetYear();
    double saldoAnt;// = 456987.20;
    double ctoConce;
    double ctoCobro;
    double saldoFin;
    double impB1;
    double impB2;
    double impB3;
    double impB4;
    double impB5;
    double impB6;
    double totPagos;
    double totCobros;
    double impP1;
    double impP2;

    //    m_saldoAnteriorTextCtrl->GetValue().ToDouble(&saldoAnt);
    saldoAnt=ImporteDe(m_saldoAnteriorTextCtrl->GetValue());
    //m_creditoConcedidoTextCtrl->GetValue().ToDouble(&ctoConce);
    ctoConce=ImporteDe(m_creditoConcedidoTextCtrl->GetValue());
    //m_creditoCobradoTextCtrl->GetValue().ToDouble(&ctoCobro);
    ctoCobro=ImporteDe(m_creditoCobradoTextCtrl->GetValue());
    //m_saldoFinalTextCtrl->GetValue().ToDouble(&saldoFin);
    saldoFin=ImporteDe(m_saldoFinalTextCtrl->GetValue());
    //m_importe1textCtrl->GetValue().ToDouble(&impB1);
    impB1=ImporteDe(m_importe1textCtrl->GetValue());
    //m_importe2textCtrl->GetValue().ToDouble(&impB2);
    impB2=ImporteDe(m_importe2textCtrl->GetValue());
    //m_importe3textCtrl->GetValue().ToDouble(&impB3);
    impB3=ImporteDe(m_importe3textCtrl->GetValue());
    //m_importe4textCtrl->GetValue().ToDouble(&impB4);
    impB4=ImporteDe(m_importe4textCtrl->GetValue());
    //m_importe5textCtrl->GetValue().ToDouble(&impB5);
    impB5=ImporteDe(m_importe5textCtrl->GetValue());
    //m_importe6textCtrl->GetValue().ToDouble(&impB6);
    impB6=ImporteDe(m_importe6textCtrl->GetValue());
    //m_importeTotalVencimientosTextCtrl->GetValue().ToDouble(&totPagos);
    totPagos=ImporteDe(m_importeTotalVencimientosTextCtrl->GetValue());
    //m_totalPagaresEnCarteraTextCtrl->GetValue().ToDouble(&totCobros);
    totCobros=ImporteDe(m_totalPagaresEnCarteraTextCtrl->GetValue());
    //m_importePrevision1textCtrl->GetValue().ToDouble(&impP1);
    impP1=ImporteDe(m_importePrevision1textCtrl->GetValue());
    //m_importePrevision2textCtrl->GetValue().ToDouble(&impP2);
    impP2=ImporteDe(m_importePrevision2textCtrl->GetValue());
    int m_dia;
    int m_mes;
    int m_anyo;
    m_dia = m_banco1datePicker->GetValue().GetDay();
    m_mes = m_banco1datePicker->GetValue().GetMonth()+1;
    m_anyo = m_banco1datePicker->GetValue().GetYear();
    wxString txtFechaB1;//("2018-12-31");
    txtFechaB1.Printf("%04d-%02d-%02d", m_anyo, m_mes, m_dia);
    m_dia = m_banco2datePicker->GetValue().GetDay();
    m_mes = m_banco2datePicker->GetValue().GetMonth()+1;
    m_anyo = m_banco2datePicker->GetValue().GetYear();
    wxString txtFechaB2;
    txtFechaB2.Printf("%04d-%02d-%02d", m_anyo, m_mes, m_dia);
    m_dia = m_banco3datePicker->GetValue().GetDay();
    m_mes = m_banco3datePicker->GetValue().GetMonth()+1;
    m_anyo = m_banco3datePicker->GetValue().GetYear();
    wxString txtFechaB3;
    txtFechaB3.Printf("%04d-%02d-%02d", m_anyo, m_mes, m_dia);
    m_dia = m_banco4datePicker->GetValue().GetDay();
    m_mes = m_banco4datePicker->GetValue().GetMonth()+1;
    m_anyo = m_banco4datePicker->GetValue().GetYear();
    wxString txtFechaB4;
    txtFechaB4.Printf("%04d-%02d-%02d", m_anyo, m_mes, m_dia);
    m_dia = m_banco5datePicker->GetValue().GetDay();
    m_mes = m_banco5datePicker->GetValue().GetMonth()+1;
    m_anyo = m_banco5datePicker->GetValue().GetYear();
    wxString txtFechaB5;
    txtFechaB5.Printf("%04d-%02d-%02d", m_anyo, m_mes, m_dia);
    m_dia = m_banco6datePicker->GetValue().GetDay();
    m_mes = m_banco6datePicker->GetValue().GetMonth()+1;
    m_anyo = m_banco6datePicker->GetValue().GetYear();
    wxString txtFechaB6;
    txtFechaB6.Printf("%04d-%02d-%02d", m_anyo, m_mes, m_dia);
    m_dia = m_prevision1datePicker->GetValue().GetDay();
    m_mes = m_prevision1datePicker->GetValue().GetMonth()+1;
    m_anyo = m_prevision1datePicker->GetValue().GetYear();
    wxString txtFechaP1;
    txtFechaP1.Printf("%04d-%02d-%02d", m_anyo, m_mes, m_dia);
    m_dia = m_prevision2datePicker->GetValue().GetDay();
    m_mes = m_prevision2datePicker->GetValue().GetMonth()+1;
    m_anyo = m_prevision2datePicker->GetValue().GetYear();
    wxString txtFechaP2;
    txtFechaP2.Printf("%04d-%02d-%02d", m_anyo, m_mes, m_dia);

    wxSQLite3Database* db = initDB();
    wxString sentencia = wxT("INSERT INTO tabla (");
        sentencia += wxT("Fecha");
        sentencia += wxT(", SaldoAnterior");
        sentencia += wxT(", CreditoConcedido");
        sentencia += wxT(", CreditoCobrado");
        sentencia += wxT(", Banco1Nombre");
        sentencia += wxT(", Banco1Fecha");
        sentencia += wxT(", Banco1Importe");
        sentencia += wxT(", Banco2Nombre");
        sentencia += wxT(", Banco2Fecha");
        sentencia += wxT(", Banco2Importe");
        sentencia += wxT(", Banco3Nombre");
        sentencia += wxT(", Banco3Fecha");
        sentencia += wxT(", Banco3Importe");
        sentencia += wxT(", Banco4Nombre");
        sentencia += wxT(", Banco4Fecha");
        sentencia += wxT(", Banco4Importe");
        sentencia += wxT(", Banco5Nombre");
        sentencia += wxT(", Banco5Fecha");
        sentencia += wxT(", Banco5Importe");
        sentencia += wxT(", Banco6Nombre");
        sentencia += wxT(", Banco6Fecha");
        sentencia += wxT(", Banco6Importe");
        sentencia += wxT(", Pagares");
        sentencia += wxT(", CobroVto1Fecha");
        sentencia += wxT(", CobroVto1Importe");
        sentencia += wxT(", CobroVto2Fecha");
        sentencia += wxT(", CobroVto2Importe");
        sentencia += ") VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)";
    try
    {
        wxSQLite3Statement stmt = db->PrepareStatement(sentencia);
        wxString tmpsentencia;
        tmpsentencia.Printf(wxT("%4d-%02d-%02d"), anyo, mes, dia);    //Fecha TEXT
        stmt.Bind(1, tmpsentencia);
        stmt.Bind(2, saldoAnt);
        stmt.Bind(3, ctoConce);
        stmt.Bind(4, ctoCobro);
        stmt.Bind(5, m_banco1textCtrl->GetValue());
        stmt.Bind(6, txtFechaB1);
        stmt.Bind(7, impB1);
        stmt.Bind(8, m_banco2textCtrl->GetValue());
        stmt.Bind(9, txtFechaB2);
        stmt.Bind(10, impB2);
        stmt.Bind(11, m_banco3textCtrl->GetValue());
        stmt.Bind(12, txtFechaB3);
        stmt.Bind(13, impB3);
        stmt.Bind(14, m_banco4textCtrl->GetValue());
        stmt.Bind(15, txtFechaB4);
        stmt.Bind(16, impB4);
        stmt.Bind(17, m_banco5textCtrl->GetValue());
        stmt.Bind(18, txtFechaB5);
        stmt.Bind(19, impB5);
        stmt.Bind(20, m_banco6textCtrl->GetValue());
        stmt.Bind(21, txtFechaB6);
        stmt.Bind(22, impB6);
        stmt.Bind(23, totCobros);
        stmt.Bind(24, txtFechaP1);
        stmt.Bind(25, impP1);
        stmt.Bind(26, txtFechaP2);
        stmt.Bind(27, impP2);
        int res = 0;
        res = stmt.ExecuteUpdate();
    }
    catch(wxSQLite3Exception& e)
    {
        wxString msg;
        msg.Printf(wxT("%s %d: %s"), wxT("INSERT ha provocado un error "), e.GetErrorCode(),e.GetMessage().ToUTF8());
        wxMessageBox(msg);
    }
    catch (...)
    {
        wxMessageBox(wxT("No he podido salvar los datos."));
    }

    clearDB(db);
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
    double tmpSaldoInicial, tmpCreditoConcedido, tmpCreditoCobrado, tmpSaldoFinal;
    tmpSaldoInicial = ImporteDe(m_saldoAnteriorTextCtrl->GetValue());
    tmpCreditoConcedido = ImporteDe(m_creditoConcedidoTextCtrl->GetValue());
    tmpCreditoCobrado = ImporteDe(m_creditoCobradoTextCtrl->GetValue());
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
    double tmpImp1 = ImporteDe(m_importe1textCtrl->GetValue());
    double tmpImp2 = ImporteDe(m_importe2textCtrl->GetValue());
    double tmpImp3 = ImporteDe(m_importe3textCtrl->GetValue());
    double tmpImp4 = ImporteDe(m_importe4textCtrl->GetValue());
    double tmpImp5 = ImporteDe(m_importe5textCtrl->GetValue());
    double tmpImp6 = ImporteDe(m_importe6textCtrl->GetValue());
    double tmpTotal = tmpImp1 + tmpImp2 + tmpImp3 + tmpImp4 + tmpImp5 + tmpImp6;
    wxString txtTotal( wxString::Format(wxT("%'14.2f"), tmpTotal) );
    m_importeTotalVencimientosTextCtrl->SetValue(txtTotal);
}

void MainDialog::OpenPdf( wxString filePdf )
{
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
#else
    cmd = ft->GetExpandedCommand(wxT("/usr/bin/evince"), params);
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
    wxMessageBox(wxT("Envío por e-mail"), wxT("Send"));
}

double MainDialog::ImporteDe(const wxString& txt)
{
    double importe;
    wxString txt_tmp(txt);
    txt_tmp.Replace(".","",true);
    txt_tmp.ToDouble(&importe);
    return(importe);
}

void MainDialog::ReadCurrentData()
{
    struct banco{
        wxString nombre;
        double importe;
        wxDateTime fecha;
    } b;
    std::vector<banco> vb1;
    std::vector<banco> vb2;

    //wxMessageBox(wxT("Lectura del día anterior"), wxT("Read"));
    wxDateTime fecha = wxDateTime::Today();
    int m_dia = fecha.GetDay();
    int m_mes = fecha.GetMonth() + 1;
    int m_anyo = fecha.GetYear();
    wxString query;
    query.Printf("SELECT * FROM tabla WHERE Fecha < '%04d-%02d-%02d' ORDER BY Fecha DESC LIMIT 1", m_anyo, m_mes, m_dia);
    wxSQLite3Database* db = initDB();
    wxSQLite3ResultSet set = db->ExecuteQuery(query);
    set.NextRow();
    
    double saldoAnt = set.GetDouble(wxT("SaldoAnterior"));
    double ctoConce = set.GetDouble(wxT("CreditoConcedido"));
    double ctoCobro = set.GetDouble(wxT("CreditoCobrado"));
    double nuevoSaldoAnterior = saldoAnt + ctoConce - ctoCobro;
    b.nombre = set.GetAsString(wxT("Banco1Nombre"));
    b.importe = set.GetDouble(wxT("Banco1Importe"));
    b.fecha = set.GetDate(wxT("Banco1Fecha"));
    vb1.push_back(b);
    b.nombre = set.GetAsString(wxT("Banco2Nombre"));
    b.importe = set.GetDouble(wxT("Banco2Importe"));
    b.fecha = set.GetDate(wxT("Banco2Fecha"));
    vb1.push_back(b);
    b.nombre = set.GetAsString(wxT("Banco3Nombre"));
    b.importe = set.GetDouble(wxT("Banco3Importe"));
    b.fecha = set.GetDate(wxT("Banco3Fecha"));
    vb1.push_back(b);
    b.nombre = set.GetAsString(wxT("Banco4Nombre"));
    b.importe = set.GetDouble(wxT("Banco4Importe"));
    b.fecha = set.GetDate(wxT("Banco4Fecha"));
    vb1.push_back(b);
    b.nombre = set.GetAsString(wxT("Banco5Nombre"));
    b.importe = set.GetDouble(wxT("Banco5Importe"));
    b.fecha = set.GetDate(wxT("Banco5Fecha"));
    vb1.push_back(b);
    b.nombre = set.GetAsString(wxT("Banco6Nombre"));
    b.importe = set.GetDouble(wxT("Banco6Importe"));
    b.fecha = set.GetDate(wxT("Banco6Fecha"));
    vb1.push_back(b);
    double pagares = set.GetDouble(wxT("Pagares"));
    wxDateTime vto1fecha = set.GetDate(wxT("CobroVto1Fecha"));
    double vto1imp = set.GetDouble(wxT("CobroVto1Importe"));
    wxDateTime vto2fecha = set.GetDouble(wxT("CobroVto2Fecha"));
    double vto2imp = set.GetDouble(wxT("CobroVto2Importe"));

    for(std::vector<banco>::iterator i = vb1.begin(); i != vb1.end(); ++i)
    {
        if ((0 < i->importe) && (fecha < i->fecha)) vb2.push_back(*i);
    }
    
    set.Finalize();

    m_saldoAnteriorTextCtrl->SetValue(wxString::Format("%'14.2f", saldoAnt));
    m_creditoConcedidoTextCtrl->SetValue(wxString::Format("%'14.2f", ctoConce));
    m_creditoCobradoTextCtrl->SetValue(wxString::Format("%'14.2f", ctoCobro));
    if (0 < vb2.size())
    {
        m_banco1textCtrl->SetValue(vb2[0].nombre);
        m_banco1datePicker->SetValue(vb2[0].fecha);
        m_importe1textCtrl->SetValue(wxString::Format("%'14.2f", vb2[0].importe));
    }
    if (1 < vb2.size())
    {
        m_banco2textCtrl->SetValue(vb2[1].nombre);
        m_banco2datePicker->SetValue(vb2[1].fecha);
        m_importe2textCtrl->SetValue(wxString::Format("%'14.2f", vb2[1].importe));
    }
    if (2 < vb2.size())
    {
        m_banco3textCtrl->SetValue(vb2[2].nombre);
        m_banco3datePicker->SetValue(vb2[2].fecha);
        m_importe3textCtrl->SetValue(wxString::Format("%'14.2f", vb2[2].importe));
    }
    if (3 < vb2.size())
    {
        m_banco4textCtrl->SetValue(vb2[3].nombre);
        m_banco4datePicker->SetValue(vb2[3].fecha);
        m_importe4textCtrl->SetValue(wxString::Format("%'14.2f", vb2[3].importe));
    }
    if (4 < vb2.size())
    {
        m_banco5textCtrl->SetValue(vb2[4].nombre);
        m_banco5datePicker->SetValue(vb2[4].fecha);
        m_importe5textCtrl->SetValue(wxString::Format("%'14.2f", vb2[4].importe));
    }
    if (5 < vb2.size())
    {
        m_banco6textCtrl->SetValue(vb2[5].nombre);
        m_banco6datePicker->SetValue(vb2[5].fecha);
        m_importe6textCtrl->SetValue(wxString::Format("%'14.2f", vb2[5].importe));
    }
}
/*bool MainDialog::TransferDataToWindow()
{
    bool r = wxDialog::TransferDataToWindow();
    return r;
}*/
