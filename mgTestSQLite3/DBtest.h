#ifndef _DBTEST_H
#define _DBTEST_H
#include <wx/string.h>
#include <wx/wxsqlite3.h>

class DBtest
{
public:
    DBtest();
    ~DBtest();
    wxSQLite3Database* initDB(void);
    void clearDB(); //wxSQLite3Database* db);
    int execute(wxString sentence);
private:
    wxSQLite3Database* m_db;
};

#endif // _DBTEST_H
