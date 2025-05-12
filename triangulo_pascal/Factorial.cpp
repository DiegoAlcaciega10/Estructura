/***********************************************************************
 * Module:  Factorial.cpp
 * Author:  Diego Alcaciega
 * Modified: domingo, 11 de mayo de 2025 15:52:44
 * Purpose: Implementation of the class Factorial
 ***********************************************************************/

#include "Factorial.h"

////////////////////////////////////////////////////////////////////////
// Name:       Factorial::calcular(int n)
// Purpose:    Implementation of Factorial::calcular()
// Parameters:
// - n
// Return:     int
////////////////////////////////////////////////////////////////////////

int Factorial::calcular(int n)
{
   if (n == 0) {
      return 1;
   }
   return n * calcular(n - 1);
}

////////////////////////////////////////////////////////////////////////
// Name:       Factorial::Factorial()
// Purpose:    Implementation of Factorial::Factorial()
// Return:     
////////////////////////////////////////////////////////////////////////

Factorial::Factorial()
{
}