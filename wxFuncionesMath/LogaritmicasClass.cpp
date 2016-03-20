#include <math.h>
#include "LogaritmicasClass.h"

LogaritmicasClass::LogaritmicasClass(wxWindow* parent)
    : LogaritmicasBaseClass(parent)
{
	SetBestFittingSize();
}

LogaritmicasClass::~LogaritmicasClass()
{
}

void LogaritmicasClass::OnClose(wxCommandEvent& event)
{
	Close();
}
void LogaritmicasClass::OnArgumentoChanged(wxCommandEvent& event)
{
	wxString m_label;
	double m_resul;
	wxString m_resul_t;
	double m_valor;
	wxString m_valor_t;
	m_valor_t = m_textCtrl_argu->GetValue();
	m_valor_t.ToDouble(&m_valor);
	
	// log
	m_label.Empty();
	m_resul_t.Empty();
	m_label << wxT("log(") << m_valor << wxT(")");
	m_staticText_log_lbl->SetLabelText(m_label);
	m_resul = log(m_valor);
	m_resul_t << m_resul;
	m_staticText_log_res->SetLabelText(m_resul_t);
	// log10
	m_label.Empty();
	m_resul_t.Empty();
	m_label << wxT("log10(") << m_valor << wxT(")");
	m_staticText_log10_lbl->SetLabelText(m_label);
	m_resul = log10(m_valor);
	m_resul_t << m_resul;
	m_staticText_log10_res->SetLabelText(m_resul_t);

}
