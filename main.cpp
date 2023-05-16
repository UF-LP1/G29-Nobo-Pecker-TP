#include "Model/ASIST_AUTOM.h"
#include "Model/eFarmaceutico.h"
#include "Model/eCajero.h"
#include "Model/eOrtopedia.h"
#include "Model/eMostrador.h"
#include "Model/ePerfumeria.h"
#include "Model/eLimpieza.h"
#include "Model/FARMACIA.h"

array<necesidadCliente, 3> generarNecesidades();

int main() {

	//construyo nuestra farmacia
	FARMACIA NoboPecker("NoboPecker");
	NoboPecker.set_fondos(100000.0);

	//construyo los empleados
	eCajero cajero("Gonzalo_Gutierres", "21355422", "2477352317", "gonzalogutierres@gmail.com");
	eFarmaceutico farmaceutico("Pepe_Gomez", "20987123", farmaceutico_, "2235448027", "pepegomez@yahoo.com");
	ePerfumeria empleadoPerfumeria("Susana_Oria", "2098777", perfumeria_, "2235448090", "susioria@hotmail.com");
	eOrtopedia empleadoOrtopedia("Esteban_Quito", "17987122", ortopedia_, "2238888020", "estebiquito@yahoo.com");
	eMostrador empleadoMostrador("Alma Marquez", "44111222", "232446662", "almamarquez2003@gmail.com");
	eLimpieza empleadoLimpieza("Lorenzo Mazzante", "44555666", "233444222", "lorenmazzante@gmail.com");


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
	pGolosinas golosina1("chocolate_blanco", chocolate);
	golosina1.set_precio(150.0);
	golosina1.set_stock(50);
	pGolosinas golosina2("chupetin_frutilla", chupetin);
	golosina2.set_precio(100.0);
	golosina2.set_stock(5);

	//construyo el asistente automatico
	ASIST_AUTOM asistenteAutomatico;

	//construyo un cliente

	array<necesidadCliente, 3> necesidades;
	necesidades = generarNecesidades();
	
	CLIENTE *cliente = new CLIENTE("Julieta_Sosa", "44988100", asistenteAutomatico.entregarTicket(), necesidades, 2000.0, 15000.0, 0.0, 0.0, "11244665", "juli2002@gmail.com", false, efectivo);
	
	for (int a = 0; a < 3; a++)
	{	
		tipoEmpleado empleadoActual = empleadoMostrador.atenderCliente(cliente, a);
		if (empleadoActual == unspecifiedTE)
			break;
		vector<PRODUCTO> productos;
		vector<unsigned int> cantidades;
		switch (empleadoActual)
		{
		case farmaceutico_:{
			//agrego los medicamentos a la lista de productos que quiero agregar al carrito
			productos.push_back(medicamento1);
			productos.push_back(medicamento2);
			//agrego la cantidad que quiere de cada uno a la lista de cantidades
			cantidades.push_back(1);
			cantidades.push_back(1);
			//el farmaceutico me los vende
			farmaceutico.vender(cliente, productos, cantidades);

			break;
			}
		case perfumeria_: {
			//agrego los productos de perfumeria a la lista de productos que quiero agregar al carrito
			productos.push_back(productoPerfumeria1);
			productos.push_back(productoPerfumeria2);
			//agrego la cantidad que quiere de cada uno a la lista de cantidades
			cantidades.push_back(1);
			cantidades.push_back(3);
			//el empleado de perfumeria me las vende
			empleadoPerfumeria.vender(cliente, productos, cantidades);

			break;
		}
		case ortopedia_: {
			//agrego las vendas a la lista de productos que quiero agregar al carrito
			productos.push_back(productoOrtopedia);
			//agrego la cantidad de vendas que quiere a la lista de cantidades
			cantidades.push_back(1);
			//el empleado de ortopedia me las vende
			empleadoOrtopedia.vender(cliente, productos, cantidades);

			break;
		}
		default: break;
		}

	}

	//cuando estaba por ir a pagar vio las golosinas y la tento un chocolate y unos chupetines asi que se va a comprar un chocolate y unos chupetines
	vector<pGolosinas> listaGolosinas;
	listaGolosinas.push_back(golosina1);
	listaGolosinas.push_back(golosina2);
	vector<unsigned int> cantidadesGolosinas;
	cantidadesGolosinas.push_back(1);
	cantidadesGolosinas.push_back(3);
	cliente->comprarGolosinas(listaGolosinas, cantidadesGolosinas);

	//ahora que tiene el carrito lleno va a ir a que le cobren
	cajero.cobrar(cliente, NoboPecker, cliente->get_prefTicket());

	delete cliente;

	//pero antes de cerrar la farmacia hay que limpiarla 
	empleadoLimpieza.limpiar(NoboPecker);

	//ahora si se cierra la farmacia

	return 0;
}

array<necesidadCliente, 3> generarNecesidades() {
	srand(NULL);
	int cantidad = (rand() % 3) + 1;// me devuelve 1, 2 o 3 para ver cuantas necesidades va a tener (no puedo tener más de una obra social, etc)
	array<necesidadCliente, 3> necesidades;
	switch (cantidad) {
	case 1: {
		necesidades[0] = necesidadCliente(rand() % 5);
		necesidades[1] = necesidades[2] = unspecified;
		break;
	}
	case 2: {
		necesidades[0] = necesidadCliente(rand() % 5);
		if (necesidades[0] == farmaciaOS || necesidades[0] == farmaciaP || necesidades[0] == PAMI) {
			necesidades[1] = necesidadCliente(rand() % 2 + 3);//si ya tengo una obra social agrego uno de los otros dos 
		}
		else do {
			necesidades[1] = necesidadCliente(rand() % 5);
		} while (necesidades[1] == necesidades[0]);
		necesidades[2] = unspecified;
		break;
	}
	case 3: {
		necesidades[0] = ortopedia;
		necesidades[1] = perfumeria;
		necesidades[2] = necesidadCliente(rand() % 3);
	}

	}
	return necesidades;
}




