#pragma once
#include "Prestamo.h"
class Personal :
    public Prestamo
{

private:
    float i = 0.0645;
    double P;
    int NumDias;
   

public: 
    double Monto;
    double TasaInteres;
    int Plazo;


    Personal::Personal(double monto, double tasai, int plazo, float i,
    double P, int n; ): Prestamo(monto, tasai, plazo) {

        Monto = monto;
        TasaInteres = tasai;
        Plazo = plazo;
        i = i;
        P = P;
        NumDias = n;
  
    }
     
};

