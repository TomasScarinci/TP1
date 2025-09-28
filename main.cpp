#include <iostream>
#include "Taller.h"
#include "Mecanico.h"
#include "Repuestos.h"
#include "Reparaciones.h"

using namespace std;

int main()
{
    //Asigno 2 mecanicos
    Mecanico unMecanico (500.0, 4, 25.4);
    Mecanico otroMecanico (500.0, 6, 30.2);

    //Creo 3 repuestos
    Repuestos unRepuesto (Pais::Nacional, 100.0);
    Repuestos otroRepuesto (Pais::Nacional, 250.0);
    Repuestos tercerRepuesto (Pais::Nacional, 500.5);

    //Hago 2 reparaciones
    Reparaciones unaReparacion;
    Reparaciones otraReparacion;

    //Le asigno repuestos y un mecanico a la reparacion
    unaReparacion.agregarRepuesto(unRepuesto);
    unaReparacion.agregarRepuesto(otroRepuesto);
    unaReparacion.asignarMecanico(unMecanico);

    //Le asigno distintos repuestos y otro mecanico a otra reparacion
    otraReparacion.agregarRepuesto(otroRepuesto);
    otraReparacion.agregarRepuesto(tercerRepuesto);
    otraReparacion.asignarMecanico(otroMecanico);

    //Asigno el taller y le agrego las reparaciones
    Taller unTaller;
    unTaller.agregarReparacion(unaReparacion);
    unTaller.agregarReparacion(otraReparacion);

    cout << "El sueldo de un Mecanico es: " << unMecanico.calculoDeSueldo() << endl;
    cout << "Costo de la primera Reparacion: " << unaReparacion.costoReparacion () << endl;
    cout << "Costo de la segunda Reparacion: " << otraReparacion.costoReparacion () << endl;
    cout << "Costo Total de todos los repuestos usados en la reparacion: " << unaReparacion.totalCostoRepuestos() << endl;
    cout << "Reparacion mas cara del taller: " << unTaller.reparacionMasCara() << endl;
    return 0;
}
