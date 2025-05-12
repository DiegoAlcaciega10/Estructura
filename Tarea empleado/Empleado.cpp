/***********************************************************************
 * Module:  Empleado.cpp
 * Author:  Diego Alcaciega
 * Modified: domingo, 11 de mayo de 2025 18:51:35
 * Purpose: Implementation of the class Empleado
 ***********************************************************************/

#include "Empleado.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h> // Para getch()
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::getNombre()
// Purpose:    Implementation of Empleado::getNombre()
// Return:     String
////////////////////////////////////////////////////////////////////////

string Empleado::getNombre(void)
{
   return Nombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::setNombre(String newNombre)
// Purpose:    Implementation of Empleado::setNombre()
// Parameters:
// - newNombre
// Return:     void
////////////////////////////////////////////////////////////////////////

void Empleado::setNombre(string newNombre)
{
   Nombre = newNombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::getEdad()
// Purpose:    Implementation of Empleado::getEdad()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Empleado::getEdad(void)
{
   return Edad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::setEdad(int newEdad)
// Purpose:    Implementation of Empleado::setEdad()
// Parameters:
// - newEdad
// Return:     void
////////////////////////////////////////////////////////////////////////

void Empleado::setEdad(int newEdad)
{
   Edad = newEdad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::getSueldo()
// Purpose:    Implementation of Empleado::getSueldo()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Empleado::getSueldo(void)
{
   return Sueldo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::setSueldo(float newSueldo)
// Purpose:    Implementation of Empleado::setSueldo()
// Parameters:
// - newSueldo
// Return:     void
////////////////////////////////////////////////////////////////////////

void Empleado::setSueldo(float newSueldo)
{
   Sueldo = newSueldo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::Empleado()
// Purpose:    Implementation of Empleado::Empleado()
// Return:     
////////////////////////////////////////////////////////////////////////

Empleado::Empleado()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::validarnombre(string Nombre)
// Purpose:    Validates and returns a valid name
// Parameters:
// - Nombre
// Return:     string
////////////////////////////////////////////////////////////////////////

string Empleado::validarnombre(string Nombre)
{
   string nombre;
   cout << "Ingrese el nombre: ";
   char entrada = getch(); // Capturar un carácter
   int i = 0;
   char dato[20]; // Arreglo para almacenar el nombre

   while (entrada != 13) { // Mientras no se presione Enter
       if ((entrada >= 'a' && entrada <= 'z') || (entrada >= 'A' && entrada <= 'Z')) {
           dato[i] = entrada; // Agregar carácter válido al arreglo
           cout << entrada;   // Mostrar el carácter ingresado
           i++;
       }
       entrada = getch(); // Capturar el siguiente carácter
   }
   dato[i] = '\0'; // Agregar el carácter nulo al final del arreglo
   nombre = string(dato); // Convertir el arreglo a string
   return nombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::validaredad(int Edad)
// Purpose:    Validates and returns a valid age
// Parameters:
// - Edad
// Return:     int
////////////////////////////////////////////////////////////////////////

int Empleado::validaredad(int Edad)
{
   char entrada = getch(); // Capturar un carácter
   int edad, i = 0;
   char numero[10]; // Arreglo para almacenar la edad como texto

   cout << "Ingrese la edad (solo números): ";
   while (entrada != 13) { // Mientras no se presione Enter
       if (entrada >= '0' && entrada <= '9') { // Validar que sea un dígito
           numero[i] = entrada; // Agregar el dígito al arreglo
           cout << entrada;     // Mostrar el carácter ingresado
           i++;
       }
       entrada = getch(); // Capturar el siguiente carácter
   }
   numero[i] = '\0'; // Agregar el carácter nulo al final del arreglo
   edad = atoi(numero); // Convertir el texto a un entero

   if (edad < 18 || edad > 65) { // Validar rango de edad
       cout << "\nEdad no válida. Intente nuevamente: ";
       return validaredad(Edad); // Llamar recursivamente si la edad no es válida
   }
   return edad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::validarsueldo(float Sueldo)
// Purpose:    Validates and returns a valid salary
// Parameters:
// - Sueldo
// Return:     float
////////////////////////////////////////////////////////////////////////

float Empleado::validarsueldo(float Sueldo)
{
   char entrada = getch(); // Capturar un carácter
   float sueldo;
   int i = 0;
   char numero[10]; // Arreglo para almacenar el sueldo como texto

   cout << "Ingrese el sueldo (solo números): ";
   while (entrada != 13) { // Mientras no se presione Enter
       if ((entrada >= '0' && entrada <= '9') || entrada == '.') { // Validar dígitos y punto decimal
           numero[i] = entrada; // Agregar el carácter al arreglo
           cout << entrada;     // Mostrar el carácter ingresado
           i++;
       }
       entrada = getch(); // Capturar el siguiente carácter
   }
   numero[i] = '\0'; // Agregar el carácter nulo al final del arreglo
   sueldo = atof(numero); // Convertir el texto a un número flotante

   if (sueldo < 0) { // Validar que el sueldo sea positivo
       cout << "\nSueldo no válido. Intente nuevamente: ";
       return validarsueldo(Sueldo); // Llamar recursivamente si el sueldo no es válido
   }
   return sueldo;
}