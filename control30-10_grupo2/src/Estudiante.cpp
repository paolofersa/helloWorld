#include "Estudiante.h"
#include <iostream>

using namespace std;

Estudiante::Estudiante(string _nombre, string _apellido, string _codigo)
{
    nombre = _nombre;
    apellido = _apellido;
    codigo = _codigo;
}

Estudiante::~Estudiante()
{
    //dtor
}
string Estudiante::getNombre(){
    return nombre;
}
string Estudiante::getApellido(){
    return apellido;
}
string Estudiante::getCodigo(){
    return codigo;
}
