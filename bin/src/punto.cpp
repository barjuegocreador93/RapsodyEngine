#include "punto.h"

punto::punto()
{
    //ctor
    x=0;
    y=0;
}

punto::~punto()
{
    //dtor
}


punto crear_punto(int x,int y)
{
    punto m;
    m.x=x;
    m.y=y;
    return m;
}

void punto::operator +=(punto value)
{
    x+=value.x;
    y+=value.y;
}


punto &punto::operator=(const punto &otro)
{
    x=otro.x;
    y=otro.y;
    return *this;
}

bool punto::operator==(punto &otro)
{
    return x == otro.x && y == otro.y;
}

bool punto::operator!=(punto &otro)
{
    return ! (*this == otro);
}

punto punto::operator+(const punto &otro)
{
    punto m;
    m.x=x + otro.x;
    m.y=y + otro.y;
    return m;
}

bool punto::operator>=(punto &otro)
{
    return (x>=otro.x && y>=otro.y);
}

bool punto::operator<=(punto &otro)
{
    return (x<=otro.x && y<=otro.y);
}

punto punto::operator-(punto &otro)
{
    punto m;
    m.x=x - otro.x;
    m.y=y - otro.y;
    return m;
}

float punto::div()
{
    if(x != 0)
        return y/x;
    return 0;
}

void punto::operator*=(int c)
{
    x*=c;
    y*=c;
}

punto punto::operator*(const punto& otro) {
    punto m;
    m.x=x*otro.x;
    m.y=y=otro.y;
    return m;
}
