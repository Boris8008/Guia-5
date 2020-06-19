#include <iostream>

using namespace std;

//comprobacion de si es año bisiesto o no
bool bisiesto(int z) {
    if (z % 400 == 0) {
        return true;
    } else if (z % 4 == 0 && z % 100 != 0){
        return true;
    } else {
        return false;
    }
}


int main()
{
    int dia, mes, x;

    cout << endl;

    cout << "Ingrese la fecha: ";
    cin >> dia;
    cout <<"Ingrese del 1-12 el mes: ";
    cin >> mes;
    cout << "Ingrese el a" <<char(-92)<<"o: ";
    cin >> x;
    //BIS FEB 28 -> 29 FEB
    //NO BIS FEB 28 -> 1 MARZO
    // VER SI LA FECHA QUE TE DAN EXISTE

    if (mes == 1 && dia <= 31) {
        //fecha existe
    } else if (mes == 2 && dia <= 29) {
        //existe
    } else if (mes == 3 && dia <= 31) {
        //existe
    } else if (mes == 4 && dia <= 30) {
        //existe
    } else if (mes == 5 && dia <= 31) {
        //existe
    } else if (mes == 6 && dia <= 30) {
        //existe
    } else if (mes == 7 && dia <= 31) {
        //existe
    } else if (mes == 8 && dia <= 31) {
        // existe
    } else if (mes == 9 && dia <= 30) {
        //existe
    } else if (mes == 10 && dia <= 31) {
        //existe
    } else if (mes == 11 && dia <= 30) {
        //existe
    } else if (mes == 12 && dia <= 31) {
        //existe
    }else {
        //fecha no existe
        cout << "Digite una fecha o un mes existente" << endl;
    }

    if (bisiesto(x)){
        //BIS
    } else {
        //NO BIS
    }
    // SUMARLE UN DIA
  if (mes == 1 && dia <= 31){
      if ( mes == 2 && dia <= 29){
          if (mes == 3 && dia <= 31){
              if (mes == 4 && dia <= 30){
                  if (mes == 5 && dia <= 30){
                      if (mes == 6 && dia <= 30){
                          if (mes == 7 && dia <= 31){
                              if (mes == 8 && dia <= 31){
                                  if (mes == 9 && dia <= 30){
                                      if (mes == 10 && dia <= 31){
                                          if (mes == 11 && dia <= 30){
                                              if (mes == 12 && dia <= 31){
                                                  mes = 1;
                                                  dia = 1;
                                                  x += 1;
                                              }
                                              else {
                                                  mes += 1;
                                                  dia = 1;
                                              }
                                          }
                                          else {
                                              mes += 1;
                                              dia = 1;
                                          }
                                      }
                                      else {
                                          mes += 1;
                                          dia = 1;
                                      }
                                  }
                                  else {
                                      mes += 1;
                                      dia = 1;
                                  }
                              }
                              else {
                                  mes += 1;
                                  dia = 1;
                              }
                          }
                          else {
                              mes += 1;
                              dia = 1;
                          }
                      }
                      else {
                          mes += 1;
                          dia = 1;
                      }
                  }
                  else {
                      mes += 1;
                      dia = 1;
                  }
              }
              else {
                  mes += 1;
                  dia = 1;
              }
          }
          else {
              mes += 1;
              dia = 1;
          }
      }
      else {
          mes += 1;
          dia = 1;
      }
  }

    cout << "El dia es " << dia + 1 << " del mes " << mes << " del a"<<char(-92)<<"o " << x << endl;
    
    return 0;
    
}