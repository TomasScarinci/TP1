#ifndef REPUESTOS_H
#define REPUESTOS_H
#include <list>
#include <string>

enum Pais {Nacional, limitrofes, America, Europa};

class Repuestos
{
    public:
        Repuestos();
        Repuestos  (Pais, float); //constructor parametrizado
        virtual ~Repuestos();
        int totalDeReparaciones ();
        float costoDeRepuestos ();

    protected:

    private:
        float costoBasico;
        Pais origen;
};

#endif // REPUESTOS_H
