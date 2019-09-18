#include <iostream>

using namespace std;

int main()
{
    int limite = 1000000;
    long long suma =0;
    for (int i=1; i < limite; i++){
        if((i % 3 == 0) && (i % 5 == 0))
            suma = suma + i;
    }
    cout << "La suma de de los multiplos de 3 y 5 menores a " << limite << " es " << suma << endl;
    return 0;
}
