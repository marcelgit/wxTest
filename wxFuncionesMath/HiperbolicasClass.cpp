#include "math.h"
#include "HiperbolicasClass.h"

HiperbolicasClass::HiperbolicasClass(wxWindow* parent)
    : HiperbolicasBaseClass(parent)
{
	SetBestFittingSize();
}

HiperbolicasClass::~HiperbolicasClass()
{
}

void HiperbolicasClass::OnClose(wxCommandEvent& event)
{
	Close();
}

void HiperbolicasClass::OnArgumentoChanged(wxCommandEvent& event)
{
	wxString m_label;
	double m_resul;
	wxString m_resul_t;
	double m_valor;
	wxString m_valor_t;
	m_valor_t = m_textCtrl_argu->GetValue();
	m_valor_t.ToDouble(&m_valor);
	
	// cosh
	m_label.Empty();
	m_resul_t.Empty();
	m_label << wxT("cosh(") << m_valor << wxT(")");
	m_staticText_cosh_lbl->SetLabelText(m_label);
	m_resul = cosh(m_valor);
	m_resul_t << m_resul;
	m_staticText_cosh_res->SetLabelText(m_resul_t);
	// sinh
	m_label.Empty();
	m_resul_t.Empty();
	m_label << wxT("sinh(") << m_valor << wxT(")");
	m_staticText_sinh_lbl->SetLabelText(m_label);
	m_resul = sinh(m_valor);
	m_resul_t << m_resul;
	m_staticText_sinh_res->SetLabelText(m_resul_t);
	// tanh
	m_label.Empty();
	m_resul_t.Empty();
	m_label << wxT("tanh(") << m_valor << wxT(")");
	m_staticText_tanh_lbl->SetLabelText(m_label);
	m_resul = tanh(m_valor);
	m_resul_t << m_resul;
	m_staticText_tanh_res->SetLabelText(m_resul_t);

}
