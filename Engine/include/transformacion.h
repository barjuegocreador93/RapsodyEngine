#ifndef TRANSFORMACION_H
#define TRANSFORMACION_H

#include "punto.h"

class transformacion
{
    public:
        transformacion();
        virtual ~transformacion();

        punto Getposicion() { return posicion; }
        void Setposicion(punto val) { posicion = val; }
        punto Getescala() { return escala; }
        void Setescala(punto val) { escala = val; }

        transformacion & operator=(const transformacion &otro)
        {
            posicion=otro.posicion;
            escala=otro.escala;
            return *this;
        }
        punto escala;
        punto posicion;


    protected:

    private:
};

#endif // TRANSFORMACION_H
