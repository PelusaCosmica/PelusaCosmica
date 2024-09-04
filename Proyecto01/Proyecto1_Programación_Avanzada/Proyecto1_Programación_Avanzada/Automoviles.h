#pragma once
#include "Prestamo.h"
class Automoviles : public Prestamo {
protected:
	double CuotaMensual;
public:
	Automoviles(double monto, double tazai, int plazo, double cuotamensual) :Prestamo(monto, tazai, plazo)
	{
		Monto = monto;
		TazaI = tazai;
		Plazo = plazo;
		CuotaMensual = cuotamensual;
	}
	void setCuotaMensual(double cuotamensual);
	double getCuotaMensual();
	double CalculoInteres() override;
	void Abonar(double cantabono);
};

