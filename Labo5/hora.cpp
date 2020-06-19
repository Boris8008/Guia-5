#include <iostream>
#include <string>

using namespace std;

//01:25:15     01:59:59     23:59:59    01:30:59
//01:25:16     02:00:00     00:00:00    01:31:00

string x(int hora, int minutos, int segundos){
    string totalhora;

    if (segundos == 59){
        if (minutos == 59){
            if (hora == 23){
                hora = 0;
                minutos = 0;
                segundos = 0;
            }else {
                segundos = 0;
                minutos = 0;
                hora += 1;
            }
        } else {
            segundos = 0;
            minutos += 1;
        }
    } else {
        segundos +=1;
    }
    
    totalhora = to_string(hora) + ":" + to_string(minutos) + ":" + to_string(segundos);
    return totalhora;
}

int main()
{
    int hora, minutos, segundos;
    
    cout << endl;
    cout << "PROGRAMA PARA LEER LA HORA CON SUS MINUTOS Y SEGUNDOS" << endl << endl;
    cout << "Ingresar formato de 24 horas" << endl;
    cin >> hora;
    cin >> minutos;
    cin >> segundos;

    cout << "La hora es: " << hora << ":" << minutos << ":" << segundos << endl;
    cout << "La hora mas 1 segundo es: " << x(hora, minutos, segundos) << endl;


    return 0;
}