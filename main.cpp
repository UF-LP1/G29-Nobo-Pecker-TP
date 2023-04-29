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
	eMostrador empleadoMostrador("Juan_Perez", "20987122", "2235448020", "juanperez@yahoo.com");
	eCajero cajero("Gonzalo_Gutierres", "21355422", "2477352317", "gonzalogutierres@gmail.com");
	eFarmaceutico farmaceutico("Pepe_Gomez", "20987123",farmaceutico_, "2235448027", "pepegomez@yahoo.com");
	ePerfumeria empleadoPerfumeria("Susana_Oria", "2098777", perfumeria_, "2235448090", "susioria@hotmail.com");
	eOrtopedia empleadoOrtopedia("Esteban_Quito", "17987122",ortopedia_ ,"2238888020", "estebiquito@yahoo.com");
	//construyo los productos
	pOrtopedia productoOrtopedia("vendas_azules",vendas_elasticas);
	productoOrtopedia.set_precio(1000.0);
	productoOrtopedia.set_descuento(10);
	productoOrtopedia.set_stock(50);
	pPerfumeria productoPerfumeria("shampoo_violeta", shampoo);
	productoPerfumeria.set_precio(800.0);
	productoPerfumeria.set_descuento(0);
	productoPerfumeria.set_stock(10);
	pPerfumeria productoPerfumeria("esmalte_rojo", esmalte);
	productoPerfumeria.set_precio(200.0);
	productoPerfumeria.set_descuento(15);
	productoPerfumeria.set_stock(25);
	pMedicamentos medicamento("Ibuprofeno", "dolor_de_cabeza", true);
	medicamento.set_precio(500.0);
	medicamento.set_descuento(0);
	medicamento.set_stock(100);
	//construyo el asistente automatico
	ASIST_AUTOM asistenteAutomatico;
	//construyo un cliente
	CLIENTE cliente("Julieta_Sosa", "44988100", asistenteAutomatico.entregarTicket(),farmaciaP, 2000.0, 10000.0, 0.0, 0.0, "11244665", "juli2002@gmail.com", false, efectivo);













	return 0;
}