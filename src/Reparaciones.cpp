#include "Reparaciones.h"

Reparaciones::Reparaciones()
{
    //ctor
}

Reparaciones::~Reparaciones()
{
    //dtor
}

void Reparaciones::agregarRepuesto (Repuestos& losRepuestos)
{
    misRepuestos.push_back (losRepuestos);
}

void Reparaciones::asignarMecanico (Mecanico& elMecanico)
{
    mecanico = &elMecanico;
}

float Reparaciones::totalCostoRepuestos ()
{
    float Total = 0.00;
    for (auto i: misRepuestos)
        Total += i.costoDeRepuestos ();
    return Total;
}

float Reparaciones::costoReparacion()
{
    float valorRepuesto = 0.00;
    for (auto r: misRepuestos)
        valorRepuesto += r.costoDeRepuestos ();
    float costoMecanico = mecanico -> calculoDeSueldo ();
    float subTotal = costoMecanico + valorRepuesto;
    return subTotal * comision;
}
