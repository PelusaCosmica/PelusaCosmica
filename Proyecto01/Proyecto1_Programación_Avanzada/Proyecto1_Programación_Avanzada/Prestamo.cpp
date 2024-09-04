#include <iostream>
#include "Prestamo.h"

using namespace std;

double Prestamo::CalculoInteres() {
	cout << "Calculo de interes según tipo de prestamo" << endl;
	return 0;
}
void Prestamo::VerDatosPrestamo() {
	cout << "El monto actual del prestamo es de: " << Prestamo::Monto << endl;
	cout << "El interes del prestamo es: " << Prestamo::TazaI << endl;
	cout << "El plazo para pagar el prestamo es de :" << Prestamo::Plazo << endl;
}
void Prestamo::setMonto(double monto) { Prestamo::Monto = monto; }
void Prestamo::setTazaI(double tazai) { Prestamo::TazaI = tazai; }
void Prestamo::setPlazo(int plazo) { Prestamo::Plazo = Plazo; }
double Prestamo::getMonto() { return Prestamo::Monto; }
double Prestamo::getTazaI() { return Prestamo::TazaI; }
int Prestamo::getPlazo() { return Prestamo::Plazo; }