#include <iostream>
#include "Punto.h"
using namespace std;

Punto::Punto()
{
    x = 0;
    y = 0;
}
Punto::Punto(double nx, double ny)
{
    x = nx;
    y = ny;
}
void Punto::modificar(double nx, double ny)
{
    x += nx;
    y += ny;
}
void Punto::imprimir()
{
    cout << "(" << x << ", " << y << ")";
}
