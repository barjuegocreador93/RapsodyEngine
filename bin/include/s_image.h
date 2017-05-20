#ifndef RENDER_H
#define RENDER_H


#include "objeto.h"


class s_image : public objeto
{
public:
    s_image();
    virtual ~s_image();



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
