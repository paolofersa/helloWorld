#include "ArregloEmpleados.h"
#include <iostream>
#include "Empleado.h"

using namespace std;

ArregloEmpleados::ArregloEmpleados(int tam){
    ptroEmpleado = new Empleado[tam];
    this -> tam = tam;
}

ArregloEmpleados::ArregloEmpleados(ArregloEmpleados &o){
    ptroEmpleado = new Empleado[o.tam];
    tam = o.tam;
    for (int i=0; i < tam; i++){
        ptroEmpleado[i] = o.ptroEmpleado[i];
    }
}

ArregloEmpleados::~ArregloEmpleados(){
    delete[] ptroEmpleado;
}

void ArregloEmpleados::defEmpleados(){
    string nom,ape;
    double sal;
    for (int i=0; i<tam; i++){
        cout << "Datos de empleado " << i+1 << ":" << endl;
        cout << "Nombre:" <<endl;
        cin >>nom;
        ptroEmpleado[i].defNombre(nom);
        cout << "Apellido:" <<endl;
        cin >>ape;
        ptroEmpleado[i].defApellido(ape);
        cout << "Salario:" <<endl;
        cin >>sal;
        ptroEmpleado[i].defSalario(sal);
    }
}

void ArregloEmpleados::getEmpleados(){
    cout << "NOMBRE\t" << "APELLIDO\t" << "SALARIO" << endl;
    for (int i=0; i<tam; i++){
        cout << ptroEmpleado[i].getNombre() <<"\t"<< ptroEmpleado[i].getApellido() <<"\t\t"<< ptroEmpleado[i].getSalario() << endl;
    }
}

void ArregloEmpleados::insertionSort(ArregloEmpleados *ptro, int tam){
    Empleado valorTemporal;
    int j;
    for (int i=1; i < tam; i++){
        valorTemporal = *(ptro + i);
        //en caso el valor evaluado sea inferior al de la izquierda y aun haya valores que evaluar
        for (j=i-1; j>=0 && *(ptro+j)->getApellido()[0] >valorTemporal.getApellido()[0]; j--){
            *(ptro+j+1) = *(ptro+j);
        }
        *(ptro+j+1) = valorTemporal;
    }
}
