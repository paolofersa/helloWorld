#ifndef ARREGLOEMPLEADOS_H
#define ARREGLOEMPLEADOS_H
#include <iostream>
#include "Empleado.h"

using namespace std;

class ArregloEmpleados
{
    public:
        ArregloEmpleados(int);
        ~ArregloEmpleados();
        ArregloEmpleados(ArregloEmpleados &o);
        void defEmpleados();
        void getEmpleados();
        void insertionSort();

    protected:

    private:
        int tam;
        Empleado *ptroEmpleado;
};

#endif // ARREGLOEMPLEADOS_H
