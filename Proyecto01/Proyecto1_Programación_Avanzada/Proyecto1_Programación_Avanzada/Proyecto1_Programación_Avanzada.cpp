#include <iostream>
#include "Prestamo.h"
#include "Banco.h"
#include "Personal.h"
#include "Hipotecario.h"
#include "Automoviles.h"
using namespace std;

void Retraso(double secs) {
    for (double i = (time(NULL) + secs); time(NULL) != i; time(NULL));
    //función encontrada en: https://ccodigo.help/2010/09/24/funcion-delay-en-c/
}

int main()
{
    int cop2;
    int cop;
    double monto;
    double tasai;
    int plazo;
    string nombre;
    bool confirmacion = true;
    cout << "Ingrese su nombre: " << endl;
    cin >> nombre;
    cout << "Bienvenido " << nombre << ", que accion desea realizar?" << endl;
    do {
        cout << "1. Agregar un nuevo prestamo" << endl;
        cout << "2. Eliminar un prestamo existente" << endl;
        cout << "3. Gestionar un prestamo" << endl;
        cout << "4. Mostrar todos los prestamos" << endl;
        cout << "5. Calcular y mostrar el interés de cada prestamo" << endl;
        cout << "6. Salir" << endl;
        cin >> cop;
        switch (cop)
        {
        case 1:
            cout << "que tipo de prestamo desea realizar?" << endl;
            do {
                cout << "1. Personal " << endl;
                cout << "2. Hipotecario " << endl;
                cout << "3. Automoviles " << endl;
                cout << "4. Regresar " << endl;
                cin >> cop2;
                switch (cop2)
                {
                case 1:
                    tasai = 0.685;
                    cout << "Ingrese el monto del prestamo" << endl;
                    do
                    {
                        cin >> monto;
                        if ((monto > 100000) || (monto < 100))
                        {
                            cout << "No puede ingresar valores mayores a Q100000.00 o menores a Q100.00 ";
                            cout << "Ingrese nuevamente el valor del monto" << endl;
                            confirmacion = false;
                        }else {
                            confirmacion = true;
                        }
                    } while (!confirmacion);
                    cout << "Ingrese el plazo en MESES" << endl;
                    do
                    {
                        cin >> plazo;
                        if ((plazo > 120) || (plazo < 1))
                        {
                            cout << "No puede ingresar valores mayores a 120 (10 años) o menores a 1 (negativos o cero)";
                            cout << "Ingrese nuevamente el valor del plazo" << endl;
                            confirmacion = false;
                        }else {
                            confirmacion = true;
                        }
                    } while (!confirmacion);
                    //confirmación de datos guardados (mientras se termina la clase Personal)
                    cout << "Datos guardados" << endl;
                    //llamada al método "CalculoInteres" de la clase "Personal"
                    break;
                case 2:
                    //aún no tengo claro como se calcula este tipo de prestamo ni que se le debe pedir al usuario
                case 3:
                    tasai = 0.0076;
                    cout << "Ingrese el monto del prestamo" << endl;
                    do
                    {
                        cin >> monto;
                        if ((monto > 300000) || (monto < 15000))
                        {
                            cout << "No puede ingresar valores mayores a Q300000.00 o menores a Q15000.00 ";
                            cout << "Ingrese nuevamente el valor del monto" << endl;
                            confirmacion = false;
                        }
                        else {
                            confirmacion = true;
                        }
                    } while (!confirmacion);
                    cout << "Ingrese el plazo en MESES" << endl;
                    do
                    {
                        cin >> plazo;
                        if ((plazo > 120) || (plazo < 1))
                        {
                            cout << "No puede ingresar valores mayores a 120 (10 años) o menores a 1 (negativos o cero)";
                            cout << "Ingrese nuevamente el valor del plazo" << endl;
                            confirmacion = false;
                        }
                        else {
                            confirmacion = true;
                        }
                    } while (!confirmacion);
                    //confirmación de datos guardados (mientras se termina la clase Personal)
                    cout << "Datos guardados" << endl;
                    //llamada al método "CalculoInteres" de la clase "Personal"
                    break;
                case 4:
                    cout << "Regresando.";
                    Retraso(1);
                    cout << ".";
                    Retraso(1);
                    cout << "." << endl;
                    break;
                default:
                    cout << "Esta no es una opcion valida, por favor ingrese una de las opciones del menu" << endl;
                    break;
                }
            } while (cop2 != 4);
            break;
        case 2:
            //método para eliminar un prestamo pendiente
            break;
        case 3:
            //método para gestionar prestamos pendiente
            break;
        case 4:
            //método para mostrar todos los prestamos pendiente
            break;
        case 5:
            //método para calcular y mostrar intereses de todos los prestamos pendiente
            break;
        case 6:
            cout << "Fue un gusto atenderle!" << endl;
            break;
        default:
            cout << "Esta no es una opcion valida, por favor ingrese un numero del menu" << endl;
            break;
        }
    } while (cop != 6);
    system("pause");
}