#ifndef EXPONENCIALESCLASS_H
#define EXPONENCIALESCLASS_H
#include "wxcrafter.h"

class ExponencialesClass : public ExponencialesBaseClass
{
public:
    ExponencialesClass(wxWindow* parent);
    virtual ~ExponencialesClass();
protected:
    virtual void OnApplyExp(wxCommandEvent& event);
    virtual void OnCloseExp(wxCommandEvent& event);
};
#endif // EXPONENCIALESCLASS_H
