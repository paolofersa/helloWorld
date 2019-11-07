#include "Empleado.h"
#include "ArregloEmpleados.h"
#include <iostream>

using namespace std;

int main()
{
    int tamanio = 3;
    ArregloEmpleados a(tamanio);
    a.defEmpleados();
    a.getEmpleados();
    a.insertionSort(&a,tamanio);
    cout << endl;
    a.getEmpleados();

    return 0;
}
