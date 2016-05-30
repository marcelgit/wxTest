#ifndef MYPDF_H
#define MYPDF_H
#include "wx/pdfdoc.h"

class MyPdf : public wxPdfDocument
{
public:
    MyPdf();
    ~MyPdf();
    void Header();
    void Footer();
};

#endif // MYPDF_H
