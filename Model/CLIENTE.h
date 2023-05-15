/**
 * Project Untitled
 */


#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "PERSONA.h"
#include "necesidadCliente.h"
#include "metodoPago.h"
#include "pGolosinas.h"


class CLIENTE : public PERSONA { //ME FALTA EL ATRIBUTO CARRITO QUE ES DE TEMPPLATE
private:

    float efectivo;
    float app;
    float debito;
    float credito;
    necesidadCliente nec;
    const unsigned int nro;
    bool preferenciaTicketFisico;
    metodoPago metP;

public:

    vector<PRODUCTO> carrito;
    vector<unsigned int> cantidades;

    CLIENTE(string na, string dni, unsigned int nro, necesidadCliente nec, float ef, float app, float deb, float cr, string tel, string mail, bool ptf, metodoPago metP);//C
    ~CLIENTE(); //D

    bool pagar(float m, metodoPago metp);
    bool comprarGolosinas(vector <pGolosinas> g, vector<unsigned int> cant);
    void set_nec(necesidadCliente n);
    void set_metP(metodoPago MP);
    void set_prefTicket(bool PFT);
    necesidadCliente get_nec();
    metodoPago get_metP();
    void set_efectivo(float e);
    void set_app(float mP);
    void set_credito(float cr);
    void set_debito(float d);
    float get_efectivo();
    float get_app();
    float get_debito();
    float get_credito();
    unsigned int get_nro();
    bool get_prefTicket();
   

};

#endif //_CLIENTE_H