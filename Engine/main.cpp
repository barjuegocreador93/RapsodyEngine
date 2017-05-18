#include <allegro.h>
#include "inicia.h"
#include <iostream>
#include <math.h>
#include <vector>
#include <string.h>
#include <map>

using namespace std;

/** Include tus .h **/
#include "structs/juego.h"

//..
/** Include ends **/

int main()
{


    /**Crear imagenes*/
    juego naves;

    naves.empezar();
    naves.mientras(0);
    naves.fin();

    readkey();

    return 0;
}
END_OF_MAIN();
