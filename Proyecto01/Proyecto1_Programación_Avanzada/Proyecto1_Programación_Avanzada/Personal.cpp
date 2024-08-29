#include "Personal.h"
#include <iostream>

using namespace std;


Personal::Personal(double monto, double tasai, int plazo, float i,
    double P, int n; ) : Prestamo(monto, tasai, plazo) {

    Monto = monto;
    TasaInteres = tasai;
    Plazo = plazo;
    i = i;
    P = P;
    NumDias = n;
}

double CalculoIntereses() : overrirde{

    return (P * i * NumDias) / 360;

}

void  DatosPrestamos() : override{
    cout << "El prestamo Personal: " << endl;
    cout << "El monto es: Q." << P << endl;
    cout << "La tasa de interes anual es: " << i  *100 << endl;
    cout << "Numero de dias transcurrido : " << NumDias << endl;
    cout << "El total de interes a pagar es: Q. " << CalculoIntereses() << endl;

}

void Abonar(double cantabonada) {

    cantabonada -= Monto;
}
