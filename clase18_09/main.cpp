#include <iostream>
#include "Punto.h"
#include "Vector.h"

using namespace std;

int main()
{
    Vector v;
    v.modificarPuntoFinal(3,4);
    //v.fin.modificar(3,4);
    v.imprimir();
    cout << "El modulo es: "<<v.modulo();
    return 0;
}
