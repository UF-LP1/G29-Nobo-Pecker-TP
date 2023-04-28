/**
 * Project Untitled
 */


#include "eFarmaceutico.h"

 /**
  * eFarmaceutico implementation
  */


eFarmaceutico::eFarmaceutico(string na, string dni, tipoEmpleado f, string tel, string mail) :EMPLEADO(na, dni, tel, mail), f(f) {

}

eFarmaceutico::~eFarmaceutico() {

}

bool eFarmaceutico::venderMedicamento(CLIENTE c, vector<pMedicamentos> m,vector<unsigned int> cant) {
    
    //recorro la lista de medicamentos que quiero comprar para ir agregandolos al carrito
    for (int i = 0; i < m.size(); i++)
    {   
        if (m[i].get_stock() >= cant[i])
        {
            c.carrito.push_back(m[i]);
            c.cantidades.push_back(cant[i]);
        }
        else return false;
    }
    //si me pediste 27 pastillas pero entre ellas habia 2 ibuprofenos y yo tengo uno solo no te vendo y bueno...
    return true;
}