#ifndef VECTOR_H
#define VECTOR_H
#include "Punto.h"

class Vector
{
    public:
        Punto inicio;
        Punto fin;
        Vector();
        void imprimir();
        void modificarPuntoInicial(double nx, double ny);
        void modificarPuntoFinal(double nx, double ny);
        double modulo();

};

#endif // VECTOR_H
