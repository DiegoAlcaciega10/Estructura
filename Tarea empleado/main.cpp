#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include "Empleado.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Empleado empleado; // Crear un objeto de la clase Empleado
    string Nombre;
    int Edad;
    float Sueldo;

    cout << "Validacion de datos de empleado" << endl;

    // Validar y obtener el nombre
    Nombre = empleado.validarnombre(""); // Llamar al método validarnombre
    empleado.setNombre(Nombre); // Guardar el nombre en el objeto
    cout << "Nombre: " << empleado.getNombre() << endl;

    // Validar y obtener la edad
    Edad = empleado.validaredad(0); // Llamar al método validaredad
    empleado.setEdad(Edad); // Guardar la edad en el objeto
    cout << "Edad: " << empleado.getEdad() << endl;

    // Validar y obtener el sueldo
    Sueldo = empleado.validarsueldo(0.0f); // Llamar al método validarsueldo
    empleado.setSueldo(Sueldo); // Guardar el sueldo en el objeto
    cout << "Sueldo: " << empleado.getSueldo() << endl;

    return 0;
}
