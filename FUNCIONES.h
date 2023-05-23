#pragma once
#include "Model/ASIST_AUTOM.h"
#include "Model/eFarmaceutico.h"
#include "Model/eCajero.h"
#include "Model/eOrtopedia.h"
#include "Model/eMostrador.h"
#include "Model/ePerfumeria.h"
#include "Model/eLimpieza.h"
#include "Model/FARMACIA.h"
#include<queue>
#include <exception>
using namespace std;

unsigned int inventarCantidades();
array<necesidadCliente, 3> generarNecesidades();
string to_string_metPago(metodoPago metP);






