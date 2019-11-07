#include "Persona.h"
#include "Trabajador.h"
#include "MiembroSindicato.h"
#include <iostream>

using namespace std;

int main()
{
    //crear instancias
    Persona p1("0123","PEDRO","MASCULINO");
    Trabajador t1("0456","IVAN","MASCULINO","QWER","ADMINISTRADOR",1050);
    MiembroSindicato m1("0789","MARIA","FEMENINO","ZXCV","ANALISTA",2050,"0001","TESORERA");

    //creacion de punteros
    Persona *ptroP = &t1;
    Trabajador *ptroT = &m1;
    MiembroSindicato *ptroM = &m1;

    //obtener valores mediante punteros
    cout << ptroP->getDni() << endl;
    cout << ptroT->getNombre() << endl;
    cout << ptroM->getSueldo() << endl;

    return 0;
}
