#include <iostream>
#include "Vector.h"
#include "Punto.h"
#include <cmath>

using namespace std;

Vector::Vector()
{

}
void Vector::imprimir()
{
    inicio.imprimir();
    cout << " -> ";
    fin.imprimir();
    cout <<endl;
}
double Vector::modulo()
{
    return sqrt((fin.x - inicio.y)*(fin.x - inicio.y)+(fin.y - inicio.y)*(fin.y - inicio.y));
}
void Vector::modificarPuntoInicial(double nx, double ny)
{
    inicio.modificar(nx,ny);
}
void Vector::modificarPuntoFinal(double nx, double ny)
{
    fin.modificar(nx,ny);
}
