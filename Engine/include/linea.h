#ifndef LINEA_H
#define LINEA_H

#include "rapsody.h"
#include "punto.h"
#include "render.h"


class linea
{
public:
    linea();
    virtual ~linea();


    bool tocando(linea &m)
    {
        return (A >= m.A && A <= m.B) || (B >= m.A && B <= m.B);

    }

    bool pasada(linea &m)
    {
        return false;
    }

    friend ostream &operator<<(ostream &ou,const linea &m)
    {
        cout<<"linea: \n"<<m.A<<m.B<<endl;
        return ou;
    }

    void print()
    {
        line(screen,A.x,A.y,B.x,B.y,0xffff);
    }
    punto A,B;
    string axi;
    render data;

protected:

private:
};

#endif // LINEA_H
