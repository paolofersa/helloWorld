#include "Persona.h"
#include <iostream>

using namespace std;

Persona::Persona(string _dni, string _nombre, string _sexo)
{
    dni = _dni;
    nombre = _nombre;
    sexo = _sexo;
}

Persona::~Persona()
{
    //dtor
}
string Persona::getDni()
{
    return dni;
}
string Persona::getNombre()
{
    return nombre;
}
string Persona::getSexo()
{
    return sexo;
}
