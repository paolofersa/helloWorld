#ifndef ARREGLOEMPLEADO_H
#define ARREGLOEMPLEADO_H
#include <iostream>

using namespace std;


class arregloEmpleado
{
    public:
        arregloEmpleado(int,string*);
        void ordenarArreglo();
        virtual ~arregloEmpleado();

        string *arr;
        int tam;

};

#endif // ARREGLOEMPLEADO_H
