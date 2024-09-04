#include "math.h"
#include "Automoviles.h"

using namespace std;

double Automoviles::getCuotaMensual() { return CuotaMensual; }
void Automoviles::setCuotaMensual(double cuotamensual) { Automoviles::CuotaMensual = cuotamensual; }
double Automoviles::CalculoInteres() {
	double P = Monto;
	double i = 0.76;
	int n = Plazo;
	return CuotaMensual = (P * i) / (1 - pow((1 + i), -n));
}
void Automoviles::Abonar(double cantabono) {

}
