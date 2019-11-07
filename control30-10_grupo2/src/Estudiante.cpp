#include "Estudiante.h"
#include <iostream>

using namespace std;

Estudiante::Estudiante()
{

}

Estudiante::~Estudiante()
{

}

void Estudiante::defNombre(string n)
{
    nombre = n;
}

void Estudiante::defApellido(string a)
{
    apellido = a;
}

void Estudiante::defCodigo(string c)
{
    codigo = c;
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
