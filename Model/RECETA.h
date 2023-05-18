/**
 * Project Untitled
 */


#ifndef _RECETA_H
#define _RECETA_H

#include "pMedicamentos.h"

class RECETA {
private:

    const string medico;
    const string fecha;
    const string diagnostico;
    const string dniCliente;
    const string medicamento;
public:
    RECETA(string medico, string fecha, string diagnostico, string dniCliente, string medicamento);
    ~RECETA();
    string get_dni();
    string get_medicamento();

};

#endif //_RECETA_H
