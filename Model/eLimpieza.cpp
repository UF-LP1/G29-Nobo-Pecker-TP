/**
 * Project Untitled
 //*/


#include "eLimpieza.h"

 /**
  * eLimpieza implementation
  */


eLimpieza::eLimpieza(string na, string dni, string tel, string mail) : EMPLEADO(na, dni, tel, mail) {

}

eLimpieza::~eLimpieza() {

}

void eLimpieza:: limpiar(FARMACIA farmacia) {
	if (!(farmacia.get_limpio())) {
		farmacia.set_limpio(true);
	}
	return;
}
