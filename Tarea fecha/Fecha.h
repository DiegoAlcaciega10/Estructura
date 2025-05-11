/***********************************************************************
 * Module:  Fecha.h
 * Author:  PAULA
 * Modified: viernes, 9 de mayo de 2025 20:22:59
 * Purpose: Declaration of the class Fecha
 ***********************************************************************/

#if !defined(__Validarfecha_Fecha_h)
#define __Validarfecha_Fecha_h

class Fecha
{
public:
   int getdia(void);
   void setdia(int newDia);
   int getmes(void);
   void setmes(int newMes);
   int getanio(void);
   void setanio(int newAnio);
   Fecha();

protected:
private:
   int dia;
   int mes;
   int anio;


};

#endif