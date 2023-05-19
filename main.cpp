#include "FUNCIONES.h"



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

	//construyo una fila de clientes cliente
		queue<CLIENTE*>filaClientes;
	
	//genero un array de necesidades para cada cliente
	array<necesidadCliente, 3> necesidades1 = generarNecesidades();
	array<necesidadCliente, 3>necesidades2=generarNecesidades();
	array<necesidadCliente, 3>necesidades3 = generarNecesidades();
	
	//construyo los clientes
	CLIENTE *cliente1 = new CLIENTE("Julieta_Sosa", "44988100", asistenteAutomatico.entregarTicket(), necesidades1, 2000.0, 15000.0, 0.0, 0.0, "11244665", "juli2002@gmail.com", false, efectivo);
	CLIENTE* cliente2 = new CLIENTE("Carlos_Baute", "34567823", asistenteAutomatico.entregarTicket(), necesidades2, 0.0, 0.0, 0.0, 0.0, "2235448020", "carlitosbaute@gmail.com", false, credito);
	CLIENTE* cliente3 = new CLIENTE("Maria_Esclavitud", "12345678", asistenteAutomatico.entregarTicket(), necesidades3, 2000.0, 15000.0, 700.0, 8000.0, "223154557475", "abuela_mari@gmail.com", true, debito);
	
	//agrego los clientes a la queue
	filaClientes.push(cliente1);
	filaClientes.push(cliente2);
	filaClientes.push(cliente3);
	size_t tamanioFila = filaClientes.size();

	//atiendo los clientes en la fila
	for (int i = 0; i < tamanioFila; i++) {
		
		CLIENTE* cliente = filaClientes.front();

		for (int a = 0; a < 3; a++)
		{
			tipoEmpleado empleadoActual = empleadoMostrador.atenderCliente(cliente, a);
			if (empleadoActual == unspecifiedTE)
				break;
			vector<PRODUCTO> productos;
			vector<unsigned int> cantidades;
			switch (empleadoActual)
			{
			case farmaceutico_: {
				//agrego los medicamentos a la lista de productos que quiero agregar al carrito
				productos.push_back(medicamento1);
				productos.push_back(medicamento2);
				//agrego la cantidad que quiere de cada uno a la lista de cantidades
				cantidades.push_back(inventarCantidades());
				cantidades.push_back(inventarCantidades());
				//el farmaceutico me los vende
				farmaceutico.vender(cliente, productos, cantidades);

				break;
			}
			case perfumeria_: {
				//agrego los productos de perfumeria a la lista de productos que quiero agregar al carrito
				productos.push_back(productoPerfumeria1);
				productos.push_back(productoPerfumeria2);
				//agrego la cantidad que quiere de cada uno a la lista de cantidades
				cantidades.push_back(inventarCantidades());
				cantidades.push_back(inventarCantidades());
				//el empleado de perfumeria me las vende
				empleadoPerfumeria.vender(cliente, productos, cantidades);

				break;
			}
			case ortopedia_: {
				//agrego las vendas a la lista de productos que quiero agregar al carrito
				productos.push_back(productoOrtopedia);
				//agrego la cantidad de vendas que quiere a la lista de cantidades
				cantidades.push_back(inventarCantidades());
				//el empleado de ortopedia me las vende
				empleadoOrtopedia.vender(cliente, productos, cantidades);

				break;
			}
			default: break;
			}

		}
		
		//cuando estaba por ir a pagar vio las golosinas y la tento un chocolate y unos chupetines asi que se va a comprar un chocolate y unos chupetines
		int quiereGolosinas = rand() % 2;
		if (quiereGolosinas == 0) { //si me devuelven todos 0 es porque se arrepintio de comprar golosinas, que se le va a hacer
			vector<pGolosinas> listaGolosinas;
			listaGolosinas.push_back(golosina1);
			listaGolosinas.push_back(golosina2);
			vector<unsigned int> cantidadesGolosinas;
			cantidadesGolosinas.push_back(inventarCantidades());
			cantidadesGolosinas.push_back(inventarCantidades());
			cliente->comprarGolosinas(listaGolosinas, cantidadesGolosinas);
		}
		
		//ahora que tiene el carrito lleno va a ir a que le cobren
		cajero.cobrar(cliente, NoboPecker);
		
		//una vez que termino de pagar, lo saco de la fila de clientes para seguir con el proximo
		filaClientes.pop(); 
		//delete cliente;
	}
	delete cliente1;
	delete cliente2;
	delete cliente3;

	string nombreApellido, dni, telefono, mail;
	cout << "Ingrese su nombre y apellido: " << endl;
	cin >> nombreApellido;
	cout << "Ingrese su DNI: " << endl;
	cin >> dni;
	cout << "Ingrese su telefono: " << endl;
	cin >> telefono;
	cout << "Ingrese su mail: " << endl;
	cin >> mail;
	cout << "Seleccione las secciones de la farmacia que desea visitar" << endl << "1- FARMACIA CON OBRA SOCIAL" << endl << "2-FARMACIA PARTICULAR" << endl << "3-FARMACIA CON PAMI" << endl << "4-PERFUMERIA" << endl << "5-ORTOPEDIA" << endl << "6-No deseo seleccionar mas secciones";;
	array<necesidadCliente, 3> necesidadUsuario{};
	for (int h = 0; h < 3; h++)
	{
		int necesidadActual;
		cin >> necesidadActual;
		do
		{
			try {
				if (necesidadActual == 6)
				{
					for (int f = h; f < 3; f++)
						necesidadUsuario[f] = unspecifiedNC;
					break;
				}

				if (h != 0) {
					for (int g = h - 1; g >= 0; g--)
					{
						//si ingresa una seccion repetida o 2 veces una farmacia lanzo una excepcion
						if (necesidadActual == necesidadUsuario[g] || ((necesidadActual >= 1 && necesidadActual <= 3) && (necesidadUsuario[g] >= 1 && necesidadUsuario[g] <= 3)))
							throw exception();
					}
				}
				else
					necesidadUsuario[h] = necesidadCliente(necesidadActual - 1);
			}
			catch(exception& SeccionRepetida){ 
				cout << "Esa seccion ya fue ingresada, por favor elija otra: " << endl;
				h--; //para que vuelva a preguntarlo, asi siempre tengo 3 distintas
			}
		} while (necesidadActual < 1 || necesidadActual>6);
	}
	
	float efectivoU, appU, debitoU, creditoU;
	cout << "Ingrese su monto en efectivo: " << endl;
	cin >> efectivoU;
	cout << "Ingrese su monto en la aplicacion del celular: " << endl;
	cin >> appU;
	cout << "Ingrese su monto en tarjeta de debito: " << endl;
	cin >> debitoU;
	cout << "Ingrese su monto en tarjeta de credito: " << endl;
	cin >> creditoU;
	
	int ticketU;
	do {
	cout << "Si desea recibir ticket fisico elija 1, si desea recibir ticket digital elija 0: " << endl;
	cin >> ticketU;
	} while (!(ticketU == 0 || ticketU == 1));
	
	int prefMetPago;
	do {
	cout << "Ingrese su metodo de pago de preferencia: " << endl << "1- EFECTIVO" << endl << "2- CREDITO" << endl << "3- DEBITO" << endl << "4- APP" << endl;
	cin >> prefMetPago;
	} while (!(prefMetPago >= 1 && prefMetPago <= 4));

	CLIENTE* usuario = new CLIENTE(nombreApellido, dni, asistenteAutomatico.entregarTicket(), necesidadUsuario, efectivoU, appU, debitoU, creditoU, telefono, mail, bool(ticketU), metodoPago(prefMetPago - 1));
	






	delete usuario;
	//pero antes de cerrar la farmacia hay que limpiarla 
	empleadoLimpieza.limpiar(NoboPecker);

	//ahora si se cierra la farmacia

	return 0;
}

