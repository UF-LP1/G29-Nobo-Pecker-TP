#include "Model/ASIST_AUTOM.h"
#include "Model/eFarmaceutico.h"
#include "Model/eCajero.h"
#include "Model/eOrtopedia.h"
#include "Model/eMostrador.h"
#include "Model/ePerfumeria.h"
#include "Model/FARMACIA.h"



int main() {

	//farmacia
	//empleados 
	//productos
	//asist autom
	//cliente

	//construyo nuestra farmacia
	FARMACIA NoboPecker("NoboPecker"); 

	//construyo los empleados
	eMostrador empleadoMostrador("Juan_Perez", "20987122", "2235448020", "juanperez@yahoo.com");
	eCajero cajero("Gonzalo_Gutierres", "21355422", "2477352317", "gonzalogutierres@gmail.com");
	eFarmaceutico farmaceutico("Pepe_Gomez", "20987123",farmaceutico_, "2235448027", "pepegomez@yahoo.com");
	ePerfumeria empleadoPerfumeria("Susana_Oria", "2098777", perfumeria_, "2235448090", "susioria@hotmail.com");
	eOrtopedia empleadoOrtopedia("Esteban_Quito", "17987122",ortopedia_ ,"2238888020", "estebiquito@yahoo.com");
	//construyo los productos
	pOrtopedia productoOrtopedia("vendas_azules",vendas_elasticas);

	pPerfumeria productoPerfumeria("shampoo_violeta", shampoo);
	pMedicamentos medicamento("Ibuprofeno", "dolor_de_cabeza", true);












	return 0;
}