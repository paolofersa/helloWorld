#include "Empleado.h"
#include <iostream>

using namespace std;

Empleado::Empleado(){

}
Empleado::~Empleado(){

}
void Empleado::defNombre(string _nombre){
    nombre = _nombre;
}
void Empleado::defApellido(string _apellido){
    apellido = _apellido;
}
void Empleado::defSalario(double _salario){
    salario = _salario;
}

string Empleado::getNombre()
{
    return nombre;
}

string Empleado::getApellido()
{
    return apellido;
}

double Empleado::getSalario()
{
    return salario;
}

void Empleado::descontarSalario()
{
    salario = salario*0.9;
}
