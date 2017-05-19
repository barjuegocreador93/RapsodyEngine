


#include "rapsody.h"






char * strTochar(string a)
{
    char * x=new char[a.length()+1];
    strcpy(x,a.c_str());
    return x;
}


int main()
{
    /**Crear imagenes*/

    ingame();

    return 0;
}
END_OF_MAIN();

