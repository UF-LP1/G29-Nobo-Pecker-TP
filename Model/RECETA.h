/**
 * Project Untitled
 */


#ifndef _RECETA_H
#define _RECETA_H

#include "CLIENTE.h"

class RECETA {
public:

    const string medico;
    const string fecha;
    const string diagnostico;

    RECETA(string m, string f, string d);
    ~RECETA();

};

#endif //_RECETA_H
