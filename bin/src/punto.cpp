#include "punto.h"
using namespace rapsody;
        
punto2D::punto2D()
{
    //ctor
    x=0;
    y=0;
}

punto2D::~punto2D()
{
    //dtor
}


C_Vector2D crear_punto(int x,int y)
{
    punto2D m;
    m.x=x;
    m.y=y;
    return m;
}

void punto2D::operator +=(C_Vector2D value)
{
    x+=value.x;
    y+=value.y;
}


C_Vector2D &punto2D::operator=(const C_Vector2D &otro)
{
    x=otro.x;
    y=otro.y;
    return *this;
}

bool punto2D::operator==(C_Vector2D &otro)
{
    return x == otro.x && y == otro.y;
}

bool punto2D::operator!=(C_Vector2D &otro)
{
    return ! (*this == otro);
}

punto2D punto2D::operator+(const C_Vector2D &otro)
{
    punto2D m;
    m.x=x + otro.x;
    m.y=y + otro.y;
    return m;
}

bool punto2D::operator>=(C_Vector2D &otro)
{
    return (x>=otro.x && y>=otro.y);
}

bool punto2D::operator<=(C_Vector2D &otro)
{
    return (x<=otro.x && y<=otro.y);
}

C_Vector2D punto2D::operator-(C_Vector2D &otro)
{
    C_Vector2D m;
    m.x=x - otro.x;
    m.y=y - otro.y;
    return m;
}

float punto2D::div()
{
    if(x != 0)
        return y/x;
    return 0;
}

void punto2D::operator*=(int c)
{
    x*=c;
    y*=c;
}

C_Vector2D punto2D::operator*(const C_Vector2D& otro) {
    punto2D m;
    m.x=x*otro.x;
    m.y=y=otro.y;
    return m;
}
