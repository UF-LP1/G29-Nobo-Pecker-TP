/**
 * Project Untitled
 */


#include "CLIENTE.h"

 /**
  * CLIENTE implementation
  */


CLIENTE::CLIENTE(string na, string dni, unsigned int nro, array<necesidadCliente,3> nec, float efectivo, float app, float debito, float credito, string tel, string mail, bool prefTicketFisico, metodoPago metPago) : PERSONA (na, dni, tel, mail), nro(nro) { 
    this->efectivo = efectivo;
    this->app = app;
    this->credito = credito;
    this->debito = debito;
    this->preferenciaTicketFisico = true;
    this->metP = metPago;
    this->carrito = vector<PRODUCTO>(carrito.begin(), carrito.end());
    this->cantidades = vector<unsigned int>(cantidades.begin(), cantidades.end());
    for (int i = 0; i < 3; i++)
        this->necesidad[i] = nec[i]; 
 
}

CLIENTE::~CLIENTE() { 

}


float CLIENTE::get_efectivo() {
    return this->efectivo;
}

float CLIENTE::get_app() {
    return this->app;
}

float CLIENTE::get_debito() {
    return this->debito;
}

float CLIENTE::get_credito() {
    return this->credito;
}

void CLIENTE::set_efectivo(float efectivo) {
    this->efectivo = efectivo;
    return;
}

void CLIENTE::set_credito(float credito) {
    this->credito = credito;
    return;
}

void CLIENTE::set_app(float app) {
    this->app = app;
    return;
}

void CLIENTE::set_debito(float debito) {
    this->debito = debito;
    return;
}

void CLIENTE:: set_nec(array<necesidadCliente,3> necesidad) {
    for (int i = 0; i < 3; i++)
        this->necesidad[i] = necesidad[i];
    return;
}

array<necesidadCliente,3> CLIENTE:: get_nec() {
    return this-> necesidad;
}

void CLIENTE::set_metP (metodoPago metPago) {
    this->metP = metPago;
    return;
}

metodoPago CLIENTE:: get_metP() {
    return this->metP;
}

void CLIENTE:: set_prefTicket(bool prefTicketFisico) {
    this-> preferenciaTicketFisico = prefTicketFisico;
}

unsigned int CLIENTE:: get_nro() {
    return this->nro;
}

bool CLIENTE:: get_prefTicket() {
    return this->preferenciaTicketFisico;
}

bool CLIENTE::pagar(float monto, metodoPago metPago) {
    
    float billetera = 0.0;
    bool pagado = false;

    //segun su metodo de pago, le resto el monto a lo que tiene en su billetera
    switch (metPago)
    {
        case (metodoPago)0:
        {
            billetera = get_efectivo();
            if (billetera >= monto)
            { 
                set_efectivo(billetera - monto);
                pagado = true;
            }
            break;
    
        }

        case (metodoPago)1:
        {
            billetera = get_credito();
            if (billetera >= monto)
            {
                set_credito(billetera - monto);
                pagado = true;
            }
            break;

        }

        case (metodoPago)2:
        {
            billetera = get_debito();
            if (billetera >= monto)
            {
                set_debito(billetera - monto);
                pagado = true;
            }
            break;

        }

        case (metodoPago)3:
        {
            billetera = get_app();
            if (billetera >= monto)
            {
                set_app(billetera - monto);
                pagado = true;
            }
            break;

        }

    }

    return pagado;
}

bool CLIENTE::comprarGolosinas(vector<pGolosinas>golosinas, vector<unsigned int >cant) { //este metodo le permite al cliente agregar una lista de golosinas a su carrito 
   
    for (int i = 0; i < golosinas.size(); i++)
    {
        if (golosinas[i].get_stock() >= cant[i]) //siempre y cuando tenga stock
        {
            this->carrito.push_back(golosinas[i]); //agrego la golosina en el carrito (vector de productos)
            this->cantidades.push_back(cant[i]); //agrego la cantidad de esa golosina que se lleva en el vector de cantidades
            golosinas[i].set_stock(golosinas[i].get_stock() - cant[i]);
        }
        else return false;
    }
  
    return true;
}
