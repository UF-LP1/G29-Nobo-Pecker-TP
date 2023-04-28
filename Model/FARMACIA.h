/**
 * Project Untitled
 */


#ifndef _FARMACIA_H
#define _FARMACIA_H

class FARMACIA {
public: 
    
/**
 * @param n
 */
void FARMACIA(string n);
    
/**
 * @param d
 */
void set_direccion(string d);
    
/**
 * @param hs
 */
void set_horarioSemana(string hs);
    
/**
 * @param hf
 */
void set_horarioFinde(string hf);
    
/**
 * @param f
 */
void set_fondos(double f);
    
string get_direccion();
    
string get_horarioSemana();
    
string get_horarioFinde();
    
double get_fondos();
    
/**
 * @param e
 */
bool pagarEmpleado(EMPLEADO e);
    
/**
 * @param e
 */
bool actualizarSueldo(EMPLEADO e);
    
/**
 * @param p
 * @param n
 */
bool actualizarStock(PRODUCTO p, int n);
protected: 
    
void FARMACIA();
private: 
    const string nombre;
    string direccion;
    string horarioSemana;
    string horarioFinde;
    double fondos;
};

#endif //_FARMACIA_H