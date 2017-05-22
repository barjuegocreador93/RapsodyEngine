#ifndef PEON_H
#define PEON_H


#include "actor.h"
#include "controlador.h"
namespace rapsody {

    class peon : public actor {
    public:
        peon();
        virtual ~peon();

        controlador * jugador;

        template<class controlador_type>
        void AddControlador() {
            jugador = (controlador *)new(controlador_type);
            if (jugador != NULL)
                jugador->pertenece(this);
        }

        virtual void empezar();


        virtual void mientras(int mils);

        virtual void fin();


    protected:

    private:
    };
}

typedef rapsody::peon* D_Pawn;
typedef rapsody::peon C_Pawn;

#endif // PEON_H
