#ifndef PUNTO_H
#define PUNTO_H

#include "rapsody.h"
namespace rapsody
{
class punto2D
{
    friend ostream &operator<<(ostream &ou, const punto2D &otro)
    {
        cout<<"point: "<<otro.x<<","<<otro.y<<endl;
        return ou;
    }


public:
    punto2D();
    virtual ~punto2D();
    int x;
    int y;

    punto2D &operator=(const punto2D &otro);
    bool operator==(punto2D &otro);

    bool operator!=(punto2D &otro);

    punto2D operator+(const punto2D &otro);
    bool operator>=(punto2D &otro);
    bool operator<=(punto2D &otro);

    punto2D operator-(punto2D &otro);
    punto2D operator*(const punto2D &otro);
    float div();

    void operator*=(int c);
    void operator+=(punto2D);


protected:

private:
};
}
rapsody::punto2D crear_punto(int,int);

typedef rapsody::punto2D* D_Vector2D;
typedef rapsody::punto2D C_Vector2D;

#endif // PUNTO_H
