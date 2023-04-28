/**
 * Project Untitled
 */


#include "ePerfumeria.h"

 /**
  * ePerfumeria implementation
  */


ePerfumeria::ePerfumeria(string na, string dni, tipoEmpleado p, string tel, string mail) : EMPLEADO(na, dni, tel, mail), p(p) {

}

ePerfumeria::~ePerfumeria() {

}

bool ePerfumeria::venderProducto(CLIENTE c, vector<pPerfumeria> p, vector<unsigned int>cant) {
    //recorro la lista de medicamentos que quiero comprar para ir agregandolos al carrito
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i].get_stock() >= cant[i])
        {
            c.carrito.push_back(p[i]);
            c.cantidades.push_back(cant[i]);
        }
        else return false;
    }
    //si me pediste 27 pastillas pero entre ellas habia 2 ibuprofenos y yo tengo uno solo no te vendo y bueno...
    return true;
}