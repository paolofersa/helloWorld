#include <iostream>

using namespace std;

int main()
{
    /*//E1
    int num,a,b,c,d,e;
    cout<<"Ingrese un numero de 5 digitos"<<endl;
    cin>>num;
    a=num/10000;
    b=num/1000;
    b=b%10;
    c=num%1000;
    c=c/100;
    d=num%100;
    d=d/10;
    e=num%10;
    cout<<a<<'\t'<<b<<'\t'<<c<<'\t'<<d<<'\t'<<e;
    return 0;
    */
    /*//E2
    int n;
    int c=0;
    cout<<"Ingrese un numero"<<endl;
    cin>>n;
    while(n!=0){
        n=n/10;
        c++;
    }
    cout<<"el numero ingresado tiene "<<c<<"digitos"<<endl;
    return 0;
    */
    /*//E3
    int n,a,b,c,d,e;
    cout<<"Ingrese un numero de 5 digitos"<<endl;
    cin>>n;
    a=n/10000;
    b=n/1000;
    b=b%10;
    c=n%1000;
    c=c/100;
    d=n%100;
    d=d/10;
    e=n%10;
    if (a==e && b==d)
        cout<<"Palindrome"<<endl;
    else
        cout<<"NO ES"<<endl;
    return 0;
    */
    //E4
    int n;
    cout<<"Ingrese el numero"<<endl;
    cin>>n;
    int f_0=1;
    int f_1=1;
    int rpta;
    int c=0;
    if (n==0 || n==1)
        cout<<"1";
    while (c++<n){
        f_1=f_1 + f_0;
        rpta=f_1 + f_0;
    }
    cout<<rpta;
    return 0;

    /*//E5
    char c;
    cout<<"Ingrese un caracter"<<endl;
    cin>>c;
    int num=static_cast<int>(c);
    if (num>=48 && num<=57)
        cout<<"NUMERO"<<endl;
    else
        cout<<"NO LO ES"<<endl;
    return 0;
    */
    /*//E6
    char l;
    cout<<"Ingrese un caracter"<<endl;
    cin>>l;
    int conv=static_cast<int>(l);
    if (conv>=65 && conv<=90){
        cout<<"El caracter ingresado es una letra"<<endl;
        conv = conv + 32;
        char a=static_cast<char>(conv);
        cout<<a<<endl;
    }
    else{
        if (conv>=97 && conv<=122){
            cout<<"El caracter ingresado es una letra"<<endl;
            conv = conv - 32;
            char b=static_cast<char>(conv);
            cout<<b<<endl;
        }
        else
            cout<<"NO es"<<endl;
    }
    return 0;
    */

}
