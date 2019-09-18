#include <iostream>

using namespace std;

int factorialIterativo(int num){
    int factorial = 1;
    for (int i=1; i<=num; i++){
        factorial = factorial*i;
    }
    return factorial;
}

int factorialRecursivo(int num){
    int factorial = 1;
    if (num==0)
        return 1;
    else
        return num * factorialRecursivo(num-1);
}

int main()
{
    int numUsuario;
    cout << "Ingrese numero" << endl;
    cin >> numUsuario;
    //cout << "El factorial del numero es: " << factorialIterativo(numUsuario) << endl;
    cout << "El factorial del numero es: " << factorialRecursivo(numUsuario) << endl;
    return 0;
}
