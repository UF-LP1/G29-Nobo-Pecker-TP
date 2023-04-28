/**
 * Project Untitled
 */


#ifndef _PERSONA_H
#define _PERSONA_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class PERSONA {
public:

    PERSONA(string na, string dni,string tel, string mail);
    ~PERSONA();

    void set_telefono(string t);
    void set_mail(string m);
    string get_mail();
    string get_telefono();

protected:
    const string nombreApellido;
    const string DNI;
    string telefono;
    string mail;

};

#endif //_PERSONA_H
