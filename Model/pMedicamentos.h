/**
 * Project Untitled
 */


#ifndef _PMEDICAMENTOS_H
#define _PMEDICAMENTOS_H

#include "PRODUCTO.h"


class pMedicamentos : public PRODUCTO {
public:

    const bool ventaLibre;
    const string descripcion;

    pMedicamentos(string n, string desc, bool vl);
    ~pMedicamentos();
    
    unsigned int descuento_total(array<necesidadCliente, 3> necesidades);
};

#endif //_PMEDICAMENTOS_H