/**
 * Project Untitled
 */


#ifndef _PERSONA_H
#define _PERSONA_H

class PERSONA {
public: 
    
/**
 * @param na
 * @param dni
 */
void PERSONA(string na, string dni);
    
/**
 * @param e
 */
void set_efectivo(double e);
    
/**
 * @param mP
 */
void set_app(double mP);
    
/**
 * @param d
 */
void set_debito(double d);
    
/**
 * @param t
 */
void set_telefono(string t);
    
/**
 * @param m
 */
void set_mail(string m);
    
double get_efectivo();
    
double get_app();
    
double get_debito();
    
double get_credito();
protected: 
    const string nombreApellido;
    const string DNI;
    double efectivo;
    double app;
    double debito;
    double credito;
    string telefono;
    string mail;
    
void PERSONA();
};

#endif //_PERSONA_H