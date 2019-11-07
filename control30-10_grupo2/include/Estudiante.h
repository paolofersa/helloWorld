#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>

using namespace std;

class Estudiante
{
    public:
        Estudiante();
        ~Estudiante();
        void defNombre(string);
        void defApellido(string);
        void defCodigo(string);
        string getNombre();
        string getApellido();
        string getCodigo();

    private:
        string nombre;
        string apellido;
        string codigo;
};

#endif // ESTUDIANTE_H
