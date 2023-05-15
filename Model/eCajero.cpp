/**
 * Project Untitled
 //*/


#include "eCajero.h"

 /**
  * eCajero implementation
  */


eCajero::eCajero(string na, string dni, string tel, string mail) : EMPLEADO(na, dni, tel, mail) {

}

eCajero::~eCajero() {

}

float eCajero::cobrar(CLIENTE* c, FARMACIA f, bool ticketFisico) {

    float monto= 0.0;
    unsigned int descuento = 0;

    //calculo el monto total
    for (int i = 0; i < c->carrito.size(); i++)
    {        
        descuento = c->carrito[i].get_descuento();

        if (descuento < 100)
        {
            if (dynamic_cast <pMedicamentos*> (c->carrito[i]) != nullptr) // el medicamento especifica cierto descuento que se aplica para personas con obra social, se duplica para personas con pami y se anula para farmacia particular
            {
                switch (c->get_nec())
                {
                case farmaciaOS:
                    break;//dejo el descuento como estaba 
                case PAMI:{
                    if(descuento<50)
                        descuento = descuento * 2; //duplico el descuento unicamente si el descuento es menor al 50% ya que de lo contrario restaria al monto
                    //si el descuento ya es mayor al 50% queda igual para las personas con PAMI que para las de obra social
                    break;
                    }
                case farmaciaP: {
                    descuento = 0; //anulo el descuento
                }

                }
            } //si no era medicamento directamente queda el descuento que ya estaba
            monto = monto + (c->carrito[i].get_precio()*(100-descuento)/100 )* c->cantidades[i]; //regla de 3: si en 100 cobro (100- descuento), en "precio" cobro ("precio*(100-descuento)/100)         
        } 

    }

    //llamo a la funcion pagar de cliente
    metodoPago MP = c->get_metP();
    bool pagoCliente = c->pagar(monto, MP);

    //si no llega a tener la plata suficiente en el metodo que eligio (no se pueden mezclar metodos de pago en mi farmacia), pruebo con los otros
    int j;
    metodoPago aux=(metodoPago)0;
    if (!pagoCliente)
    {
        for (j = 0; j < 4; j++)
        {
            aux=(metodoPago)j;
            pagoCliente = c->pagar(monto, aux);
            if (pagoCliente) break;
        }
    }
    if (j == 4) {
        for (int l = 0; l < c->carrito.size(); l++) {
            c->carrito[l].set_stock(c->carrito[l].get_stock() + c->cantidades[l]);
        }
        return -1; //si no pudo pagar con ninguno de los otros metodos, restockeo mi farmacia y devuelvo -1
    }
    else c->set_metP(aux);
    

    //si sigo en la funcion (ya cobre) le sumo el monto a los fondos de farmacia
    float nuevosFondos = f.get_fondos() + monto;
    f.set_fondos(nuevosFondos);

    //segun la preferencia del ticket de la persona, imprimo en pantalla el monto o se lo envio por mail
    if (ticketFisico)
        cout << "El cliente pago: $" << monto;
    else
    {
        string mailC = get_mail();
        cout << "El ticket se envio por mail";
        //enviar por mail
    }
    return monto;
}






/*

if(dynamic_cast<pMedicamento>(c->carrito)!=nullptr)
*/