#include "Repuestos.h"

Repuestos::Repuestos()
{
    //ctor
}

Repuestos::Repuestos(Pais _origen, float _costoBasico )
{
    costoBasico = _costoBasico;
    origen = _origen;
}

Repuestos::~Repuestos()
{
    //dtor
}


float Repuestos::costoDeRepuestos ()
{
    float recargo = 0.0;
    switch (origen)
    {
        case Nacional: recargo = 1.1; break;
        case limitrofes: recargo = 1.18; break;
        case America: recargo = 1.25; break;
        case Europa: recargo = 1.28; break;
    }
    float costoRepuesto = (float) costoBasico * recargo;
    return costoRepuesto;
}
