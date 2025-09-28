#include "Mecanico.h"

Mecanico::Mecanico()
{
    //ctor
}

Mecanico::Mecanico (int _costeDeHoras, int _cantidadDeHoras, float _sueldoBasico)
{
    costeDeHoras = _costeDeHoras;
    cantidadDeHoras = _cantidadDeHoras;
    sueldoBasico = _sueldoBasico;
}

Mecanico::~Mecanico()
{
    //dtor
}

float Mecanico::calculoDeSueldo ()
{
    float Sueldo = (float) (costeDeHoras * cantidadDeHoras) + sueldoBasico;
    return Sueldo;
}
