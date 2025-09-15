#ifndef TALLER_H
#define TALLER_H


class Taller
{
    public:
        Taller();
        virtual ~Taller();
        float reparacion ();


    protected:

    private:
        int costodeHoras;
        float comision = 30/100;
};

#endif // TALLER_H
