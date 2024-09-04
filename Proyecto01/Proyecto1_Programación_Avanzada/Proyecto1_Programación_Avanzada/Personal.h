#pragma once
#include "Prestamo.h"

class Personal : public Prestamo
{

protected:
    double i = 0.0645;
    double P;
    int NumDias;

public:
    Personal(double monto, double tasai, int plazo, double i, double P, int n) : Prestamo(monto, tasai, plazo), i(i), P(P), NumDias(n) {

        Monto = monto;
        TazaI = tasai;
        Plazo = plazo;
        i = i;
        P = P;
        NumDias = n;
    }

    virtual double CalculoIntereses();
    void VerDatosPrestamo() override;
    void Abonar(double cantabonada);

};