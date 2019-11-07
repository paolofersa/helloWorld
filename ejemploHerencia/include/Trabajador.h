#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include "Persona.h"
#include <iostream>

using namespace std;


class Trabajador:public Persona
{
    public:
        Trabajador(string,string,string,string,string,double);
        virtual ~Trabajador();
        string getCodigoSeguro();
        string getPuestoLaboral();
        double getSueldo();

    protected:
        string codigoSeguro;
        string puestoLaboral;
        double sueldo;

    private:

};

#endif // TRABAJADOR_H
