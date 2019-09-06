#include <iostream>

using namespace std;

void descomponerNum (int num){
    int a=num/10000;
    int b=(num-a*10000)/1000;
    int c=(num-a*10000-b*1000)/100;
    int d=(num-a*10000-b*1000-c*100)/10;
    int e=num-a*10000-b*1000-c*100-d*10;
    cout<<a<<'\t'<<b<<'\t'<<c<<'\t'<<d<<'\t'<<e;
}
int cantidadDigitos (int num){
    int cont=0;
    while(num!=0){
        num=num/10;
        cont++;
    }
    return cont;
}
bool esPalindromo (int num){
    int a=num/10000;
    int b=(num-a*10000)/1000;
    int c=(num-a*10000-b*1000)/100;
    int d=(num-a*10000-b*1000-c*100)/10;
    int e=num-a*10000-b*1000-c*100-d*10;
    if (a==e && b==d)
        return true;
    else
        return false;
}
int calcularFib (int num){
    int n1,n2,cont;
    n1=0;
    n2=1;
    while ()
    return resultado;
}
bool esNumero (char c){
    int num=static_cast<int>(c);
    if (num>=48 && num<=57)
        return true;
    else
        return false;
}
bool esLetra (char l){
    int c=static_cast<int>(l);
    if ((c>=65 && c<=90)||(c>=97 && c<=122))
        return true;
    else
        return false;
}
char convertirMay (int c){
    c = c + 32;
    char a=static_cast<char>(c);
    return a;
}
char convertirMin (int c){
    c = c - 32;
    char a=static_cast<char>(c);
    return a;
}

int main()
{
    /*//E1
    int num;
    cout<<"Ingrese un numero de 5 digitos"<<endl;
    cin>>num;
    descomponerNum(num);
    return 0;
    */

    /*//E2
    int n,c;
    cout<<"Ingrese un numero"<<endl;
    cin>>n;
    c=cantidadDigitos(n);
    cout<<"el numero ingresado tiene "<<c<<" digitos"<<endl;
    return 0;
    */

    /*//E3
    int n;
    cout<<"Ingrese un numero de 5 digitos"<<endl;
    cin>>n;
    if (esPalindromo(n))
        cout<<"Palindrome"<<endl;
    else
        cout<<"NO ES palindrome"<<endl;
    return 0;
    */

    //E4
    int n;
    cout<<"Ingrese el numero"<<endl;
    cin>>n;
    cout<<calcularFib(n)<<endl;
    return 0;

    /*//E5
    char c;
    cout<<"Ingrese un caracter"<<endl;
    cin>>c;
    if (esNumero(c))
        cout<<"NUMERO"<<endl;
    else
        cout<<"NO LO ES"<<endl;
    return 0;
    */

    /*//E6
    char l;
    cout<<"Ingrese un caracter"<<endl;
    cin>>l;
    if (esLetra(l)){
        cout<<"ES LETRA"<<endl;
        int conv=static_cast<int>(l);
        if (conv>=65 && conv<=90)
            cout<<convertirMay(conv)<<endl;
        else
            cout<<convertirMin(conv)<<endl;
    }
    else
        cout<<"NO es una letra"<<endl;
    return 0;
    */
}
