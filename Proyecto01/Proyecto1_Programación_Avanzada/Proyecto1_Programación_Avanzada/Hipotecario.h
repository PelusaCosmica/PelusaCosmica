#pragma once
#include "Prestamo.h"
class Hipotecario : public Prestamo
{

private:

    float Euribor;
    double Diferencial;
    double CapitalPendiente = 0.04;

public:
    Hipotecario(double monto, double tasai, int plazo, float euribor, double diferencial, double capitalpendiente) : Prestamo(monto, tasai, plazo) {

        Monto = monto;
        TazaI = tasai;
        Plazo = plazo;
        Euribor = euribor;
        Diferencial = diferencial;
        CapitalPendiente = capitalpendiente;

    }

    virtual double CalculoIntereses();
    void VerDatosPrestamo() override;
    void Abonar(double cantabonada);


};
