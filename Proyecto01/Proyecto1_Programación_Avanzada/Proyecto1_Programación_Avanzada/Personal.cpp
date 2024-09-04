#include "Personal.h"
#include <iostream>

using namespace std;

double Personal::CalculoIntereses() {

    return (P * i * NumDias) / 360;

}

void  Personal::VerDatosPrestamo() {
    cout << "El prestamo Personal: " << endl;
    cout << "El monto es: Q." << P << endl;
    cout << "La tasa de interes anual es: " << i * 100 << endl;
    cout << "Numero de dias transcurrido : " << NumDias << endl;
    cout << "El total de interes a pagar es: Q. " << CalculoIntereses() << endl;

}

void Personal::Abonar(double cantabonada) {

    Monto -= cantabonada;
}