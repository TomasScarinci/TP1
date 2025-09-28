#ifndef REPARACIONES_H
#define REPARACIONES_H
#include <list>
#include "Repuestos.h"
#include "Mecanico.h"

class Reparaciones
{
    public:
        Reparaciones();
        virtual ~Reparaciones();
        void agregarRepuesto (Repuestos &);
        void asignarMecanico (Mecanico &);
        float totalCostoRepuestos ();
        float costoReparacion ();

    protected:

    private:
        std::list <Repuestos> misRepuestos;
        Mecanico* mecanico;
        float comision = 1.30;
};

#endif // REPARACIONES_H
