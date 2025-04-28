#include <iostream>

#include "Libreria.h"
#include "Libro.h"

int main(){
    Libreria mialibreria;

    Libro* miolibro = new Libro("Capitan Zombandia", "Lilith Galletti");
    mialibreria.addbook(miolibro);

    std::vector<Libro*>* mialista = mialibreria.getlist();

    for(Libro* libro : *mialista){
        std::cout << libro->getdetails();
    };

    std::string titoloX;
    std::getline(std::cin, titoloX);
    Libro* libroX = mialibreria.findbook(titoloX);

    std::cout << libroX->getdetails();
    
    return 0;
};