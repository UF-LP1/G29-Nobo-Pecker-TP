#include "FUNCIONES.h"



int main() {
	cout << "A PARTIR DE AHORA COMIENZA LA SECCION NO INTERACTIVA DE LA FARMACIA:" << endl<<endl;
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
	pOrtopedia* productoOrtopedia1= new pOrtopedia("vendas_azules", vendas_elasticas);
	productoOrtopedia1->set_precio(1000.0);
	productoOrtopedia1->set_descuento(10);
	productoOrtopedia1->set_stock(50);
	pOrtopedia* productoOrtopedia2=new pOrtopedia("cabestrillos", cabestrillos);
	productoOrtopedia2->set_precio(1500.0);
	productoOrtopedia2->set_stock(10);
	pPerfumeria* productoPerfumeria1= new pPerfumeria("shampoo_violeta", shampoo);
	productoPerfumeria1->set_precio(800.0);
	productoPerfumeria1->set_stock(10);
	pPerfumeria* productoPerfumeria2=new pPerfumeria("esmalte_rojo", esmalte);
	productoPerfumeria2->set_precio(200.0);
	productoPerfumeria2->set_descuento(15);
	productoPerfumeria2->set_stock(25);
	pMedicamentos* medicamento1=new pMedicamentos("Ibuprofeno", "dolor_de_cabeza", true);
	medicamento1->set_precio(500.0);
	medicamento1->set_descuento(15);
	medicamento1->set_stock(100);
	pMedicamentos* medicamento2=new pMedicamentos("Actron", "dolor_muscular", true);
	medicamento2->set_precio(600.0);
	medicamento2->set_stock(100);
	pGolosinas* golosina1=new pGolosinas("chocolate_blanco", chocolate);
	golosina1->set_precio(150.0);
	golosina1->set_stock(50);
	pGolosinas* golosina2=new pGolosinas("chupetin_frutilla", chupetin);
	golosina2->set_precio(100.0);
	golosina2->set_stock(5);

	//construyo el asistente automatico
	ASIST_AUTOM asistenteAutomatico;

	//construyo una fila de clientes cliente
	queue<CLIENTE*>filaClientes;

	//genero un array de necesidades para cada cliente

	array<necesidadCliente, 3> necesidades1 = generarNecesidades();
	array<necesidadCliente, 3>necesidades2 = generarNecesidades();
	array<necesidadCliente, 3>necesidades3 = generarNecesidades();

	//construyo los clientes
	CLIENTE* cliente1 = new CLIENTE("Julieta_Sosa", "44988100", asistenteAutomatico.entregarTicket(), necesidades1, 2000.0, 15000.0, 0.0, 0.0, "11244665", "juli2002@gmail.com", false, efectivo);
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
			vector<PRODUCTO*> productos;
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
				//el empleado de perfumeria me los vende
				empleadoPerfumeria.vender(cliente, productos, cantidades);

				break;
			}
			case ortopedia_: {
				//agrego los productos de ortopedia a la lista de productos que quiero agregar al carrito
				productos.push_back(productoOrtopedia1);
				productos.push_back(productoOrtopedia2);
				//agrego la cantidad que quiere de cada uno a la lista de cantidades
				cantidades.push_back(inventarCantidades());
				cantidades.push_back(inventarCantidades());
				//el empleado de ortopedia me los vende
				empleadoOrtopedia.vender(cliente, productos, cantidades);

				break;
			}
			default: break;
			}

		}

		//cuando estaba por ir a pagar vio las golosinas y la tento un chocolate y unos chupetines asi que se va a comprar un chocolate y unos chupetines
		int quiereGolosinas = rand() % 2;
		if (quiereGolosinas == 0) { //si me devuelven todos 0 es porque se arrepintio de comprar golosinas, que se le va a hacer
			vector<pGolosinas*> listaGolosinas;
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
	}

	//delete clientes
	delete cliente1;
	delete cliente2;
	delete cliente3;



	//ahora comenzamos la parte interactiva

	//ACLARACION: todos los do-while en realidad tendrian que ser excepciones que avisen que tipo de error se cometio, pero como no son obligatorias en este TP,  las vamos a implementar para el TP final
	cout <<endl<< "A PARTIR DE AHORA COMIENZA LA SECCION INTERACTIVA DE LA FARMACIA <3:" << endl<<endl;
	string nombreApellido, dni, telefono, mail;
	cout << "Ingrese su nombre y apellido: (sin espacios)" << endl;
	cin >> nombreApellido;
	cout << "Ingrese su DNI: " << endl;
	cin >> dni;
	cout << "Ingrese su telefono: " << endl;
	cin >> telefono;
	cout << "Ingrese su mail: " <<endl;
	cin >> mail;
	cout << endl;
	cout << "Secciones de la farmacia:" << endl << "1-FARMACIA CON OBRA SOCIAL" << endl << "2-FARMACIA PARTICULAR" << endl << "3-FARMACIA CON PAMI" << endl << "4-PERFUMERIA" << endl << "5-ORTOPEDIA" << endl << "6-No deseo seleccionar mas secciones" << endl;
	array<necesidadCliente, 3> necesidadUsuario;
	
	//llenamos el array de necesidades del usuario
	int h = 0;
	bool MasNecesidades = true;
	for (h= 0; h < 3; h++)
	{
		cout << endl << "Seleccione una seccion: " << endl;
		bool flag=true;
		int necesidadActual;
		do
		{
			cin >> necesidadActual;
			
			if (necesidadActual == 6) {
				for(int e=h;e<3;e++)
				{ 
					necesidadUsuario[e] = unspecifiedNC;
				}
				MasNecesidades = false;
				break;
			}
				
			try {
				if (h != 0) {
					for (int g = h - 1; g >= 0; g--)
					{
						//si ingresa una seccion repetida o 2 veces una farmacia lanzo una excepcion
						if (((necesidadActual >= 1 && necesidadActual <= 3) && ((int)necesidadUsuario[g] >= 0 && (int)necesidadUsuario[g] <= 2)) || (necesidadActual-1) == (int)necesidadUsuario[g])
							flag = false;
					}
					if (!flag) throw exception();
				}
					if(flag) necesidadUsuario[h] = necesidadCliente(necesidadActual - 1);
			}
			catch (exception& SeccionRepetida) {
				cout << "Esa seccion ya fue ingresada, por favor elija otra: " << endl;
				h--; //para que vuelva a preguntarlo, asi siempre tengo 3 distintas
			}
			if (necesidadActual < 1 || necesidadActual > 6)
				cout << "Seccion no valida, por favor ingrese otra: " << endl;
		} while (necesidadActual < 1 || necesidadActual > 6);
		if (!MasNecesidades)
			break;
	}
	if (necesidadUsuario[0]==unspecifiedNC)
	{
		cout << endl << "El usuario no desea ingresar a ninguna seccion de la farmacia, termino la compra"<< endl;
		return 0;
	}
			
	//llenamos la billetera del usuario
	float efectivoU, appU, debitoU, creditoU;
	cout <<endl<< "Ingrese su monto en efectivo: " << endl;
	cin >> efectivoU;
	cout << "Ingrese su monto en la aplicacion del celular: " << endl;
	cin >> appU;
	cout << "Ingrese su monto en tarjeta de debito: " << endl;
	cin >> debitoU;
	cout << "Ingrese su monto en tarjeta de credito: " << endl;
	cin >> creditoU;

	int ticketU;
	do {
		cout <<endl<< "Si desea recibir ticket fisico elija 1, si desea recibir ticket digital elija 0: " << endl;
		cin >> ticketU;
		cout << endl;
	} while (!(ticketU == 0 || ticketU == 1));

	int prefMetPago;
	do {
		cout << "Ingrese su metodo de pago de preferencia: " << endl << "1- EFECTIVO" << endl << "2- CREDITO" << endl << "3- DEBITO" << endl << "4- APP" << endl;
		cin >> prefMetPago;
	} while (!(prefMetPago >= 1 && prefMetPago <= 4));

	CLIENTE* usuario = new CLIENTE(nombreApellido, dni, asistenteAutomatico.entregarTicket(), necesidadUsuario, efectivoU, appU, debitoU, creditoU, telefono, mail, bool(ticketU), metodoPago(prefMetPago - 1));

	cout <<endl <<"Ahora elija los productos que desea comprar: " << endl;

	int productoActual;
	int cantidadActual;
	bool YaCompro1, YaCompro2;

	//el usuario realiza su compra de los productos disponibles (los ya instanciados:))
	for (int b = 0; b < 3; b++) {
		bool sigueQueriendoProductos = true;

		vector <PRODUCTO*> carritoUsuario;
		vector <unsigned int> cantidadesUsuario;

		switch (usuario->get_nec()[b]) {
		case perfumeria: { 
			cout << endl << "-------------------------PERFUMERIA----------------------------" << endl;
			YaCompro1 = false; //para que no me ingrese el mismo producto por separado
			YaCompro2 = false;
			do {
				cout << "Ingrese el producto a eleccion: " << endl << "1-SHAMPOO VIOLETA: $"<<productoPerfumeria1->get_precio() << endl << "2-ESMALTE ROJO: $" <<productoPerfumeria2->get_precio() << endl << "3-NO DESEO MAS PRODUCTOS DE ESTA SECCION" << endl;
				cin >> productoActual;
				
				switch (productoActual) {
				case 1: {
					if (!YaCompro1)
					{
						do {
							cout << "Ingrese la cantidad de ejemplares: " << endl;
							cin >> cantidadActual;

						} while (cantidadActual <= 0);
						carritoUsuario.push_back(productoPerfumeria1);
						cantidadesUsuario.push_back(cantidadActual);
					}
					else cout << "Ya compro este producto"<<endl;
					YaCompro1 = true;
					break;
				}
				case 2: {
					if (!YaCompro2)
					{
						do {
							cout << "Ingrese la cantidad de ejemplares: " << endl;
							cin >> cantidadActual;

						} while (cantidadActual <= 0);
						carritoUsuario.push_back(productoPerfumeria2);
						cantidadesUsuario.push_back(cantidadActual);
					}
					else cout << "Ya compro este producto"<<endl;
					YaCompro2 = true;
					break;
				}
				default:
					break;
				}
			} while (productoActual!=3);
			empleadoPerfumeria.vender(usuario, carritoUsuario, cantidadesUsuario);
			break;
		}
		case ortopedia: { 
			cout << endl << "-------------------------ORTOPEDIA----------------------------" << endl;
			YaCompro1 = false; 
			YaCompro2 = false;
			do {
				cout << "Ingrese el producto a eleccion: " << endl << "1-VENDAS AZULES: $"<<productoOrtopedia1->get_precio() << endl << "2-CABESTRILLOS: $" <<productoOrtopedia2->get_precio() << endl << "3-NO DESEO MAS PRODUCTOS DE ESTA SECCION" << endl;
				cin >> productoActual;
				
				switch (productoActual) {
				case 1: {
					if (!YaCompro1)
					{
						do {
							cout << "Ingrese la cantidad de ejemplares: " << endl;
							cin >> cantidadActual;

						} while (cantidadActual <= 0);
						carritoUsuario.push_back(productoOrtopedia1);
						cantidadesUsuario.push_back(cantidadActual);
					}
					else cout << "Ya compro este producto"<<endl;
					YaCompro1 = true;
					break;
				}
				case 2: {
					if (!YaCompro2)
					{
						do {
							cout << "Ingrese la cantidad de ejemplares: " << endl;
							cin >> cantidadActual;

						} while (cantidadActual <= 0);
						carritoUsuario.push_back(productoOrtopedia2);
						cantidadesUsuario.push_back(cantidadActual);
					}
					else cout << "Ya compro este producto"<<endl;
					YaCompro2 = true;
					break;
				}
				default:
					break;
				}
				
			} while (productoActual != 3);
			empleadoOrtopedia.vender(usuario, carritoUsuario, cantidadesUsuario);
			break;
		}
		case unspecifiedNC: { 
			sigueQueriendoProductos = false;
			break;
		}
		default: {//alguna farmacia
			cout << endl << "-------------------------FARMACIA----------------------------" << endl;
			YaCompro1 = false;
			YaCompro2 = false;
			do {
				cout << "Ingrese el producto a eleccion: " << endl << "1-IBUPROFENO: $"<<medicamento1->get_precio() << endl << "2-ACTRON: $"<<medicamento2->get_precio()<< endl << "3-NO DESEO MAS PRODUCTOS DE ESTA SECCION" << endl;
				cin >> productoActual;
				
				switch (productoActual) {
				case 1: {
					if (!YaCompro1)
					{
						do {
							cout << "Ingrese la cantidad de ejemplares: " << endl;
							cin >> cantidadActual;

						} while (cantidadActual <= 0);
						carritoUsuario.push_back(medicamento1);
						cantidadesUsuario.push_back(cantidadActual);
					}
					else cout << "Ya compro este producto"<<endl;
					YaCompro1 = true;
					break;
				}
				case 2: {
					if (!YaCompro2)
					{
						do {
							cout << "Ingrese la cantidad de ejemplares: " << endl;
							cin >> cantidadActual;

						} while (cantidadActual <= 0);
						carritoUsuario.push_back(medicamento2);
						cantidadesUsuario.push_back(cantidadActual);
					}
					else cout << "Ya compro este producto"<<endl;
					YaCompro2 = true;
					break;
				}
				default:
					break;
				}
			} while (productoActual!=3);
			farmaceutico.vender(usuario, carritoUsuario, cantidadesUsuario);
			break;
		}
		}

		if (!sigueQueriendoProductos)
			break;
	}

	int quiereGolosinasUsuario;
	do {
		cout <<endl <<"Ingrese 1 si desea comprar golosinas o 0 si no: " << endl;
		cin >> quiereGolosinasUsuario;

	} while (quiereGolosinasUsuario != 0 && quiereGolosinasUsuario != 1);
	if ((bool(quiereGolosinasUsuario))) {
		vector <pGolosinas*> golosinasUsuario;
		vector <unsigned int> cantGolosinasU;
		cout << endl << "-------------------------GOLOSINAS----------------------------" << endl;
		do
		{
		cout << "Ingrese las golosinas que desea: " << endl << "1-CHOCOLATE BLANCO: $"<<golosina1->get_precio() << endl << "2-CHUPETIN DE FRUTILLA: $"<<golosina2->get_precio() << endl << "3-NO DESEO MAS GOLOSINAS" << endl;
		cin >> productoActual;

		YaCompro1 = false;
		YaCompro2 = false;
		switch (productoActual) {
		case 1: {
			if (!YaCompro1)
			{
				do{
					cout << "Ingrese la cantidad de ejemplares: " << endl;
					cin >> cantidadActual;
				} while (cantidadActual <= 0);
			golosinasUsuario.push_back(golosina1);
			cantGolosinasU.push_back(cantidadActual);
			}
			else cout << "Ya compro este producto" << endl;
			YaCompro1 = true;

			break;
		}
		case 2: {
			if (!YaCompro2)
			{
				do {
					cout << "Ingrese la cantidad de ejemplares: " << endl;
					cin >> cantidadActual;
				} while (cantidadActual <= 0);
				golosinasUsuario.push_back(golosina2);
				cantGolosinasU.push_back(cantidadActual);
			}
			else cout << "Ya compro este producto" << endl;
			YaCompro2 = true;
			break;
		}
		default:
			break;
		}
		} while (productoActual!=3);
		usuario->comprarGolosinas(golosinasUsuario, cantGolosinasU);
	}
	cajero.cobrar(usuario, NoboPecker);

	//elimino todo lo dinamico
	delete usuario;
	delete productoOrtopedia1;
	delete productoOrtopedia2;
	delete productoPerfumeria1;
	delete productoPerfumeria2;
	delete medicamento1;
	delete medicamento2;
	delete golosina1;
	delete golosina2;

	//pero antes de cerrar la farmacia hay que limpiarla 
	empleadoLimpieza.limpiar(NoboPecker);

	//ahora si se cierra la farmacia

	return 0;
}

