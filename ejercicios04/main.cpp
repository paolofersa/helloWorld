#include <iostream>

using namespace std;

int main()
{
    /**
    //POTENCIA DE DOS**********************************************
    int num,potencia;
    cout<<"Ingrese un numero"<<endl;
    cin>>num;
    potencia=1;
    while(potencia<num){
        potencia=potencia*2;
    }
    if (potencia==num)
        cout<<num<<" es potencia de 2"<<endl;
    else
        cout<<"NO es potencia de 2"<<endl;
    return 0;
    */
    /**
    //NUMERO PRIMO (for)*******************************************
    int num,contador;
    contador=0;
    cout<<"Ingrese numero"<<endl;
    cin>>num;
    for (int divisor=2;(contador<=1) && (divisor<=num);++divisor){
        if(num % divisor ==0)
            contador++;
    }
    if ((contador==2)||(num==1))
        cout<<"No es primo"<<endl;
    else
        cout<<"Es PRIMO"<<endl;
    return 0;
    */
    /**
    //NUMERO PRIMO (while)*******************************************
    int num,cont,div;
    cont=0;
    div=2;
    cout<<"Ingrese numero"<<endl;
    cin>>num;
    while ((cont<=1) && (div<=num)){
        if(num % div ==0)
            cont++;
        div++;
    }
    if ((cont==2)||(num==1))
        cout<<"No es primo"<<endl;
    else
        cout<<"Es PRIMO"<<endl;
    return 0;
    */

    /**
    //NUM PRIMO <100 (for)**************************************
    int cont;
    for(int num=1;num<=100;++num){
        cont=0;
        for(int div=1;(div<=num)&&(cont<=2);++div){
            if(num%div==0)
                cont++;
        }
        if (cont==2)
            cout<<num<<" es primo"<<endl;
    }
    return 0;
    */
    /**
    //NUM PRIMO <100 (while)************************************
    int cont,num,div;
    num=1;
    while(num<=100){
        cont=0;
        div=1;
        while((div<=num)&&(cont<=2)){
            if(num%div==0)
                cont++;
        div++;
        }
        if (cont==2)
            cout<<num<<" es primo"<<endl;
        num++;
    }
    return 0;
    */

    /**
    //NUM PERFECTO (for)****************************************
    int num;
    int sum=0;
    cout<<"Ingrese numero"<<endl;
    cin>>num;
    for(int div=1;div<num;++div){
        if(num%div==0)
            sum=sum+div;
    }
    if(sum==num)
        cout<<num<<" es perfecto"<<endl;
    else
        cout<<"NO es un numero perfecto"<<endl;
    return 0;
    */
    /**
    //NUM PERFECTO (while)****************************************
    int num;
    int sum=0;
    int div=1;
    cout<<"Ingrese numero"<<endl;
    cin>>num;
    while(div<num){
        if(num%div==0)
            sum=sum+div;
    div++;
    }
    if(sum==num)
        cout<<num<<" es perfecto"<<endl;
    else
        cout<<"NO es un numero perfecto"<<endl;
    return 0;
    */
}
