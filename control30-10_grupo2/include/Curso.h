#ifndef CURSO_H
#define CURSO_H
#include "Estudiante.h"

#include <iostream>

using namespace std;

class Curso
{
    public:
        Curso(int);
        ~Curso();
        Curso(Curso(&o));
        void defEstudiantes();
        void getEstudiantes();
        void agregarEstudiante();

    private:
        int cantidadEstudiantes;
        Estudiante *ptroEstudiante;

};

#endif // CURSO_H
