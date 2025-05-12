/***********************************************************************
 * Module:  Fecha.cpp
 * Author:  Diego Alcaciega
 * Modified: viernes, 9 de mayo de 2025 20:22:59
 * Purpose: Implementation of the class Fecha
 ***********************************************************************/

#include "Fecha.h"
#include <iostream>

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getdia()
// Purpose:    Implementation of Fecha::getdia()
// Return:     int
////////////////////////////////////////////////////////////////////////


int Fecha::getdia(void)
{
   return dia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setdia(int newDia)
// Purpose:    Implementation of Fecha::setdia()
// Parameters:
// - newDia
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha::setdia(int newDia)
{
   dia = newDia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getmes()
// Purpose:    Implementation of Fecha::getmes()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fecha::getmes(void)
{
   return mes;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setmes(int newMes)
// Purpose:    Implementation of Fecha::setmes()
// Parameters:
// - newMes
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha::setmes(int newMes)
{
   mes = newMes;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getanio()
// Purpose:    Implementation of Fecha::getanio()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fecha::getanio(void)
{
   return anio;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setanio(int newAnio)
// Purpose:    Implementation of Fecha::setanio()
// Parameters:
// - newAnio
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha::setanio(int newAnio)
{
   anio = newAnio;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha::Fecha()
// Purpose:    Implementation of Fecha::Fecha()
// Return:     
////////////////////////////////////////////////////////////////////////
bool Fecha::validarAnio()  { // Permite validar el año
    return anio > 0; // El año debe ser mayor a 0
}

bool Fecha::esBisiesto()  { // Permite validar si el año es bisiesto
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

bool Fecha::validarFecha()  { // Permite validar la fecha
    if (anio <= 0 || mes <= 0 || mes > 12 || dia <= 0) {
        return false;
    }

    int diasEnMes[] = { 31, esBisiesto() ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return dia <= diasEnMes[mes - 1] ; // Verifica si el día es válido para el mes
}
Fecha::Fecha()
{
}