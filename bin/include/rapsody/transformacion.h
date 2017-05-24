#ifndef TRANSFORMACION_H
#define TRANSFORMACION_H

#include "punto.h"
namespace rapsody
{
class transformacion
{
    public:
        transformacion();
        virtual ~transformacion();

        punto2D GetPosicion();
        void SetPosicion(punto2D val);
        punto2D GetEscala();
        void SetEscala(punto2D val);

        transformacion & operator=(const transformacion &otro);


        void AcumPosicionX(int x);
        void AcumPosicionY(int y);

        void AcumEscalaX(int x);
        void AcumEscalaY(int y);

    protected:
        punto2D escala;
        punto2D posicion;


    private:
};

}

typedef rapsody::transformacion C_Transform;

C_Transform crear_transformacion(C_Vector2D posicion, C_Vector2D escala);

#endif // TRANSFORMACION_H
