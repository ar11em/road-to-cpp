#include <iostream>
#include <string>
#include <vector>

#include "Libreria.h"

Libreria::Libreria(){
    Lista = new std::vector<Libro*>();
    std::cout << "\nbenvenut3 in libreria!\n";
}

Libreria::~Libreria(){
    for(Libro* libro : *Lista){
        delete libro;
    };
    delete Lista;
    std::cout << "\naddio libreria!\n";
}

void Libreria::addbook(Libro* libro){
    Lista->push_back(libro);
}

std::vector<Libro*>* Libreria::getlist(){
    return Lista;
}

Libro* Libreria::findbook(std::string titolo){
    bool found = false;
    for(Libro* libro : *Lista){
        if(titolo == libro->gettitle()){
            found = true;
            return libro;
        };
    };
    if(found == false){
        std::cout << "\nsorry, non abbiamo trovato il libro!\n";
    }
    return new Libro();
}