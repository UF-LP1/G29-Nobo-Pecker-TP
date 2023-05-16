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

    void set_direccion(string direc);
    void set_horarioSemana(string horarioS);
    void set_horarioFinde(string horarioF);
    void set_fondos(float fondos);
    void set_limpio(bool limpio);
    string get_direccion();
    string get_horarioSemana();
    string get_horarioFinde();
    float get_fondos();
    bool get_limpio();

private:
    const string nombre;
    string direccion;
    string horarioSemana;
    string horarioFinde;
    float fondos;
    bool limpio;
};

#endif //_FARMACIA_H