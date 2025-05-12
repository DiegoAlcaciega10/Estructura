/***********************************************************************
 * Module:  Empleado.h
 * Author:  D
 * Modified: domingo, 11 de mayo de 2025 18:51:35
 * Purpose: Declaration of the class Empleado
 ***********************************************************************/

#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include <string>
using namespace std;

class Empleado
{
public:
   string getNombre(void);
   void setNombre(string newNombre);
   int getEdad(void);
   void setEdad(int newEdad);
   float getSueldo(void);
   void setSueldo(float newSueldo);
   Empleado();

   string validarnombre(string Nombre); // Cambiado a público
   int validaredad(int Edad);     
   float validarsueldo(float Sueldo);

private:
   string Nombre;
   int Edad;
   float Sueldo;
};

#endif