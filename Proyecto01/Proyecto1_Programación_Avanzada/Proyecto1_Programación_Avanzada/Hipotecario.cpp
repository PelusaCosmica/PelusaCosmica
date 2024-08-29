#include "Hipotecario.h"


using namespace std;
#include <iostream>


Hipotecario::Hipotecario(double monto, double tasai, int plazo, double euribor, double diferencial, double capitalpendiente) : Prestamo(monto, tasai, plazo) {

    Monto = monto;
    TasaInteres = tasai;
    Plazo = plazo;
    Euribor = euribor;
    Diferencial = diferencial;
    CapitalPendiente = capitalpendiente;
}

double Hipotecario::CalculoIntereses()   {
    

    return  CapitalPendiente * (Euribor + Diferencial) / 12;

}

    void  Hipotecario::VerDatosPrestamo()  {

    cout << "El prestamo Hipotecario: " << endl;
    cout << "El capital pendiente es: Q." << CapitalPendiente << endl;
    cout << "El Euribor: " << Euribor << endl;
    cout << "El interes mensuale es: " << CalculoIntereses() << endl;

}

void Hipotecario::Abonar(double cantabonada) {

    CapitalPendiente -=cantabonada;
}
