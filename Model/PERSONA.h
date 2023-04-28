/**
 * Project Untitled
 */


#ifndef _PERSONA_H
#define _PERSONA_H

#include <iostream>
#include <string>

using namespace std;

class PERSONA {
public:

    PERSONA(string na, string dni, double ef, double app, double deb, double cr, string tel, string mail);
    ~PERSONA();

    void set_efectivo(double e);
    void set_app(double mP);
    void set_debito(double d);
    void set_telefono(string t);
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

};

#endif //_PERSONA_H
