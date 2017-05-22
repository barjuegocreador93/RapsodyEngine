#ifndef CONTROLADOR_H
#define CONTROLADOR_H


#include "objeto.h"

namespace rapsody {

    class controlador : public objeto {
    public:
        controlador();
        virtual void empezar();
        virtual void mientras(int mils);
        virtual void terminar();
    protected:

    private:
    };
}

typedef rapsody::controlador* D_Controller;
typedef rapsody::controlador C_Controller;
#endif // CONTROLADOR_H
