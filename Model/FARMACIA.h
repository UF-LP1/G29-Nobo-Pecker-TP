/**
 * Project Untitled
 */


#ifndef _FARMACIA_H
#define _FARMACIA_H

#include "EMPLEADO.h"
#include "PRODUCTO.h"

class FARMACIA {
public:

    FARMACIA(string n);
    ~FARMACIA();

    void set_direccion(string d);
    void set_horarioSemana(string hs);
    void set_horarioFinde(string hf);
    void set_fondos(double f);
    string get_direccion();
    string get_horarioSemana();
    string get_horarioFinde();
    double get_fondos();
    bool pagarEmpleado(EMPLEADO e);
    bool actualizarSueldo(EMPLEADO e, int porcentaje);
    bool actualizarStock(PRODUCTO p, int n);

private:
    const string nombre;
    string direccion;
    string horarioSemana;
    string horarioFinde;
    double fondos;
};

#endif //_FARMACIA_H