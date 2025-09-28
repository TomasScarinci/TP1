#ifndef TALLER_H
#define TALLER_H
#include <string>
#include <list>
#include "Reparaciones.h"

class Taller
{
    public:
        Taller();
        virtual ~Taller();
        void agregarReparacion (Reparaciones &);
        float reparacionMasCara ();

    protected:
        std::list <Reparaciones> misReparaciones;

    private:
};

#endif // TALLER_H
