#ifndef MIEMBROSINDICATO_H
#define MIEMBROSINDICATO_H
#include "Persona.h"
#include "Trabajador.h"
#include <iostream>

using namespace std;


class MiembroSindicato:public Trabajador
{
    public:
        MiembroSindicato(string,string,string,string,string,double,string,string);
        virtual ~MiembroSindicato();
        string getFuncionSindicato();
        string getCodigoSindicato();

    protected:
        string funcionSindicato;
        string codigoSindicato;

    private:

};

#endif // MIEMBROSINDICATO_H
