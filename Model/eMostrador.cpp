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

tipoEmpleado eMostrador::atenderCliente(CLIENTE* cliente, unsigned int nroNecesidad) { //accede a la necesidad del cliente y segun eso devuelve un tipo de empleado
    tipoEmpleado necesidad= tipoEmpleado(3); 
    necesidadCliente actual = cliente->get_nec()[nroNecesidad]; //segun la vez que entre en esta funcion me fijo su necesidad
    
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
    default: //si es unspecified me devuelve unspecified por default
        break;
    }
    
    return necesidad;
}