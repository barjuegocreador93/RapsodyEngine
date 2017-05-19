#ifndef RENDER_H
#define RENDER_H

#include "rapsody.h"
#include "objeto.h"


class render : public objeto
{
public:
    render();
    virtual ~render();



    void initi(punto pos,punto escala);

    void mount_imagen(string dir);

    void crear(int color);

    void print();

protected:
    img data;
    bool auto_;
    int color;

private:
};

#endif // RENDER_H
