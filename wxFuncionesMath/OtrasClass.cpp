#include "math.h"
#include "OtrasClass.h"

OtrasClass::OtrasClass(wxWindow* parent)
    : OtrasBaseClass(parent)
{
	SetBestFittingSize();
}

OtrasClass::~OtrasClass()
{
}

void OtrasClass::OnApplyClick(wxCommandEvent& event)
{
	wxString valor_x_t;
	wxString valor_y_t;
	double valor_x = 0;
	double valor_y = 0;
	double *valor_y_p = &valor_y;
	double res = 0;
	int valor_x_i = 0;
	int valor_x_l = 0;
	wxString txt;
	wxString res_t;
	
	valor_x_t = m_textCtrlArgu_x->GetValue();
	valor_x_t.ToDouble(&valor_x);
	valor_x_i = wxAtoi(valor_x_t);
	valor_x_l = wxAtol(valor_x_t);
	valor_y_t = m_textCtrlArgu_y->GetValue();
	valor_y_t.ToDouble(&valor_y);
	
	// sqrt
	txt.Clear();
	res_t.Clear();
	txt << wxT("sqrt(") << valor_x_t << wxT(")");
	m_staticText_sqrt_lbl->SetLabel(txt);
	res = sqrt( valor_x );
	res_t << res;
	m_staticText_sqrt_res->SetLabel(res_t);
	
	// ceil
	txt.Clear();
	res_t.Clear();
	txt << wxT("ceil(") << valor_x_t << wxT(")");
	m_staticText_ceil_lbl->SetLabel(txt);
	res = ceil( valor_x );
	res_t << res;
	m_staticText_ceil_res->SetLabel(res_t);
	
	// abs
	txt.Clear();
	res_t.Clear();
	txt << wxT("abs(") << valor_x_t << wxT(")");
	m_staticText_abs_lbl->SetLabel(txt);
	res = abs( valor_x_i );
	res_t << res;
	m_staticText_abs_res->SetLabel(res_t);
	
	// labs
	txt.Clear();
	res_t.Clear();
	txt << wxT("labs(") << valor_x_t << wxT(")");
	m_staticText_labs_lbl->SetLabel(txt);
	res = labs( valor_x_l );
	res_t << res;
	m_staticText_labs_res->SetLabel(res_t);
	
	// floor
	txt.Clear();
	res_t.Clear();
	txt << wxT("floor(") << valor_x_t << wxT(")");
	m_staticText_floor_lbl->SetLabel(txt);
	res = floor( valor_x );
	res_t << res;
	m_staticText_floor_res->SetLabel(res_t);
	
	// modf
	txt.Clear();
	res_t.Clear();
	txt << wxT("modf(") << valor_x_t << wxT(",") << valor_y_t << wxT(")");
	m_staticText_modf_lbl->SetLabel(txt);
	res = modf( valor_x, valor_y_p );
	res_t << res;
	m_staticText_modf_res->SetLabel(res_t);
	
	// pow
	txt.Clear();
	res_t.Clear();
	txt << wxT("pow(") << valor_x_t << wxT(",") << valor_y_t << wxT(")");
	m_staticText_pow_lbl->SetLabel(txt);
	res = pow( valor_x, valor_y );
	res_t << res;
	m_staticText_pow_res->SetLabel(res_t);
	
	// fmod
	txt.Clear();
	res_t.Clear();
	txt << wxT("fmod(") << valor_x_t << wxT(",") << valor_y_t << wxT(")");
	m_staticText_fmod_lbl->SetLabel(txt);
	res = fmod( valor_x, valor_y );
	res_t << res;
	m_staticText_fmod_res->SetLabel(res_t);
}
void OtrasClass::OnCloseClick(wxCommandEvent& event)
{
	Close();
}
