#ifndef OBJETO_H
#define OBJETO_H



#include "transformacion.h"
namespace rapsody {

    class objeto {
    public:
        objeto(bool = false);
        virtual ~objeto();


        virtual void constructor_();
        virtual void destructor_();
        virtual void empezar();
        virtual void mientras(int mils);
        virtual void fin();

        void pertenece(objeto *);
        virtual void SetUbicacion(transformacion value);
        virtual transformacion GetUbicacion();
        virtual void SetPosicion(punto2D value);
        virtual punto2D GetPosicion();
        virtual void SetEscala(punto2D value);
        virtual punto2D GetEscala();

        void setDebug_mode(bool debug_mode);
        bool isDebug_mode() const;
        void setPriority_debuger(bool priority_debuger);
        bool isPriority_debuger() const;
        
        void SetNombre(std::string nombre) {
        this->nombre = nombre;
        }

        std::string GetNombre() const {
        return nombre;
        }
        

    protected:

        transformacion ubicacion;
        bool debug_mode;
        bool priority_debuger;
        string nombre;
        


    private:



    };
    
    class basic_objeto : public objeto
    {
    public:
        
        basic_objeto()
        {
           padre=NULL; 
        }
        
        virtual ~basic_objeto()
        {
            
        }
        void SetPadre(basic_objeto* padre) {
            this->padre = padre;
        }

        basic_objeto* GetPadre() const {
            return padre;
        }
        
    protected:        
        basic_objeto* padre;
    };
}

typedef rapsody::objeto* D_Object;
typedef rapsody::objeto C_Object;

#endif // OBJETO_H
