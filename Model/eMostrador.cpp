/**
 * Project Untitled
 */


#include "eMostrador.h"

 /**
  * eMostrador implementation
  */


eMostrador::eMostrador(string na, string dni, double ef, double app, double deb, double cr, string tel, string mail) : EMPLEADO(na, dni, ef, app, deb, cr, tel, mail) {

}

eMostrador::~eMostrador() {

}

tipoEmpleado eMostrador::atenderCliente(CLIENTE c) {
    //accede a la necesidad del cliente y segun eso devuelve un tipo de empleado
    //EN EL MAIN ME VOY FIJANDO QUE VAYA ATENDIENDO POR NUMERO
    tipoEmpleado t=farmaceutico_; //inicializo para que no me moleste pero cuando lo implemente va a ser segun la necesidad
    return t;
}