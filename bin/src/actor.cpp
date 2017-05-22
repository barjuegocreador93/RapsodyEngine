#include "actor.h"
using namespace rapsody;
actor::actor() {
    //ctor
    visible = true;
}

actor::~actor() {
    //dtor
    components.clear();

}

void actor::empezar() {
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

template<class actor_component_type>
actor_component_type* actor::AddComponents() {
    D_AComponent m = (D_AComponent)new(actor_component_type);
    if (m) {
        ((objeto *) m)->pertenece(this);
        m->constructor_();
        components.push_back(m);

    }
    return (actor_component_type *) m;
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
