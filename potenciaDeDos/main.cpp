#include <iostream>

using namespace std;

int main()
{
    /**
    *NUMERO PRIMO

    int num,a;
    a=0;
    cout<<"Ingrese numero"<<endl;
    cin>>num;
    for (int i=2;(a<=1) && (i<=num);++i){
        if(num % i ==0)
            a++;
    }
    if ((a==2)||(num==1))
        cout<<"No es primo"<<endl;
    else
        cout<<"Es PRIMO"<<endl;
    return 0;
    */
    /**
    *NUMERO PRIMO
    int num,a,i;
    a=0;
    i=2;
    cout<<"Ingrese numero"<<endl;
    cin>>num;
    while ((a<=1) && (i<=num)){
        if(num % i ==0)
            a++;
        i++;
    }
    if ((a==2)||(num==1))
        cout<<"No es primo"<<endl;
    else
        cout<<"Es PRIMO"<<endl;
    */

    /**
    *NUM PRIMO <100

    int num,a;
    a=0;
    num = 100;
    for (int i=1;(a<=1) && (i<=num);++i){
        if(num % i ==0){
            a++;
            cout<<i<<endl;
        }
    }
    if ((a==2)||(num==1))
        cout<<"No es primo"<<endl;
    else
        cout<<"Es PRIMO"<<endl;
    return 0;
    */
    /**
    NUM PERFECTO
    */
    int num,cont;
    cout<<"Ingrese numero"<<endl;
    cin>>num;
    for (int i=1;i<num;++i){
        if(num%i ==0)
            cont=cont+i;
    }
    if (cont==num)
        cout<<"Es PERFECTO"<<endl;
    else
        cout<<"NO es perfecto"<<endl;
    return 0;
}
