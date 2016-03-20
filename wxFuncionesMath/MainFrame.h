#ifndef MAINFRAME_H
#define MAINFRAME_H
#include "wxcrafter.h"

class MainFrame : public MainFrameBaseClass
{
public:
    MainFrame(wxWindow* parent);
    virtual ~MainFrame();

    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
protected:
    virtual void OnMenuItemOtrasSelected(wxCommandEvent& event);
    virtual void OnMenuItemHip_Selected(wxCommandEvent& event);
    virtual void OnMenuItemHip(wxMenuEvent& event);
    virtual void OnMenuItemLog(wxCommandEvent& event);
    virtual void OnMenuItemExp_Selected(wxCommandEvent& event);
    virtual void OnMenuItemTrig_Selected(wxCommandEvent& event);
};
#endif // MAINFRAME_H
