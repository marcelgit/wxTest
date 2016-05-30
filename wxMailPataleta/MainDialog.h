#ifndef MAINDIALOG_H
#define MAINDIALOG_H
#include "wxcrafter.h"

class MainDialog : public MainDialogBaseClass
{
public:
    MainDialog(wxWindow* parent);
    virtual ~MainDialog();
protected:
    virtual void OnImporte1Banco1Updated(wxCommandEvent& event);
    virtual void OnImporte1Banco2Updated(wxCommandEvent& event);
    virtual void OnImporte1Banco3Updated(wxCommandEvent& event);
    virtual void OnImporte2Banco1Updated(wxCommandEvent& event);
    virtual void OnImporte2Banco2Updated(wxCommandEvent& event);
    virtual void OnImporte2Banco3Updated(wxCommandEvent& event);
    virtual void OnCreditoCobradoUpdated(wxCommandEvent& event);
    virtual void OnCreditoConcedidoUpdated(wxCommandEvent& event);
    virtual void OnSaldoAnteriorUpdated(wxCommandEvent& event);
    virtual void OnButtonOKClicked(wxCommandEvent& event);
    void CreatePdf();
    void UpdateSaldoFinal();
    void UpdateTotalPagos();
};
#endif // MAINDIALOG_H
