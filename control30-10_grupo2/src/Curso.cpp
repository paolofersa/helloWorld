#include "Curso.h"
#include "Estudiante.h"
#include <iostream>

using namespace std;

Curso::Curso(int cantidadEstudiantes)
{
    ptroEstudiante = new Estudiante[cantidadEstudiantes];
    this -> cantidadEstudiantes = cantidadEstudiantes;
}

Curso::~Curso()
{
    delete [] ptroEstudiante;
}

Curso::Curso(Curso(&o))
{
    ptroEstudiante = new Estudiante[o.cantidadEstudiantes];
    cantidadEstudiantes = o.cantidadEstudiantes;
    for (int i=0; i < cantidadEstudiantes; i++){
        ptroEstudiante[i] = o.ptroEstudiante[i];
    }
}

void Curso::defEstudiantes()
{
    string nom,ape,cod;
    for (int i=0; i<cantidadEstudiantes; i++){
        cout << "Datos de estudiante " << i+1 << ":" << endl;
        cout << "Nombre:" <<endl;
        cin >>nom;
        ptroEstudiante[i].defNombre(nom);
        cout << "Apellido:" <<endl;
        cin >>ape;
        ptroEstudiante[i].defApellido(ape);
        cout << "Codigo:" <<endl;
        cin >>cod;
        ptroEstudiante[i].defCodigo(cod);
    }
}

void Curso::getEstudiantes()
{
    cout << "NOMBRE\t" << "APELLIDO\t" << "CODIGO" << endl;
    for (int i=0; i<cantidadEstudiantes; i++){
        cout << ptroEstudiante[i].getNombre() <<"\t"<< ptroEstudiante[i].getApellido() <<"\t\t"<< ptroEstudiante[i].getCodigo() << endl;
    }
}

void Curso::agregarEstudiante()
{
    cantidadEstudiantes++;
    Estudiante *ptroNuevo = new Estudiante[cantidadEstudiantes];
    for (int i=0; i < cantidadEstudiantes-1; i++){
        ptroNuevo[i] = ptroEstudiante[i];
    }
    cout << "Ingresar nuevo estudiante:" << endl;
    string nom,ape,cod;
    cout << "Nombre:" <<endl;
    cin >>nom;
    ptroNuevo[cantidadEstudiantes-1].defNombre(nom);
    cout << "Apellido:" <<endl;
    cin >>ape;
    ptroNuevo[cantidadEstudiantes-1].defApellido(ape);
    cout << "Codigo:" <<endl;
    cin >>cod;
    ptroNuevo[cantidadEstudiantes-1].defCodigo(cod);
    delete [] ptroEstudiante;
    ptroEstudiante = ptroNuevo;
}
