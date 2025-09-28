#ifndef MECANICO_H
#define MECANICO_H


class Mecanico
{
    public:
        Mecanico();
        Mecanico (int, int, float); //constructor parametrizado
        virtual ~Mecanico();
        float calculoDeSueldo ();

    protected:
        int costeDeHoras;
        float sueldoBasico;
        int cantidadDeHoras;

    private:

};

#endif // MECANICO_H
