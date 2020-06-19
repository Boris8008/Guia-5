#include <iostream>

using namespace std;

int MCD (int a, int b){
    if (a == 0){
        return b;
    }
    return MCD (b % a, a);
}

int main()
{
    int a,b;

    cout << endl;
    cout << "PROGRAMA QUE CALCULA EL MCD" << endl << endl;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "El valor del maximo comun divisor es: " << MCD(a, b);

    return 0;
}