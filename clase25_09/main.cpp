#include <iostream>

using namespace std;
void imprimir(int arr[], int tam){
    for(int i = 0; i < tam; i++)
        cout << arr[i] << endl;
}

int sumarIterativo (int arr[], int tam){
    int sum = 0;
    for(int i = 0; i < tam; i++)
        sum += arr[i];
    return sum;
}

int sumarRecursivo (int arr[], int tam){
    if (tam==1)
        return arr[tam-1];
    else
        return arr[tam-1] + sumarRecursivo(arr,tam-1);
}

void invertirIterativo(int arr[], int tam){
    //int provi;
    for (int i = 0; i < tam/2; i++){
        swap(arr[i],arr[tam-i-1]);
        //provi = arr[i];
        //arr[i] = arr[tam-i-1];
        //arr[tam-i-1] = provi;
    }
}

void invertirRecursivo(int arr[], int tam, int pos = 0){
    //int provi = arr[pos];
    if (pos < tam/2){
        swap(arr[pos],arr[tam-pos-1]);
        //arr[pos] = arr[tam-pos-1];
        //arr[tam-pos-1] = provi;
        invertirRecursivo(arr, tam, pos+1);
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
    for (int i=0; i < tam-1; i++){
        for (int j=0; arr[i+1] < arr[i-j]; j++){
            if (arr[i+1]<arr[i-j])
                swap(arr[i+1],arr[i-j]);
        }
    }
}

void quickSort (int arr[], int tam){

}

int main()
{
    int x[5];
    for (int i=0; i<5; i++)
        cin >> x[i];
    imprimir (x,5);
    cout << sumarIterativo(x,5) << endl;
    cout << sumarRecursivo(x,5) << endl;
    invertirIterativo(x,5);
    imprimir(x,5);
    invertirRecursivo(x,5);
    imprimir(x,5);
    //bubbleSort(x,5);
    insertionSort(x,5);
    //quickSort(x,5);
    imprimir(x,5);

    return 0;
}
