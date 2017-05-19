#ifndef PUNTO_H
#define PUNTO_H

#include "rapsody.h"

class punto
{
    friend ostream &operator<<(ostream &ou, const punto &otro)
    {
        cout<<"point: "<<otro.x<<","<<otro.y<<endl;
        return ou;
    }


public:
    punto();
    virtual ~punto();
    int x;
    int y;

    punto &operator=(const punto &otro);
    bool operator==(punto &otro);

    bool operator!=(punto &otro);

    punto operator+(punto &otro);
    bool operator>=(punto &otro);
    bool operator<=(punto &otro);

    punto operator-(punto &otro);

    float div();

    void operator*=(int c);



protected:

private:
};

punto crear_punto(int,int);

#endif // PUNTO_H
