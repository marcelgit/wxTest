#ifndef MAINDIALOG_H
#define MAINDIALOG_H
#include "wxcrafter.h"

class MyProcess;

class MainDialog : public MainDialogBaseClass
{
public:
    MainDialog(wxWindow* parent);
    virtual ~MainDialog();
protected:
    virtual void OnButtonCancelClicked(wxCommandEvent& event);
    virtual void OnInitDialog(wxInitDialogEvent& event);
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
    virtual void OnButtonSendClicked(wxCommandEvent& event);
    void ReadCurrentData();
    void SaveData();
    wxString CreatePdf();
    void SendPdf(wxString filePdf);
    void OpenPdf(wxString filePdf);
    void UpdateSaldoFinal();
    void UpdateTotalPagos();
    double ImporteDe(const wxString& txt);
    //bool TransferDataToWindow() wxOVERRIDE;
private:
    bool es_modificacion;
};
#endif // MAINDIALOG_H
