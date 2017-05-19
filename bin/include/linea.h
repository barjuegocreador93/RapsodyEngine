#ifndef LINEA_H
#define LINEA_H

#include "rapsody.h"
#include "punto.h"
#include "render.h"


class linea
{
    friend ostream &operator<<(ostream &ou,const linea &m)
    {
        cout<<"linea: \n"<<m.A<<m.B<<endl;
        return ou;
    }

public:
    linea();
    virtual ~linea();

    bool tocando(linea &m);

    bool pasada(linea &m);



    void print();
    punto A,B;
    string axi;
    render data;

protected:

private:
};

#endif // LINEA_H
