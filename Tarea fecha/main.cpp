/***********************************************************************
 * Module:  Fecha.h
 * Author:  Diego Alcaciega
 * Modified: viernes, 9 de mayo de 2025 20:22:59
 * Purpose: Declaration of the class Fecha
 ***********************************************************************/
#include <iostream>
#include <string>   
#include "Fecha.h"
using namespace std;

int main()
{
     Fecha fecha;
    int dia, mes, anio;

    do {
        cout << "Ingrese la fecha (dd mm aaaa): ";
        cin >> dia >> mes >> anio;

        fecha.setdia(dia);
        fecha.setmes(mes);
        fecha.setanio(anio);

        if (!fecha.validarFecha()) {
            cout << "La fecha ingresada no es válida. Por favor, inténtelo de nuevo." << endl;
        }
    } while (!fecha.validarFecha()); //Permite volver a ingresar la fecha si no es válida

    cout << "La fecha ingresada es: " << fecha.getdia() << "/" << fecha.getmes() << "/" << fecha.getanio() << endl;

    if (fecha.esBisiesto()) { // Validar si el año es bisiesto
        cout << "El año " << fecha.getanio() << " es bisiesto." << endl;
    } else {
        cout << "El año " << fecha.getanio() << " no es bisiesto." << endl;
    }
    // Validar el año bisiesto
    return 0;
}
