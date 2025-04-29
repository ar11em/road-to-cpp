#pragma once

#include <string>
#include <vector>
#include <memory>

#include "Libro.h"

/* Hai fatto un po' un mix di come si usano i puntatori. 
    Hai utilizzato una libreria che li gestisce e poi li hai gestiti manualmente 
*/
class Libreria{
    protected:
        std::vector<std::shared_ptr<Libro>>* Lista;
    public:
        Libreria();
        ~Libreria(); // Esatto qui serve il decostruttore perche stai usando i puntatori (continuo nel file cpp)
        void addbook(std::shared_ptr<Libro> libro);
        std::vector<std::shared_ptr<Libro>>* getlist();
        std::shared_ptr<Libro> findbook(std::string titolo);
};


//Metodo Puntatori Gestiti
class Libreria{
    protected:
    std::vector<std::shared_ptr<Libro>> Lista; //rimosso il puntatore (*)
public:
    Libreria();
    //non serve il decostruttore
    void addbook(std::shared_ptr<Libro> libro);
    
    std::vector<std::shared_ptr<Libro>> getlist(); 
    std::shared_ptr<Libro> findbook(std::string titolo); 
};