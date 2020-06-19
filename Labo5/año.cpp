#include <iostream>

using namespace std;

bool funcionx(int z) {
    if (z % 400 == 0) {
        return true;
    } else if (z % 4 == 0 && z % 100 != 0){
        return true;
    } else {
        return false;
    }
}

void funciony (bool y){
    if (y){
        cout << "el a"<<char(-92)<<"o es bisiesto" << endl;
    } else {
        cout << "el a"<<char(-92)<<"o no es bisiesto" << endl;
    }
}

int main()
{
    int z;
    bool y;

    cout << endl;

    cout << "PROGRAMA QUE INDICA SI ES A"<<char(165)<<"O BISIESTO O NO" << endl << endl;

    cout << "Por favor ingrese el a"<<char(-92)<<"o: ";
    cin >> z;

    y = funcionx(z);
    funciony (y);
    
    return 0;
    
}