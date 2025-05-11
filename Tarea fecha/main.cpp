#include <iostream>
#include <string>   
#include "Fecha.h"
using namespace std;

int main()
{
    Fecha fecha;
    int dia, mes, anio; 
    cout << "Ingrese la fecha (dd mm aaaa): ";
    cin >> dia >> mes >> anio;
    fecha.setdia(dia);
    fecha.setmes(mes);
    fecha.setanio(anio);
    cout << "La fecha ingresada es: " << fecha.getdia() << "/" << fecha.getmes() << "/" << fecha.getanio() << endl;
    return 0;
}
