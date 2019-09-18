#include <iostream>

using namespace std;

int main()
{
    long long limite = 600851475143;
    long long factorPrimo;
    //Ubicar factores
    for(long long factor = 1; factor<=limite; factor++){
        //Evaluar divisibilidad
        if(limite % factor == 0){
            //Ubicar primos
            int indicadorPrimo=0;
            for(long long divisor = 2; divisor<factor; divisor++){
                //Evaluar divisibilidad
                if((factor % divisor == 0)&&(indicadorPrimo == 0))
                    indicadorPrimo = 1;
            }
            //Identificar primo
            if (indicadorPrimo==0)
                factorPrimo = factor;
        }
    }
    cout << "El mayor factor primo es: " << factorPrimo << endl;
    return 0;
}
