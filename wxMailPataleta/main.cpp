/////////////////////////////////////////////////////////////////////////////
// Name:        wxMailPataleta
// Purpose:     Control of credit risk
// Author:      Marcelino Gisbert
// Copyright:   (c) 2017 Marcelino Gisbert
// License:     wxWindows
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

// for all others, include the necessary headers (this file is usually all you
// need because it includes almost all "standard" wxWidgets headers
#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif


#include <wx/app.h>
#include <wx/event.h>
#include "MainDialog.h"
#include <wx/image.h>

#ifndef wxHAS_IMAGES_IN_RESOURCES
    #include "LogoPataleta.xpm"
#endif

// Variables globales para usar en los formularios que
// usen wxValidator
namespace GlobalVal
{
    float importe;
}

// Define the MainApp
class MainApp : public wxApp
{
public:
    // override base class virtuals
    // ----------------------------

    // this one is called on application startup and is a good place for the app
    // initialization (doing it here and not in the ctor allows to have an error
    // return: if OnInit() returns false, the application terminates)

    virtual bool OnInit() wxOVERRIDE;
};

DECLARE_APP(MainApp)
IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    if ( !wxApp::OnInit() )
        return false;

        // Set locale
        //setlocale(LC_ALL, "C");
        //wxLocale(wxLANGUAGE_SPANISH);
        // Add the common image handlers
#if wxUSE_LIBPNG
    wxImage::AddHandler(new wxPNGHandler);
#endif
#if wxUSE_LIBJPEG
    wxImage::AddHandler(new wxJPEGHandler);
#endif
#if wxUSE_GIF
    wxImage::AddHandler(new wxGIFHandler);
#endif

        MainDialog mainDialog(NULL);
        mainDialog.ShowModal();
        return true;
}

