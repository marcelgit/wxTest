#ifndef OTRASCLASS_H
#define OTRASCLASS_H
#include "wxcrafter.h"

class OtrasClass : public OtrasBaseClass
{
public:
    OtrasClass(wxWindow* parent);
    virtual ~OtrasClass();
protected:
    virtual void OnApplyClick(wxCommandEvent& event);
    virtual void OnCloseClick(wxCommandEvent& event);
};
#endif // OTRASCLASS_H
