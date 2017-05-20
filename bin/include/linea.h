#ifndef LINEA_H
#define LINEA_H


#include "s_image.h"

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
    punto A, B;
    string axi;
    s_image data;


};

#endif // LINEA_H
