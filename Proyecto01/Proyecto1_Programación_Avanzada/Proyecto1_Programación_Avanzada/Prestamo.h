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
	void setMonto(double monto);
	void setTazaI(double tazai);
	void setPlazo(int plazo);
	double getMonto();
	double getTazaI();
	int getPlazo();
};
