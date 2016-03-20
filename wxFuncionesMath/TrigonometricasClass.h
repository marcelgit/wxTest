#ifndef TRIGONOMETRICASCLASS_H
#define TRIGONOMETRICASCLASS_H
#include "wxcrafter.h"

class TrigonometricasClass : public TrigonometricasBaseClass
{
public:
    TrigonometricasClass(wxWindow* parent);
    virtual ~TrigonometricasClass();
protected:
    virtual void OnCloseTrigon(wxCommandEvent& event);
    virtual void OnAnguloChanged(wxSpinEvent& event);
};
#endif // TRIGONOMETRICASCLASS_H
