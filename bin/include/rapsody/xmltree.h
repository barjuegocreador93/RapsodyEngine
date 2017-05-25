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
class XMLelement : public objeto {
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
        
        ((XMLelement<T>*)(element))->padre=(this);
        
        elements.push_back(element);
        
        ((XMLelement<T>*)element)->item = elements.end();
        
    }

    T* operator[](const int i) {
        return GoElement(i);
    }

    T* GoElement(const int i) {
        if (i >= 0 && (size_t) i < elements.size())
            return elements[i];
        return NULL;
    }

    
    void destruir() {
        ((XMLelement<T>*)(padre))->EraseElement(item);
    }
    

protected:
    
    std::vector<T*> elements;
    

    typename vector<T*>::iterator item;

    void EraseElement(typename std::vector<T*>::iterator oitem) {
        elements.erase(oitem);
    }

    





};
}
#endif /* XMLTREE_H */

