#include <iostream>
#include "Estudiante.h"
#include "Curso.h"

using namespace std;

int main()
{
    int tamanio = 2;
    Curso c1(tamanio);
    c1.defEstudiantes();
    c1.getEstudiantes();
    cout << endl;
    c1.agregarEstudiante();
    c1.getEstudiantes();

    cout << endl;
    return 0;
}
