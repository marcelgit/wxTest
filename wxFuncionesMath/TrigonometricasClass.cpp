#include <math.h>
#include <wx/msgdlg.h>
#include "TrigonometricasClass.h"

TrigonometricasClass::TrigonometricasClass(wxWindow* parent)
    : TrigonometricasBaseClass(parent)
{
	SetBestFittingSize();
}

TrigonometricasClass::~TrigonometricasClass()
{
}

void TrigonometricasClass::OnAnguloChanged(wxSpinEvent& event)
{
	wxString m_label;
	double m_resul;
	wxString m_resul_t;
	double m_valor = m_spinCtrl_Angulo->GetValue();
	// sin
	m_label.Empty();
	m_resul_t.Empty();
	m_label << wxT("sin(") << m_valor << wxT(")");
	m_staticText_sin_lbl->SetLabelText(m_label);
	m_resul = sin(m_valor);
	m_resul_t << m_resul;
	m_staticText_sin_value->SetLabelText(m_resul_t);
	// cos
	m_label.Empty();
	m_resul_t.Empty();
	m_label << wxT("cos(") << m_valor << wxT(")");
	m_staticText_cos_lbl->SetLabelText(m_label);
	m_resul = cos(m_valor);
	m_resul_t << m_resul;
	m_staticText_cos_value->SetLabelText(m_resul_t);
		// tan
	m_label.Empty();
	m_resul_t.Empty();
	m_label << wxT("tan(") << m_valor << wxT(")");
	m_staticText_tan_lbl->SetLabelText(m_label);
	m_resul = tan(m_valor);
	m_resul_t << m_resul;
	m_staticText_tan_value->SetLabelText(m_resul_t);
	// asin
	m_label.Empty();
	m_resul_t.Empty();
	m_label << wxT("asin(") << m_valor << wxT(")");
	m_staticText_asin_lbl->SetLabelText(m_label);
	if ((-1 < m_valor) && (m_valor < 1))
	{
		m_resul = asin(m_valor);
		m_resul_t << m_resul;
	}else{
		m_resul_t << wxT("El argumento debería estar entre -1 y 1.");
	}
	m_staticText_asin_value->SetLabelText(m_resul_t);
	// acos
	m_label.Empty();
	m_resul_t.Empty();
	m_label << wxT("acos(") << m_valor << wxT(")");
	m_staticText_acos_lbl->SetLabelText(m_label);
	if ((-1 < m_valor) && (m_valor < 1))
	{
		m_resul = acos(m_valor);
		m_resul_t << m_resul;
	}else{
		m_resul_t << wxT("El argumento debería estar entre -0.5 y 0.5.");
	}
	m_staticText_acos_value->SetLabelText(m_resul_t);
	// atan
	m_label.Empty();
	m_resul_t.Empty();
	m_label << wxT("atan(") << m_valor << wxT(")");
	m_staticText_atan_lbl->SetLabelText(m_label);
	m_resul = atan(m_valor);
	m_resul_t << m_resul;
	m_staticText_atan_value->SetLabelText(m_resul_t);
	// atan2
	m_label.Empty();
	m_resul_t.Empty();
	m_label << wxT("atan2(") << m_valor << wxT(", 2)");
	m_staticText_atan2_lbl->SetLabelText(m_label);
	m_resul = atan2(m_valor, 2);
	m_resul_t << m_resul;
	m_staticText_atan2_value->SetLabelText(m_resul_t);

	//SetBestFittingSize();
	//	wxMessageBox(wxT("Cambio de ángulo"),wxT("Cálculo"),wxICON_INFORMATION);
}
void TrigonometricasClass::OnCloseTrigon(wxCommandEvent& event)
{
	Close();
}
