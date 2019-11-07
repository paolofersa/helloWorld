#include "Trabajador.h"
#include "Persona.h"
#include <iostream>

using namespace std;

Trabajador::Trabajador(string _dni, string _nombre, string _sexo,string _codigoSeguro,string _puestoLaboral,double _sueldo):
    Persona(_dni,_nombre,_sexo),codigoSeguro(_codigoSeguro),puestoLaboral(_puestoLaboral),sueldo(_sueldo)
{
    //ctor
}

Trabajador::~Trabajador()
{
    //dtor
}
string Trabajador::getCodigoSeguro()
{
    return codigoSeguro;
}
string Trabajador::getPuestoLaboral()
{
    return puestoLaboral;
}
double Trabajador::getSueldo()
{
    return sueldo;
}
