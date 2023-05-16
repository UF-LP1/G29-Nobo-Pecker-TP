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
    necesidadCliente necesidad;
    const unsigned int nro;
    bool preferenciaTicketFisico;
    metodoPago metP;

public:

    vector<PRODUCTO> carrito;
    vector<unsigned int> cantidades;

    CLIENTE(string na, string dni, unsigned int nro, necesidadCliente nec, float efectivo, float app, float debito, float credito, string tel, string mail, bool prefTicketFisico, metodoPago metPago);//C
    ~CLIENTE(); //D

    bool pagar(float monto, metodoPago metPago);
    bool comprarGolosinas(vector <pGolosinas> golosinas, vector<unsigned int> cant);
    void set_nec(necesidadCliente necesidad);
    void set_metP(metodoPago metPago);
    void set_prefTicket(bool prefTicketFisico);
    necesidadCliente get_nec();
    metodoPago get_metP();
    void set_efectivo(float efectivo);
    void set_app(float app);
    void set_credito(float credito);
    void set_debito(float debito);
    float get_efectivo();
    float get_app();
    float get_debito();
    float get_credito();
    unsigned int get_nro();
    bool get_prefTicket();
   

};

#endif //_CLIENTE_H