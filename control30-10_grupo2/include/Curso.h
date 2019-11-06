#ifndef CURSO_H
#define CURSO_H
#include "Estudiante.h"
#include <iostream>

using namespace std;

class Curso
{
    public:
        Curso();
        ~Curso();

    private:
        string nombre;
        string codigo;
        int cantidadAlumnos;

};

#endif // CURSO_H
