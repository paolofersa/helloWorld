#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout << "Ingrese primer numero" << endl;
    cin >> a;
    cout << "Ingrese segundo numero" << endl;
    cin >> b;
    cout << "Ingrese tercer numero" << endl;
    cin >> c;

    if (a>=b)
        if (a>=c)
            cout << a << " es el mayor numero" << endl;
        else
            cout << c << " es el mayor numero" << endl;
    else
        if (b>=c)
            cout << b << " es el mayor numero" << endl;
        else
            cout << c << " es el mayor numero" << endl;

    return 0;
}
