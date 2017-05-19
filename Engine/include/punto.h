#ifndef PUNTO_H
#define PUNTO_H

#include "rapsody.h"

class punto
{
public:
    punto();
    virtual ~punto();
    int x;
    int y;

    punto &operator=(const punto &otro)
    {
        x=otro.x;
        y=otro.y;
        return *this;
    }
    bool operator==(punto &otro)
    {
        return x == otro.x && y == otro.y;
    }

    bool operator!=(punto &otro)
    {
        return ! (*this == otro);
    }

    punto operator+(punto &otro)
    {
        punto m;
        m.x=x + otro.x;
        m.y=y + otro.y;
        return m;
    }

    bool operator>=(punto &otro)
    {
        return (x>=otro.x && y>=otro.y);
    }
    bool operator<=(punto &otro)
    {
        return (x<=otro.x && y<=otro.y);
    }

    punto operator-(punto &otro)
    {
        punto m;
        m.x=x - otro.x;
        m.y=y - otro.y;
        return m;
    }

    float div()
    {
        if(x != 0)
            return y/x;
        return 0;
    }

    void operator*=(int c)
    {
        x*=c;
        y*=c;
    }


    friend ostream &operator<<(ostream &ou, const punto &otro)
    {
        cout<<"point: "<<otro.x<<","<<otro.y<<endl;
        return ou;
    }

protected:

private:
};

punto crear_punto(int,int);

#endif // PUNTO_H
