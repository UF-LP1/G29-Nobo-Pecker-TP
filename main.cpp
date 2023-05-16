#include "Model/ASIST_AUTOM.h"
#include "Model/eFarmaceutico.h"
#include "Model/eCajero.h"
#include "Model/eOrtopedia.h"
#include "Model/eMostrador.h"
#include "Model/ePerfumeria.h"
#include "Model/FARMACIA.h"



int main() {

	//construyo nuestra farmacia
	FARMACIA NoboPecker("NoboPecker");
	NoboPecker.set_fondos(100000.0);

	//construyo los empleados
	eCajero cajero("Gonzalo_Gutierres", "21355422", "2477352317", "gonzalogutierres@gmail.com");
	eFarmaceutico farmaceutico("Pepe_Gomez", "20987123", farmaceutico_, "2235448027", "pepegomez@yahoo.com");
	ePerfumeria empleadoPerfumeria("Susana_Oria", "2098777", perfumeria_, "2235448090", "susioria@hotmail.com");
	eOrtopedia empleadoOrtopedia("Esteban_Quito", "17987122", ortopedia_, "2238888020", "estebiquito@yahoo.com");


	/*
	 

	
	

	//construyo los productos
	//por default los decuentos se inicializan en 0 como los demas atributos, asi que los productos que no tienen un set descuento es porque no tienen descuento
	pOrtopedia productoOrtopedia("vendas_azules",vendas_elasticas);
	productoOrtopedia.set_precio(1000.0);
	productoOrtopedia.set_descuento(10);
	productoOrtopedia.set_stock(50);
	pPerfumeria productoPerfumeria1("shampoo_violeta", shampoo);
	productoPerfumeria1.set_precio(800.0);
	productoPerfumeria1.set_stock(10);
	pPerfumeria productoPerfumeria2("esmalte_rojo", esmalte);
	productoPerfumeria2.set_precio(200.0);
	productoPerfumeria2.set_descuento(15);
	productoPerfumeria2.set_stock(25);
	pMedicamentos medicamento1("Ibuprofeno", "dolor_de_cabeza", true);
	medicamento1.set_precio(500.0);
	medicamento1.set_descuento(15);
	medicamento1.set_stock(100);
	pMedicamentos medicamento2("Actron", "dolor_muscular", true);
	medicamento2.set_precio(600.0);
	medicamento2.set_stock(100);
	pGolosinas golosina("chocolate_blanco", chocolate);
	golosina.set_precio(150.0);
	golosina.set_stock(50);

	//construyo el asistente automatico
	ASIST_AUTOM asistenteAutomatico;

	//construyo un cliente
	
	CLIENTE *cliente = new CLIENTE("Julieta_Sosa", "44988100", asistenteAutomatico.entregarTicket(), farmaciaP, 2000.0, 15000.0, 0.0, 0.0, "11244665", "juli2002@gmail.com", false, efectivo);
	
	//hago directamente los metodos de vender/pagar/cobrar y no el simulacro de farmacia entero porque nada mas estoy probando si funciona la parte de cobrar
	
	//primero se venden los productos de perfumeria y ortopedia para que en la funcion cobrar no se pierda el descuento de la obra social/PAMI si llega a tener uno
	//para el proximo TP estaria bueno consultar si podemos hacer un vector de necesidad del cliente para no tener que cambiar el orden con el que la persona compra los productos
	
	//agrego las vendas a una lista de productos de ortopedia
	vector<pOrtopedia> listaOrtopedia;
	listaOrtopedia.push_back(productoOrtopedia);
	//agrego la cantidad de vendas que quiere a una lista de cantidades
	vector<unsigned int> cantidadesOrtopedia;
	cantidadesOrtopedia.push_back(1);
	//el empleado de ortopedia me las vende
	empleadoOrtopedia.venderProducto(cliente, listaOrtopedia, cantidadesOrtopedia);
	
	//aca se le preguntaria al cliente si desea agregar algo mas al carrito y segun lo que conteste hacer un set de necesidadCliente para redirigirlo a otra seccion de la farmacia y que siga comprando
	//pero como no es necesario para la funcion cobrar lo vamos a implementar cuando hagamos el simulacro entero

	//agrego los productos de perfumeria a una lista
	vector<pPerfumeria> listaPerfumeria;
	listaPerfumeria.push_back(productoPerfumeria1);
	listaPerfumeria.push_back(productoPerfumeria2);
	//agrego la cantidad que quiere de cada uno a una lista de cantidades
	vector<unsigned int> cantidadesPerfumeria;
	cantidadesPerfumeria.push_back(1);
	cantidadesPerfumeria.push_back(3);
	//el empleado de perfumeria me las vende
	empleadoPerfumeria.venderProducto(cliente, listaPerfumeria, cantidadesPerfumeria);

	//''
	
	//agrego los medicamentos a una lista de medicamentos
	vector<pMedicamentos> listaMedicamentos;
	listaMedicamentos.push_back(medicamento1);
	listaMedicamentos.push_back(medicamento2);
	//agrego la cantidad que quiere de cada uno a una lista de cantidades
	vector<unsigned int> cantidadesMedicamentos;
	cantidadesMedicamentos.push_back(1);
	cantidadesMedicamentos.push_back(1);
	//el farmaceutico me los vende
	farmaceutico.venderMedicamento(cliente, listaMedicamentos, cantidadesMedicamentos);

	//cuando estaba por ir a pagar vio las golosinas y la tento un chocolate asi que se va a comprar un chocolate
	vector<pGolosinas> listaGolosinas;
	listaGolosinas.push_back(golosina);
	vector<unsigned int> cantidadesGolosinas;
	cantidadesGolosinas.push_back(1);
	cliente->comprarGolosinas(listaGolosinas, cantidadesGolosinas);

	//ahora que tiene el carrito lleno va a ir a que le cobren
	cajero.cobrar(cliente, NoboPecker, cliente->get_prefTicket());

	delete cliente;

	
	return 0;
	*/
}