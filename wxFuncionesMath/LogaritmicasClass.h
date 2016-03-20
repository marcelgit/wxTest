#ifndef LOGARITMICASCLASS_H
#define LOGARITMICASCLASS_H
#include "wxcrafter.h"

class LogaritmicasClass : public LogaritmicasBaseClass
{
public:
    LogaritmicasClass(wxWindow* parent);
    virtual ~LogaritmicasClass();
protected:
    virtual void OnArgumentoChanged(wxCommandEvent& event);
    virtual void OnClose(wxCommandEvent& event);
};
#endif // LOGARITMICASCLASS_H
