/***********************************************************************
 * Module:  torreshanoi.h
 * Author:  Diego Alcaciega
 * Modified: domingo, 11 de mayo de 2025 14:39:54
 * Purpose: Declaration of the class torreshanoi
 ***********************************************************************/

#ifndef TORRESHANOI_H
#define TORRESHANOI_H

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class torreshanoi
{
public:
   torreshanoi(); // Constructor
   void moverDisco(char origen, char destino); // Método para mover discos
   void mostrarEstado(); // Mostrar el estado actual de las torres
   bool validarMovimiento(char origen, char destino); // Validar si un movimiento es válido
   int gettorre(); // Devuelve el número de discos en la Torre C

private:
   vector<stack<int>> torres; // Representación de las torres como pilas
   int movimiento; // Contador de movimientos
   int discos; // Número total de discos
};

#endif