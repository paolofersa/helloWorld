#include "Empleado.h"
#include <iostream>

using namespace std;

void insertionSort (int *arr, int tam){
    Empleado valorTemporal;
    for (int i=1; i < tam; i++){
        valorTemporal = arr[i];
        int j;
        //en caso el valor evaluado sea inferior al de la izquierda y aun haya valores que evaluar
        for (j=i-1; j>=0 && arr[j].getApellido() > valorTemporal.getApellido(); j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = valorTemporal;
    }
}

int main()
{
    int tam = 3;
    Empleado *empleados = new Empleado[tam];
    empleados[0].defNombre("daniel");
    empleados[0].defApellido("dario");
    empleados[0].defSalario(1000);
    empleados[1].defNombre("belen");
    empleados[1].defApellido("begazo");
    empleados[1].defSalario(2000);
    empleados[2].defNombre("carlos");
    empleados[2].defApellido("carpio");
    empleados[2].defSalario(3000);
    //insertionSort(empleados,tam);
    for(int i=0;i<tam;i++){
        cout << empleados[i].getNombre() <<"\t"<< empleados[i].getApellido() <<"\t"<< empleados[i].getSalario() << endl;
    }
    return 0;
}
