/**
 * Project Untitled
 */


#include "CLIENTE.h"

 /**
  * CLIENTE implementation
  */


CLIENTE::CLIENTE(string na, string dni, unsigned int nro, necesidadCliente nec, double ef, double app, double deb, double cr, string tel, string mail, bool ptf, metodoPago metP) : PERSONA (na, dni, tel, mail), nro(nro) { 
    this->efectivo = ef;
    this->app = app;
    this->credito = cr;
    this->debito = deb;
    this->preferenciaTicketFisico = true;
    this->nec = nec;
    this->metP = metP;
    this->carrito = vector<PRODUCTO>(carrito.begin(), carrito.end());
    this->cantidades = vector<unsigned int>(cantidades.begin(), cantidades.end());
}

CLIENTE::~CLIENTE() { 

}


double CLIENTE::get_efectivo() {
    return this->efectivo;
}

double CLIENTE::get_app() {
    return this->app;
}

double CLIENTE::get_debito() {
    return this->debito;
}

double CLIENTE::get_credito() {
    return this->credito;
}

void CLIENTE::set_efectivo(double e) {
    this->efectivo = e;
    return;
}

void CLIENTE::set_credito(double cr) {
    this->credito = cr;
    return;
}

void CLIENTE::set_app(double mP) {
    this->app = mP;
    return;
}

void CLIENTE::set_debito(double d) {
    this->debito = d;
    return;
}

void CLIENTE:: set_nec(necesidadCliente n) {
    this-> nec = n;
    return;
}

necesidadCliente CLIENTE:: get_nec() {
    return this-> nec;
}

void CLIENTE::set_metP (metodoPago MP) {
    this->metP = MP;
    return;
}

metodoPago CLIENTE:: get_metP() {
    return this->metP;
}

bool CLIENTE::pagar(double m, metodoPago metp) {
    
    double billetera = 0.0;
    bool pagado = false;

    //segun su metodo de pago, le resto el monto a lo que tiene en su billetera
    switch (metp)
    {
        case (metodoPago)0:
        {
            billetera = get_efectivo();
            if (billetera >= m)
            { 
                set_efectivo(billetera - m);
                pagado = true;
            }
            break;
    
        }

        case (metodoPago)1:
        {
            billetera = get_credito();
            if (billetera >= m)
            {
                set_credito(billetera - m);
                pagado = true;
            }
            break;

        }

        case (metodoPago)2:
        {
            billetera = get_debito();
            if (billetera >= m)
            {
                set_debito(billetera - m);
                pagado = true;
            }
            break;

        }

        case (metodoPago)3:
        {
            billetera = get_app();
            if (billetera >= m)
            {
                set_app(billetera - m);
                pagado = true;
            }
            break;

        }

    }

    return pagado;
}

bool CLIENTE::comprarGolosinas(vector<pGolosinas>g, vector<unsigned int >cant) { //este metodo le permite al cliente agregar una lista de golosinas a su carrito 
   
    for (int i = 0; i < g.size(); i++)
    {
        if (g[i].get_stock() >= cant[i]) //siempre y cuando tenga stock
        {
            this->carrito.push_back(g[i]); //agrego la golosina en el carrito (vector de productos)
            this->cantidades.push_back(cant[i]); //agrego la cantidad de esa golosina que se lleva en el vector de cantidades
        }
        else return false;
    }
  
    return true;
}