#include "actor.h"
#include "mapa.h"
using namespace rapsody;
actor::actor() {
    //ctor
    visible = true;
    SetNombre("default actor");
}

actor::~actor() {
    //dtor
    elements.clear();
    delete this;

}

void actor::empezar() {
    
    cout<<"actor "<<padre->GetPadre()<<"->"<<GetNombre()<<"\n";
    cout<<GetEscala();
    fisica::empezar();
    for (int i = 0; i < (int) elements.size(); i++) {
        elements[i]->empezar();     
    }
}

void actor::mientras(int mils) {
    fisica::mientras(mils);
    for (int i = 0; i < (int) elements.size(); i++) {
        elements[i]->mientras(mils);
    }

}

void actor::fin() {
    fisica::fin();
    for (int i = 0; i < (int) elements.size(); i++) {
        elements[i]->fin();
    }
}



void actor::Tocando(D_Actor un_actor, D_AComponent un_componente) {
    
}

void actor::Sobre(D_Actor un_actor, D_AComponent un_componente) {
    
}

void actor::render() {
    
    for (int i = 0; i < (int) elements.size() && visible; i++) {
        elements[i]->render();
        
        
    }
}

void actor::SystemaDeColision(actor* ext) {
    if(this != ext)
    {
        for (int i = 0; i < (int) elements.size(); i++)
        {
            for (int j = 0; j < (int) ext->elements.size(); j++)
            {
                elements[i]->SystemaDeColision(ext->elements[j]);
                ext->elements[j]->SystemaDeColision(elements[i]);
            }
        }
    }
}





void actor::destructor_() {
    
}
