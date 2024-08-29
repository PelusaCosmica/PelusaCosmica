#pragma once
#include "Prestamo.h"
class Hipotecario :
    public Prestamo
{

private:

    float Euribor;
    double Diferencial;
    double CapitalPendiente = 0.04;

public:
    double Monto;
    double TasaInteres;
    int Plazo;


    Hipotecario(double monto, double tasai, int plazo, double euribor, double diferencial, double capitalpendiente) : Prestamo(monto, tasai, plazo) {

        Monto = monto;
        TasaInteres = tasai;
        Plazo = plazo;
        Euribor = euribor;
        Diferencial = diferencial;
        CapitalPendiente = capitalpendiente;

    }

    virtual double CalculoIntereses();
    void VerDatosPrestamo() override;
    void Abonar(double cantabonada);


};

