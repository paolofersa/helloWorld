#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>

using namespace std;


class Empleado
{
    public:
        Empleado(string,string,double);
        string printNombre();
        string printApellido();
        double printSalario();
        void descontarSalario();

    private:
        string nombre;
        string apellido;
        double salario;
};

#endif // EMPLEADO_H
