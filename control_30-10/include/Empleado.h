#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>

using namespace std;


class Empleado
{
    public:
        Empleado();
        ~Empleado();
        //definir variables
        void defNombre(string);
        void defApellido(string);
        void defSalario(double);
        //obtener variables
        string getNombre();
        string getApellido();
        double getSalario();

        void descontarSalario();

    private:
        string nombre;
        string apellido;
        double salario;
};

#endif // EMPLEADO_H
