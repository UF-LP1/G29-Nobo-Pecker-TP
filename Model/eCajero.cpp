/**
 * Project Untitled
 */


#include "eCajero.h"

 /**
  * eCajero implementation
  */


eCajero::eCajero(string na, string dni, string tel, string mail) : EMPLEADO(na, dni, tel, mail) {

}

eCajero::~eCajero() {

}

double eCajero::cobrar(CLIENTE c, FARMACIA f, bool ticketFisico) {

    double monto= 0.0;
    double precio = 0.0;

    //calculo el monto total
    for (int i = 0; i < c.carrito.size(); i++)
    {
        precio = c.carrito[i].get_precio();
        monto = monto + precio * c.cantidades[i];
    }

    //llamo a la funcion pagar de cliente
    metodoPago MP = c.get_metP();
    bool pagoCliente = c.pagar(monto, MP);

    //si no llega a tener la plata suficiente en el metodo que eligio (no se pueden mezclar metodos de pago en mi farmacia), pruebo con los otros
    int i = 0;
    if (!pagoCliente)
    {
        for (i = 0; i < 4; i++)
        {
            c.set_metP((metodoPago)i);
            pagoCliente = c.pagar(monto, MP);
            if (pagoCliente) break;
        }
    }
    if (i == 4) return -1;

    //si sigo en la funcion (cobre) le sumo el monto a los fondos de farmacia
    double nuevosFondos = f.get_fondos() + monto;
    f.set_fondos(nuevosFondos);

    if (ticketFisico)
        cout << "El cliente pago: $" << monto;
    else
    {
        string mailC = get_mail();
        cout << "El ticket se envio por mail";
    }
    return monto;
}