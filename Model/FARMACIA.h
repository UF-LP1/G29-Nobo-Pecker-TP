/**
 * Project Untitled
 */


#ifndef _FARMACIA_H
#define _FARMACIA_H

#include "EMPLEADO.h"
//#include "PRODUCTO.h"

class FARMACIA {
public:

    FARMACIA(string n);
    ~FARMACIA();

    void set_direccion(string d);
    void set_horarioSemana(string hs);
    void set_horarioFinde(string hf);
    void set_fondos(float f);
    string get_direccion();
    string get_horarioSemana();
    string get_horarioFinde();
    float get_fondos();

private:
    const string nombre;
    string direccion;
    string horarioSemana;
    string horarioFinde;
    float fondos;
};

#endif //_FARMACIA_H