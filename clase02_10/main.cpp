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
        invertirRecursivo(++arr, --tam);
    }
}

void bubbleSort (int arr[], int tam){
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
    int x[5];
    for (int i=0; i<5; i++)
        cin >> x[i];
    cout<<endl;
    imprimir (x,5);
    cout<<endl;
    cout << sumarIterativo(x,5) << endl;
    cout<<endl;
    cout << sumarRecursivo(x,5) << endl;
    cout<<endl;
    invertirIterativo(x,5);
    imprimir(x,5);
    cout<<endl;
    invertirRecursivo(x,5);
    imprimir(x,5);
    cout<<endl;
    //bubbleSort(x,5);
    //insertionSort(x,5);
    quickSort(x,0,4);
    imprimir(x,5);

    return 0;
}
