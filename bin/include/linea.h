#ifndef LINEA_H
#define LINEA_H


#include "s_image.h"
namespace rapsody
{
struct linea {

    friend ostream &operator<<(ostream &ou, const linea &m) {
        cout << "linea: \n" << m.A << m.B << endl;
        return ou;
    }


    linea();
    virtual ~linea();

    bool tocando(linea &m);

    bool pasada(linea &m);



    void print();
    C_Vector2D A, B;
    string axi;
    s_image data;


};
}

typedef rapsody::linea* D_Line;
typedef rapsody::linea C_Line;

C_Line crear_linea(C_Vector2D A, C_Vector2D B);

#endif // LINEA_H
