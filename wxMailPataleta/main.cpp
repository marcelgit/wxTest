#include <wx/app.h>
#include <wx/event.h>
#include "MainDialog.h"
#include <wx/image.h>

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
    MainApp() {}
    virtual ~MainApp() {}

    virtual bool OnInit() {
        // Set locale
        //setlocale(LC_ALL, "C");
        //wxLocale(wxLANGUAGE_SPANISH);
        // Add the common image handlers
        wxImage::AddHandler( new wxPNGHandler );
        wxImage::AddHandler( new wxJPEGHandler );

        MainDialog mainDialog(NULL);
        mainDialog.ShowModal();
        return false;
    }
};

DECLARE_APP(MainApp)
IMPLEMENT_APP(MainApp)
