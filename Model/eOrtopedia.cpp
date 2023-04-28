/**
 * Project Untitled
 */


#include "eOrtopedia.h"

 /**
  * eOrtopedia implementation
  */


eOrtopedia::eOrtopedia(string na, string dni, tipoEmpleado o, string tel, string mail) : EMPLEADO(na, dni, tel, mail), o(o) {

}

eOrtopedia::~eOrtopedia() {

}

bool eOrtopedia::venderProducto(CLIENTE c, vector<pOrtopedia> o, vector<unsigned int> cant) {
    //recorro la lista de medicamentos que quiero comprar para ir agregandolos al carrito
    for (int i = 0; i < o.size(); i++)
    {
        if (o[i].get_stock() >= cant[i])
        {
            c.carrito.push_back(o[i]);
            c.cantidades.push_back(cant[i]);
        }
        else return false;
    }
    //si me pediste 27 pastillas pero entre ellas habia 2 ibuprofenos y yo tengo uno solo no te vendo y bueno...
    return true;
    
}