/**
 * Project Untitled
 //*/


#include "eMostrador.h"

 /**
  * eMostrador implementation
  */


eMostrador::eMostrador(string na, string dni, string tel, string mail) : EMPLEADO(na, dni, tel, mail) {

}

eMostrador::~eMostrador() {

}

tipoEmpleado eMostrador::atenderCliente(CLIENTE* c) { //accede a la necesidad del cliente y segun eso devuelve un tipo de empleado
    tipoEmpleado necesidad= tipoEmpleado(0);
    necesidadCliente actual= c->get_nec();
    
    switch (actual)
    {
    case farmaciaOS: {
        necesidad = farmaceutico_;
        break;
    }
    case farmaciaP: {
        necesidad = farmaceutico_;
        break;
    }
    case PAMI: {
        necesidad = farmaceutico_;
        break;
    }
    case perfumeria: {
        necesidad = perfumeria_;
        break;
    }
    case ortopedia: {
        necesidad = ortopedia_;
        break;
    }
    default:
        break;
    }
    
    return necesidad;
}