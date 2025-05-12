/***********************************************************************
 * Module:  Triangulo_pascal.h
 * Author:  PAULA
 * Modified: domingo, 11 de mayo de 2025 15:52:44
 * Purpose: Declaration of the class Triangulo_pascal
 ***********************************************************************/

#if !defined(__Triangulo_de_pascal2_Triangulo_pascal_h)
#define __Triangulo_de_pascal2_Triangulo_pascal_h

#include "Factorial.h"

class Triangulo_pascal
{
public:
   void imprimirTriangulo(int n);
   int cacularvalor(int n, int k);
   Triangulo_pascal();

protected:
private:
   Factorial factorial;
   int filas;
};

#endif