/**
 * Project Untitled
 */


#ifndef _RECETA_H
#define _RECETA_H

#include "pMedicamentos.h"

class RECETA {
public:

    const string medico;
    const string fecha;
    const string diagnostico;
    const string dniCliente;
    pMedicamentos medicamento;

    RECETA(string medico, string fecha, string diagnostico, string dniCliente, pMedicamentos medicamento);
    ~RECETA();
    string get_dni();
    pMedicamentos get_medicamento();

};

#endif //_RECETA_H
