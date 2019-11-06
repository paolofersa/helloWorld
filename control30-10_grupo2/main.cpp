#include <iostream>
#include "Estudiante.h"
#include "Curso.h"

using namespace std;

int main()
{
    Estudiante E1("juan","perez","001");
    Estudiante E2("jose","gomez","002");

    cout << E1.getNombre() <<"\t"<< E1.getApellido() <<"\t"<< E1.getCodigo() << endl;
    cout << E2.getNombre() <<"\t"<< E2.getApellido() <<"\t"<< E2.getCodigo() << endl;

    return 0;
}
