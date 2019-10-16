#include <iostream>

using namespace std;

int tamIterativo (char *cad){
    int tam=0;
    while (*cad++ != '\0'){
        tam++;
    }
    return tam;
}

int tamRecursivo (char *cad){
    if (*cad == '\0')
        return 0;
    else
        return 1 + tamRecursivo(++cad);
}

void swap (char *ptr1, char *ptr2){
    char temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void invertirIterativo (char *cad){
    char *fin = cad + tamRecursivo(cad) - 1;
    while (fin > cad){
        swap (cad, fin);
        fin--;
        cad++;
    }
}

void invertirRecursivo (char *cad, char *fin){
    if (fin > cad){
        swap(cad, fin);
        invertirRecursivo(++cad,--fin);
    }
}

bool palindromeIter (char *cad){
    char *fin = cad + tamRecursivo(cad) - 1;
    while (fin > cad && *cad == *fin){
        fin--;
        cad++;
    }
    return (*cad == *fin);
}

bool palindromeRec (char *cad, char *fin){
    if (fin > cad && *cad == *fin)
        palindromeRec(++cad,--fin);
    else
        return (*cad == *fin);
}

int main()
{
    char cadena[] = "HOLA";
    cout << cadena << endl;
    cout << tamIterativo(cadena) << endl;
    cout << tamRecursivo(cadena) << endl;
    invertirIterativo(cadena);
    cout << cadena << endl;
    invertirRecursivo(cadena, cadena + tamRecursivo(cadena) - 1);
    cout << cadena << endl;
    if(palindromeRec(cadena, cadena + tamRecursivo(cadena) - 1))
        cout << "PALINDROME" << endl;
    else
        cout << "NO es palindrome" << endl;
    if(palindromeIter(cadena))
        cout << "PALINDROME" << endl;
    else
        cout << "NO es palindrome" << endl;
    return 0;
}
