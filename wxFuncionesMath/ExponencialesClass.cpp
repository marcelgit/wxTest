#include <math.h>
#include <wx/msgdlg.h>
#include "ExponencialesClass.h"

ExponencialesClass::ExponencialesClass(wxWindow* parent)
    : ExponencialesBaseClass(parent)
{
	SetBestFittingSize();
}

ExponencialesClass::~ExponencialesClass()
{
}

void ExponencialesClass::OnApplyExp(wxCommandEvent& event)
{
	wxString valor_x_t;
	wxString valor_y_t;
	double valor_x = 0;
	int l_valor_y = 0;
	int *f_valor_y = &l_valor_y;
	double res = 0;
	wxString txt;
	wxString res_t;
	
	valor_x_t = m_textCtrl_argu_x->GetValue();
	valor_x_t.ToDouble(&valor_x);
	valor_y_t = m_textCtrl_argu_y->GetValue();
	l_valor_y = wxAtoi(valor_y_t);
	
	// exp
	txt.Clear();
	res_t.Clear();
	txt << wxT("exp(") << valor_x_t << wxT(")");
	m_staticText_exp_lbl->SetLabel(txt);
	res = exp( valor_x );
	res_t << res;
	m_staticText_exp_res->SetLabel(res_t);
	
	// frexp
	txt.Clear();
	res_t.Clear();
	txt << wxT("frexp(") << valor_x_t << wxT(",") << valor_y_t << wxT(")");
	m_staticText_frexp_lbl->SetLabel(txt);
	res = frexp( valor_x, f_valor_y );
	res_t << res;
	m_staticText_frexp_res->SetLabel(res_t);
	
	// ldexp
	txt.Clear();
	res_t.Clear();
	txt << wxT("ldexp(") << valor_x_t << wxT(",") << valor_y_t << wxT(")");
	m_staticText_ldexp_lbl->SetLabel(txt);
	res = ldexp( valor_x, l_valor_y );
	res_t << res;
	m_staticText_ldexp_res->SetLabel(res_t);
	
	//wxMessageBox(valor_x_t, wxT("Funciones exponenciales"));
	
}
void ExponencialesClass::OnCloseExp(wxCommandEvent& event)
{
	Close();
}
