#include "Empleado.h"
#include <iostream>

using namespace std;

int main()
{
    Empleado E1("juan","perez",1500);
    Empleado E2("rosa","galdos",2000);
    E1.descontarSalario();
    E2.descontarSalario();
    cout << "El nuevo salario de " << E1.printNombre() << " " << E1.printApellido() << " es: " << E1.printSalario() << endl;
    cout << "El nuevo salario de " << E2.printNombre() << " " << E2.printApellido() << " es: " << E2.printSalario() << endl;


    return 0;
}
