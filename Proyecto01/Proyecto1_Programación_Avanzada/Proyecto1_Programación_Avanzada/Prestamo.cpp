#include <iostream>
#include "Prestamo.h"

using namespace std;

double Prestamo::CalculoInteres() {
	cout << "Calculo de interes según tipo de prestamo" << endl;
}
void Prestamo::VerDatosPrestamo() {
	cout << "El monto actual del prestamo es de: " << Prestamo::Monto << endl;
	cout << "El interes del prestamo es: " << Prestamo::TazaI << endl;
	cout << "El plazo para pagar el prestamo es de :" << Prestamo::Plazo << endl;
}
