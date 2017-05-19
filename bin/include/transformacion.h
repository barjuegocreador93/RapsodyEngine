#ifndef TRANSFORMACION_H
#define TRANSFORMACION_H

#include "punto.h"

class transformacion
{
    public:
        transformacion();
        virtual ~transformacion();

        punto Getposicion();
        void Setposicion(punto val);
        punto Getescala();
        void Setescala(punto val);

        transformacion & operator=(const transformacion &otro);


        void AcumPosicionX(int x);
        void AcumPosicionY(int y);

        void AcumEscalaX(int x);
        void AcumEscalaY(int y);

    protected:
        punto escala;
        punto posicion;


    private:
};

transformacion crear_transformacion(punto posicion, punto escala);

#endif // TRANSFORMACION_H
