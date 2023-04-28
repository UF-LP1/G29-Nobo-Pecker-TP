/**
 * Project Untitled
 */


#ifndef _PMEDICAMENTOS_H
#define _PMEDICAMENTOS_H

#include "PRODUCTO.h"


class pMedicamentos: public PRODUCTO {
public: 
    const bool ventaLibre;
    const string descripcion;
    
/**
 * @param n
 * @param d
 * @param vl
 */
void pMedicamentos(string n, string d, bool vl);
protected: 
    
void pMedicamentos();
};

#endif //_PMEDICAMENTOS_H