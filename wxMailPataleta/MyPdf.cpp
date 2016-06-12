#include "MyPdf.h"

MyPdf::MyPdf()
{
}

MyPdf::~MyPdf()
{
}
  // Page header
  void MyPdf::Header()
  {
    // Logo
    Image(wxT("marce.png"),10,8,28);
    // Helvetica bold 15
    SetFont(wxT("Helvetica"),wxT("B"),15);
    // Move to the right
    Cell(60);
    // Title
    Cell(70,10,wxT("Informe diario de riesgo"),wxPDF_BORDER_FRAME,0,wxPDF_ALIGN_CENTER);
    // Line break
    Ln(10);
  }

  // Page footer
  void MyPdf::Footer()
  {
    // Position at 1.5 cm from bottom
    SetY(-15);
    // Helvetica italic 8
    SetFont(wxT("Helvetica"),wxT("I"),8);
    // Page number
    Cell(0,10,wxString::Format(wxT("Página %d/{nb}"),PageNo()),0,0,wxPDF_ALIGN_CENTER);
  }
