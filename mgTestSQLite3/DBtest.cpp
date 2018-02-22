#include "DBtest.h"
#include <wx/msgdlg.h>
#include <wx/wxsqlite3.h>

DBtest::DBtest()
{
}

DBtest::~DBtest()
{
}

wxSQLite3Database* DBtest::initDB(void)
{
    wxString testDBName = wxGetCwd() + wxT("/mydbtest.db");
    if (wxFileExists(testDBName))
    {
        if (wxMessageBox(wxT("¿Borrar y crear de nuevo?"), wxT("Ya existe la base de datos"), wxYES_NO))
            wxRemoveFile(testDBName);
    }
    m_db = new wxSQLite3Database();
    m_db->Open(testDBName);
    //db->ExecuteUpdate(wxT("CREATE TABLE test (col1 INTEGER)"));
    return m_db;
}

void DBtest::clearDB()  //wxSQLite3Database* db)
{
    assert(m_db != NULL);
	m_db->Close();
	delete m_db;
}

int DBtest::execute(wxString sentence)
{
    int err = 0;
    try
    {
        m_db->ExecuteUpdate(sentence);
        //wxMessageBox(wxT("La consulta se ha realizado con éxito"), wxT("Consultar base de datos"));
    }
    catch (wxSQLite3Exception& e)
    {
        //wxString errSQL;
        //errSQL.Printf(wxT("Error al realizar la consulta: %d, %s"), e.GetErrorCode(), e.GetMessage().ToUTF8());
        //cerr << e.GetErrorCode() << ":" << (const char*)(e.GetMessage().mb_str()) << endl;
        err = e.GetErrorCode();
    }
    catch(...)
    {
        //wxMessageBox(wxT("Se produjo un error al ejecutar la consulta."), wxT("Consultar base de datos"));
        err = 999;
    }
    return err;
}