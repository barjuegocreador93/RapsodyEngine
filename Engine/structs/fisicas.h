
class fisica : public objeto
{
public:
    fisica()
    {
        velocidad=crear_punto(0,0);
        aceleracion=crear_punto(0,0);
        colision_solida=true;

    }

    virtual void mientras(int mils)
    {
        if(!estatico)
        {
            if(transncurrido.seg==60)
            {
                velocidad.x += aceleracion.x;
                velocidad.y += aceleracion.y;
                if(crear_punto(0,0) != velocidad)
                {
                    active_movenets_on_map();
                    ubicacion.posicion.x+= velocidad.x;
                    ubicacion.posicion.y+= velocidad.y;
                }
                transncurrido.seg=0;
            }
            if(mils==1000)
            {
                transncurrido.seg++;
            }
        }
    }

    void active_movenets_on_map();

    punto velocidad;
    punto aceleracion;
    objeto * mundo;

    float masa;

    bool estatico;
    bool movimiento;
    bool colision_solida;
    tiempo transncurrido;



};


void colision::fisicas_de_choque_de_solidos(colision * otro)
{
    fisica * m = (fisica*)padre, *r=(fisica*)otro->padre;
     if (m->colision_solida && r->colision_solida)
     {
         m->aceleracion *=(-1);
         m->velocidad *=(-1);
         r->aceleracion*=(-1);
         r->velocidad*=(-1);

     }
}
