#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "Libreria.h"

Libreria::Libreria(){
    Lista = new std::vector<std::shared_ptr<Libro>>();
    std::cout << "\nbenvenut3 in libreria!\n";
}

Libreria::~Libreria(){
    delete Lista;
    std::cout << "\naddio libreria!\n";
}

void Libreria::addbook(std::shared_ptr<Libro> libro){
    Lista->push_back(libro);
}

std::vector<std::shared_ptr<Libro>>* Libreria::getlist(){
    return Lista;
}

std::shared_ptr<Libro> Libreria::findbook(std::string titolo){
    bool found = false;
    for(std::shared_ptr<Libro> libro : *Lista){
        if(titolo == libro->gettitle()){
            found = true;
            return libro;
        };
    };
    if(found == false){
        std::cout << "\nsorry, non abbiamo trovato il libro!\n";
    }
    return std::make_shared<Libro>();
}