#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "Libreria.h"

Libreria::Libreria(){
    //non serve creare un puntatore, il vettore contiene elementi molto piccoli che "puntano" ad elementi grandi nella memoria
    //per inizializzarlo basta quello che c'è scritto nel file.h (viene inizializzato automaticamente)
    //Lista = std::vector<std::shared_ptr<Libro>>(); 

    std::cout << "\nbenvenut3 in libreria!\n";
}

Libreria::~Libreria(){
    //delete Lista; //non è più un puntatore quindi non serve
    std::cout << "\naddio libreria!\n";
}

void Libreria::addbook(std::shared_ptr<Libro> libro){
    Lista->push_back(libro);
}

std::vector<std::shared_ptr<Libro>> Libreria::getlist(){ //rimosso puntatore
    return Lista;
}

std::shared_ptr<Libro> Libreria::findbook(std::string titolo){
    bool found = false;
    for(std::shared_ptr<Libro> libro : *Lista){
        if(titolo == libro->gettitle()){
            found = true;
            return std::shared_ptr<Libro>(libro); 
        };
    };
    if(found == false){
        std::cout << "\nsorry, non abbiamo trovato il libro!\n";
    }
    return std::shared_ptr<Libro>(std::make_shared<Libro>()); //sistemato per il nuovo return
}