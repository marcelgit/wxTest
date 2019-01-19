// Espacio de nombres con variables globales para usar
// en los formularios que usen wxValidator
#include <wx/string.h>
#include "wx/valnum.h"

namespace registro
{
    extern wxString fecha_registro;
    extern double saldo_anterior;
    extern double credito_concedido;
    extern double credito_cobrado;
    extern double saldo_final;
    extern wxString banco1;
    extern wxString banco2;
    extern wxString banco3;
    extern wxString fecha_banco1_vto1;
    extern wxString fecha_banco1_vto2;
    extern wxString fecha_banco2_vto1;
    extern wxString fecha_banco2_vto2;
    extern wxString fecha_banco3_vto1;
    extern wxString fecha_banco3_vto2;
    extern double imp_banco1_vto1;
    extern double imp_banco1_vto2;
    extern double imp_banco2_vto1;
    extern double imp_banco2_vto2;
    extern double imp_banco3_vto1;
    extern double imp_banco3_vto2;
    extern double imp_total_bancos;
    extern double total_cobros;
    extern wxString fecha_prevision1;
    extern wxString fecha_prevision2;
    extern double imp_prevision1;
    extern double imp_prevision2;
}
