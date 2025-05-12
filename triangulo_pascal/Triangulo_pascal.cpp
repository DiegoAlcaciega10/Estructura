/***********************************************************************
 * Module:  Triangulo_pascal.cpp
 * Author:  Diego Alcaciega
 * Modified: domingo, 11 de mayo de 2025 15:52:44
 * Purpose: Implementation of the class Triangulo_pascal
 ***********************************************************************/

#include "Triangulo_pascal.h"
#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Triangulo_pascal::imprimirTriangulo(int n)
// Purpose:    Implementation of Triangulo_pascal::imprimirTriangulo()
// Parameters:
// - n
// Return:     void
////////////////////////////////////////////////////////////////////////

void Triangulo_pascal::imprimirTriangulo(int n)
{
   for (int i = 0; i < n; i++) {
      for (int s = 0; s < n - i - 1; s++) {
         cout << " ";
      }
      for (int j = 0; j <= i; j++) {
         cout << cacularvalor(i, j) << " ";
      }
      cout << endl;
   }
}

////////////////////////////////////////////////////////////////////////
// Name:       Triangulo_pascal::cacularvalor(int n, int k)
// Purpose:    Implementation of Triangulo_pascal::cacularvalor()
// Parameters:
// - n
// - k
// Return:     int
////////////////////////////////////////////////////////////////////////

int Triangulo_pascal::cacularvalor(int n, int k)
{
   if (k == 0 || k == n) {
      return 1; // Los bordes del triángulo siempre son 1
   }
   return factorial.calcular(n) / (factorial.calcular(k) * factorial.calcular(n - k));
}

////////////////////////////////////////////////////////////////////////
// Name:       Triangulo_pascal::Triangulo_pascal()
// Purpose:    Implementation of Triangulo_pascal::Triangulo_pascal()
// Return:     
////////////////////////////////////////////////////////////////////////

Triangulo_pascal::Triangulo_pascal()
{
}