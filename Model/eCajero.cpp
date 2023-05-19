/**
 * Project Untitled
 //*/


#include "eCajero.h"
#include <exception>

 /**
  * eCajero implementation
  */


eCajero::eCajero(string na, string dni, string tel, string mail) : EMPLEADO(na, dni, tel, mail) {

}

eCajero::~eCajero() {

}

float eCajero::cobrar(CLIENTE* cliente, FARMACIA farmacia) {

   
    float monto = 0.0;
    unsigned int descuento = 0;

    //calculo el monto total
    for (int i = 0; i < cliente->carrito.size(); i++)
    {    
        PRODUCTO* actual = &cliente->carrito[i];
        if (dynamic_cast<pMedicamentos*>(actual) != nullptr)
            descuento = dynamic_cast<pMedicamentos*>(actual)->descuento_total(cliente->get_nec());
        else
             descuento = actual->descuento_total(cliente->get_nec());
        monto = monto + (cliente->carrito[i].get_precio()*(100-descuento)/100 )* cliente->cantidades[i]; //regla de 3: si en 100 cobro (100- descuento), en "precio" cobro ("precio*(100-descuento)/100)         
    }
    try {

    //llamo a la funcion pagar de cliente
    metodoPago MP = cliente->get_metP();
    bool pagoCliente = cliente->pagar(monto, MP);

    //si no llega a tener la plata suficiente en el metodo que eligio (no se pueden mezclar metodos de pago en mi farmacia), pruebo con los otros
    int j=0;
    metodoPago aux=(metodoPago)0;
    if (!pagoCliente)
    {
        for (j = 0; j < 4; j++)
        {
            aux=(metodoPago)j;
            pagoCliente = cliente->pagar(monto, aux);
            if (pagoCliente) break;
        }
    }
    if (j == 4) {
        for (int l = 0; l < cliente->carrito.size(); l++) {
            cliente->carrito[l].set_stock(cliente->carrito[l].get_stock() + cliente->cantidades[l]);
        }
        throw exception(); //si no pudo pagar con ninguno de los otros metodos, restockeo mi farmacia y lanzo una excepcion
    }
    else cliente->set_metP(aux);
    }
    catch(exception& NoPago){
        cout << "El cliente "<<cliente->get_nro()<<" no tiene dinero suficiente para completar la transacción";
        return -1; //salgo de la funcion
    }

    //si sigo en la funcion (ya cobre) le sumo el monto a los fondos de farmacia
    float nuevosFondos = farmacia.get_fondos() + monto;
    farmacia.set_fondos(nuevosFondos);

    //segun la preferencia del ticket de la persona, imprimo en pantalla el monto o se lo envio por mail
    if (cliente->get_prefTicket()) {
        cout << "Cliente: " << cliente->get_nro() << endl;
        for (int y = 0; y < cliente->carrito.size(); y++) {
            cout << "Producto: " << cliente->carrito[y].nombre << '\t' << "Precio parcial: $" << cliente->carrito[y].get_precio() << '\t' << "Cantidad: " << cliente->cantidades[y] << '\t' << "Precio total: $" << (cliente->carrito[y].get_precio()*cliente->cantidades[y])<<endl;
        }
        cout<< "Importe total: $" << monto << endl;

    }
        
    else
    {
        string mailC = get_mail(); //
        cout << "El ticket se envio por mail";
        //enviar por mail
    }
    return monto;
    
}


