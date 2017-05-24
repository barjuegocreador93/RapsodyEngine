/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   xmltree.h
 * Author: Calimpio
 *
 * Created on 24 de mayo de 2017, 02:32 AM
 */

#ifndef XMLTREE_H
#define XMLTREE_H

#include "rapsody.h"
#include "objeto.h"

namespace rapsody
{
template<class T>
class XMLelement : public basic_objeto {
public:

    XMLelement() {
        nombre = "element";
        padre = NULL;
    }

    ~XMLelement() {
        elements.clear();
        delete this;
    }

    int TextLength() {
        return (int) elements.size();
    }

    void AddElement(T* element) {
        cout << "aqui 1" << endl;
        ((XMLelement<T>*)(element))->padre=(this);
        cout << "aqui 2" << endl;
        elements.push_back(element);
        cout << "aqui 3" << endl;
        ((XMLelement<T>*)element)->item = elements.end();
        cout << "aqui 4" << endl;
    }

    T* operator[](const int i) {
        return GoElement(i);
    }

    T* GoElement(const int i) {
        if (i >= 0 && (size_t) i < elements.size())
            return elements[i];
        return NULL;
    }

    void SetNombre(std::string nombre) {
        this->nombre = nombre;
    }

    std::string GetNombre() const {
        return nombre;
    }

    

protected:
    std::string nombre;
    std::vector<T*> elements;
    

    typename vector<T*>::iterator item;

    void EraseElement(typename std::vector<T*>::iterator oitem) {
        elements.erase(oitem);
    }

    void destruir() {
        ((XMLelement<T>*)(padre))->EraseElement(item);
    }





};
}
#endif /* XMLTREE_H */

