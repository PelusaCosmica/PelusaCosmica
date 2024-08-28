#pragma once
class Prestamo{
protected:
	double Monto;
	double TazaI;
	int Plazo;
public:
	Prestamo(double monto, double tazai, int plazo)
	{
		Monto = monto;
		TazaI = tazai;
		Plazo = plazo;
	}
	virtual double CalculoInteres();
	virtual void VerDatosPrestamo();
};
