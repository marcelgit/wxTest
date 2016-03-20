#ifndef HIPERBOLICASCLASS_H
#define HIPERBOLICASCLASS_H
#include "wxcrafter.h"

class HiperbolicasClass : public HiperbolicasBaseClass
{
public:
    HiperbolicasClass(wxWindow* parent);
    virtual ~HiperbolicasClass();
protected:
    virtual void OnArgumentoChanged(wxCommandEvent& event);
    virtual void OnClose(wxCommandEvent& event);
};
#endif // HIPERBOLICASCLASS_H
