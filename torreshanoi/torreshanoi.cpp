/***********************************************************************
 * Module:  torreshanoi.cpp
 * Author:  Diego Alcaciega
 * Modified: domingo, 11 de mayo de 2025 14:39:54
 * Purpose: Implementation of the class torreshanoi
 ***********************************************************************/

#include "torreshanoi.h"
#include <iostream>
using namespace std;

torreshanoi::torreshanoi()
{
    movimiento = 0;
    discos = 3; // Número de discos
    torres.resize(3); // Tres torres
    for (int i = discos; i >= 1; --i)
        torres[0].push(i); // Inicializamos la primera torre con los discos
}

void torreshanoi::moverDisco(char origen, char destino)
{
    int torreOrigen = origen - 'A';
    int torreDestino = destino - 'A';

    if (validarMovimiento(origen, destino))
    {
        int disco = torres[torreOrigen].top();
        torres[torreOrigen].pop();
        torres[torreDestino].push(disco);
        movimiento++;
        cout << "Mover disco " << disco << " de " << origen << " a " << destino << endl;
    }
    else
    {
        cout << "Movimiento inválido. Intenta de nuevo." << endl;
    }
}

bool torreshanoi::validarMovimiento(char origen, char destino)
{
    int torreOrigen = origen - 'A';
    int torreDestino = destino - 'A';

    if (torres[torreOrigen].empty())
        return false; // No se puede mover desde una torre vacía

    if (torres[torreDestino].empty())
        return true; // Se puede mover a una torre vacía

    return torres[torreOrigen].top() < torres[torreDestino].top(); // Solo se puede mover si el disco es más pequeño
}

void torreshanoi::mostrarEstado()
{
    cout << "Estado actual de las torres:" << endl;
    for (int i = 0; i < 3; ++i)
    {
        cout << "Torre " << char('A' + i) << ": ";
        stack<int> copia = torres[i];
        while (!copia.empty())
        {
            cout << copia.top() << " ";
            copia.pop();
        }
        cout << endl;
    }
}

int torreshanoi::gettorre()
{
    return torres[2].size(); // Devuelve el número de discos en la Torre C
}