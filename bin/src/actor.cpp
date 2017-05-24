#include "actor.h"
#include "mapa.h"
using namespace rapsody;
actor::actor() {
    //ctor
    visible = true;
    setNombre("default actor");
}

actor::~actor() {
    //dtor
    components.clear();
    delete this;

}

void actor::empezar() {
    cout<<"actor "<<padre->getNombre()<<"->"<<getNombre()<<"\n";
    cout<<GetEscala();
    fisica::empezar();
    for (int i = 0; i < (int) components.size(); i++) {
        components[i]->empezar();
    }
}

void actor::mientras(int mils) {
    fisica::mientras(mils);
    for (int i = 0; i < (int) components.size(); i++) {
        components[i]->mientras(mils);
    }

}

void actor::fin() {
    fisica::fin();
    for (int i = 0; i < (int) components.size(); i++) {
        components[i]->fin();
    }
}



void actor::Tocando(D_Actor un_actor, D_AComponent un_componente) {
    
}

void actor::Sobre(D_Actor un_actor, D_AComponent un_componente) {
    
}

void actor::render() {
    
    for (int i = 0; i < (int) components.size() && visible; i++) {
        components[i]->render();
    }
}

void actor::SystemaDeColision(actor* ext) {
    if(this != ext)
    {
        for (int i = 0; i < (int) components.size(); i++)
        {
            for (int j = 0; j < (int) ext->components.size(); j++)
            {
                components[i]->SystemaDeColision(ext->components[j]);
                ext->components[j]->SystemaDeColision(components[i]);
            }
        }
    }
}

void actor::EraseComponent(D_AComponents::iterator item) {
    components.erase(item);
}

void actor::setItem(vector<actor*>::iterator item) {
    this->item = item;
}

void actor::destructor_() {
    if(padre)
    {
        ((mapa* )padre)->EraseActor(item);
        delete this;
    }
}
