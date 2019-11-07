#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;


class Persona
{
    public:
        Persona(string,string,string);
        virtual ~Persona();
        string getNombre();
        string getDni();
        string getSexo();


    protected:
        string nombre;
        string dni;
        string sexo;

    private:

};

#endif // PERSONA_H
