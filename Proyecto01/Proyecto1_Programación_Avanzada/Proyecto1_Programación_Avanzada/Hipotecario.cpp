#include <iostream>
#include "Hipotecario.h"

using namespace std;

double Hipotecario::CalculoIntereses() {


    return  CapitalPendiente * (Euribor + Diferencial) / 12;

}

void  Hipotecario::VerDatosPrestamo() {

    cout << "El prestamo Hipotecario: " << endl;
    cout << "El capital pendiente es: Q." << CapitalPendiente << endl;
    cout << "El Euribor: " << Euribor << endl;
    cout << "El interes mensuale es: " << CalculoIntereses() << endl;

}

void Hipotecario::Abonar(double cantabonada) {

    CapitalPendiente -= cantabonada;
}