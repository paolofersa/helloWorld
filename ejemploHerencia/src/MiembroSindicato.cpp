#include "MiembroSindicato.h"
#include "Persona.h"
#include "Trabajador.h"
#include <iostream>

using namespace std;

MiembroSindicato::MiembroSindicato(string _dni, string _nombre, string _sexo,string _codigoSeguro,string _puestoLaboral,double _sueldo,string _codigoSindicato, string _funcionSindicato):
    Trabajador(_dni,_nombre,_sexo,_codigoSeguro,_puestoLaboral,_sueldo),codigoSindicato(_codigoSindicato),funcionSindicato(_funcionSindicato)
{
    //ctor
}

MiembroSindicato::~MiembroSindicato()
{
    //dtor
}
string MiembroSindicato::getCodigoSindicato()
{
    return codigoSindicato;
}
string MiembroSindicato::getFuncionSindicato()
{
    return funcionSindicato;
}
