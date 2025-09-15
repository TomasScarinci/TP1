#ifndef MECANICO_H
#define MECANICO_H


class Mecanico
{
    public:
        Mecanico();
        virtual ~Mecanico();
        void Sueldo (int);

    protected:

    private:
        int costeDeHoras;
        float importeBasico;
};

#endif // MECANICO_H
