/***********************************************************************
 * Module:  Fecha.h
 * Author:  Diego Alcaciega
 * Modified: viernes, 9 de mayo de 2025 20:22:59
 * Purpose: Declaration of the class Fecha
 ***********************************************************************/


#ifndef FECHA_H
#define FECHA_H

class Fecha
{
public:
  Fecha();
    void setdia(int d);  
    void setmes(int m);
    void setanio(int a);
    int getdia() ;
    int getmes() ;
    int getanio() ;
    bool validarAnio() ;//Permite validar el año
    bool esBisiesto() ;//Permite validar si el año es bisiesto
    bool validarFecha() ; //Permite validar la fecha

protected:
private:
   int dia;
   int mes;
   int anio;
};

#endif