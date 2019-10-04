#include <iostream>

using namespace std;

void swap(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void imprimir(int *arr, int tam){
    while (tam--){
        cout << *arr << endl;
        arr++;
    }
    cout<<endl;
}

int sumarIterativo (int *arr, int tam){
    int sum = 0;
    while (tam--){
        sum += *arr;
        arr++;
    }
    return sum;
}

int sumarRecursivo (int *arr, int tam){
    if (tam==1)
        return *(arr+tam-1);
    else
        return *(arr+tam-1) + sumarRecursivo(arr,tam-1);
}

void invertirIterativo(int *arr, int tam){
    int *inicio = arr;
    int *fin = arr + tam - 1;
    //int provi;
    while (tam/2){
        swap (inicio,fin);
        tam=tam-2;
        inicio++;
        fin--;
    }
}

void invertirRecursivo(int *arr, int tam){
    //int provi = arr[pos];
    if (tam/2){
        swap(arr,arr+tam-1);
        //arr[pos] = arr[tam-pos-1];
        //arr[tam-pos-1] = provi;
        invertirRecursivo(++arr, tam-2);
    }
}

void bubbleSort (int arr[], int tam){
    while (tam--){
        if (arr > arr+1)
            swap(arr;arr+1);
    }
    for (int i=0; i < tam; i++){
        for (int j=0; j < (tam - i - 1); j++){
            if(arr[j] > arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

void insertionSort (int arr[], int tam){
    int valorTemporal;
    for (int i=1; i < tam; i++){
        valorTemporal = arr[i];
        int j;
        //en caso el valor evaluado sea inferior al de la izquierda y aun haya valores que evaluar
        for (j=i-1; j>=0 && arr[j] > valorTemporal; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = valorTemporal;
    }
}

int particion(int arr[], int izquierda, int derecha){
    int pivote = arr[derecha];
    int indice = izquierda-1;
    while (izquierda < derecha){
        //aumentar valor de indice al encontrar valor inferior, antes de intercambiar valores
        if(arr[izquierda] <= pivote){
            ++indice;
            swap(arr[indice],arr[izquierda]);
        }
        //izquierda sirve como contador y aumenta independientemente de la consulta anterior
        ++izquierda;
    }
    //intercambia con posicion correcta del pivote
    swap(arr[indice+1],arr[derecha]);
    //retorna la posicion del pivote
    return indice+1;
}

void quickSort (int arr[], int izquierda, int derecha){
    if (izquierda < derecha){
        int pivote_indice = particion(arr,izquierda,derecha);
        quickSort(arr,izquierda,pivote_indice-1);
        quickSort(arr,pivote_indice+1,derecha);
    }
}

int main()
{
    int longitud = 7;
    int x[longitud];
    for (int i=0; i<longitud; i++)
        cin >> x[i];
    cout<<endl;
    imprimir (x,longitud);
    cout<<endl;
    cout << sumarIterativo(x,longitud) << endl;
    cout<<endl;
    cout << sumarRecursivo(x,longitud) << endl;
    cout<<endl;
    invertirIterativo(x,longitud);
    imprimir(x,longitud);
    cout<<endl;
    invertirRecursivo(x,longitud);
    imprimir(x,longitud);
    cout<<endl;
    //bubbleSort(x,longitud);
    //insertionSort(x,longitud);
    quickSort(x,0,longitud-1);
    imprimir(x,longitud);

    return 0;
}
