/***********************************************************************
 * Module:  main.cpp
 * Author:  Diego Alcaciega
 * Modified: domingo, 11 de mayo de 2025 14:39:54
 * Purpose: Main program for Torres de Hanoi
 ***********************************************************************/

#include <iostream>
#include "torreshanoi.h"

using namespace std;

int main(int argc, char const *argv[])
{
    torreshanoi hanoi; // Crear una instancia de la clase
    char origen, destino;

    cout << "Bienvenido a las Torres de Hanoi." << endl;
    cout << "Resuelve el problema moviendo los discos de la Torre A a la Torre C." << endl;

    while (true)
    {
        hanoi.mostrarEstado();
        cout << "Ingresa el movimiento (origen destino, por ejemplo: A C): ";
        cin >> origen >> destino;

        hanoi.moverDisco(origen, destino);

        // Verificar si la Torre C tiene todos los discos
        if (hanoi.gettorre() == 3) // Suponiendo que hay 3 discos
        {
            cout << "¡Felicidades! Has resuelto las Torres de Hanoi." << endl;
            break;
        }
    }

    return 0;
}

