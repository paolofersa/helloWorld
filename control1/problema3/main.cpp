#include <iostream>

using namespace std;

int main()
{
    int numUsuario;
    cout << "Ingrese numero:" << endl;
    cin >> numUsuario;
    //evaluar numeros inferiores a numUsuario
    for(int i=1; i<numUsuario; i++){
        //identificar numeros perfectos
        int suma=0;
        for(int j=1; j<i; j++){
            //buscando divisores
            if(i%j == 0)
                suma = suma + j;
        }
        //imprimir si es perfecto
        if(suma == i)
            cout << i << " es un numero perfecto." << endl;
    }
    if(numUsuario<=6)
        cout << "No existen numeros perfectos inferiores a " << numUsuario << endl;
    return 0;
}
