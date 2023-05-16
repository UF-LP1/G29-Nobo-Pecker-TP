/**
 * Project Untitled
 */


#ifndef _CLIENTE_H
#define _CLIENTE_H
#include "PRODUCTO.h"
#include "metodoPago.h"
#include "pGolosinas.h"

 

class CLIENTE : public PERSONA { //ME FALTA EL ATRIBUTO CARRITO QUE ES DE TEMPPLATE
private:

    float efectivo;
    float app;
    float debito;
    float credito;
    array<necesidadCliente, 3> necesidad;
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
    void set_nec(necesidadCliente* necesidad);
    void set_metP(metodoPago metPago);
    void set_prefTicket(bool prefTicketFisico);
    void set_efectivo(float efectivo);
    void set_app(float app);
    void set_credito(float credito);
    void set_debito(float debito);
    array<necesidadCliente,3> get_nec();
    metodoPago get_metP();
    float get_efectivo();
    float get_app();
    float get_debito();
    float get_credito();
    unsigned int get_nro();
    bool get_prefTicket();
   

};

#endif //_CLIENTE_H