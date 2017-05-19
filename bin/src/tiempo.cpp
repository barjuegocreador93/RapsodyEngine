#include "tiempo.h"

tiempo::tiempo()
{
    //ctor
    mils=0;
    seg=0;
    mins=0;
    hrs=0;
}

tiempo::~tiempo()
{
    //dtor
}

void tiempo::correTiempo()
{
    if(60==mins)
    {
        hrs++;
        mins=0;
    }
    if(60==seg)
    {
        mins++;
        seg=0;
    }
    if(1000==mils)
    {
        seg++;
        mils=0;
    }
    mils++;
}
