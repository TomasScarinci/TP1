#include "Taller.h"

Taller::Taller()
{
    //ctor
}

Taller::~Taller()
{
    //dtor
}

void Taller::agregarReparacion (Reparaciones& unaReparacion)
{
    misReparaciones.push_back (unaReparacion);
}

float Taller::reparacionMasCara ()
{
    float valorMayor = 0.00;
    float valorVariable = 0.00;
    for (auto t: misReparaciones)
    {
        valorVariable = t.costoReparacion ();
        if (valorVariable > valorMayor)
            valorMayor = valorVariable;
    }
    return valorMayor;
}
