#include "Empleado.h"
#include <iostream>

using namespace std;

Empleado::Empleado(string n, string a, double s)
{
    nombre = n;
    apellido = a;
    if (s<0)
        s=0;
    salario = s;
}

string Empleado::printNombre()
{
    return nombre;
}

string Empleado::printApellido()
{
    return apellido;
}

double Empleado::printSalario()
{
    return salario;
}

void Empleado::descontarSalario()
{
    salario = salario*0.9;
}
