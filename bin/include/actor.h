#ifndef ACTOR_H
#define ACTOR_H


#include "fisica.h"
#include "actor_component.h"



class actor : public fisica
{
public:
    actor();
    virtual ~actor();

    

    virtual void empezar();
    virtual void mientras(int mils);    
    virtual void fin();

    
    
    template <class actor_component_type>
    actor_component_type * AddComponents();   
    
    


protected:
    
    AComponents components;
    bool visible;

private:
};

typedef map<string, actor *> Actores;
typedef pair<string, actor *> Actor;

#endif // ACTOR_H
