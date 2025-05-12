/***********************************************************************
 * Module:  Triangulo_pascal.cpp
 * Author:  Diego Alcaciega
 * Modified: domingo, 11 de mayo de 2025 15:52:44
 * Purpose: Implementation of the class Triangulo_pascal
 ***********************************************************************/

#include <iostream>
#include "Triangulo_pascal.h"
using namespace std;

int main()
{
    int numero = 0;
    cout << "Triangulo de Pascal" << endl;
    cout << "Ingrese el valor para el triangulo de pascal" << endl;
    cin >> numero;

    Triangulo_pascal triangulo;
    triangulo.imprimirTriangulo(numero + 1);

    return 0;
}