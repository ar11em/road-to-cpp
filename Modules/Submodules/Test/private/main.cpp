#include <iostream>

#include "Libreria.h"
#include "Libro.h"
#include "LibroNormale.h"
#include "Fumetto.h"
#include "Rivista.h"

int main(){
    Libreria mialibreria;

    std::shared_ptr<LibroNormale> miolibro = std::make_shared<LibroNormale>("Capitan Zombandia", "Lilith Galletti", "Avventura");
    std::shared_ptr<Fumetto> miofumetto = std::make_shared<Fumetto>("Ogni maledetto zombedì", "Lilith Galletti", "Arianna Laghetto", "Romantico");
    std::shared_ptr<Rivista> miarivista = std::make_shared<Rivista>("Zomboy", "Rocco Zombredi", 666, "Cucina");

    mialibreria.addbook(miolibro);
    mialibreria.addbook(miofumetto);
    mialibreria.addbook(miarivista);

    std::vector<std::shared_ptr<Libro>>* mialista = mialibreria.getlist();

    for(std::shared_ptr<Libro> libro : *mialista){
        std::cout << libro->getdetails();
    };
    
    std::string titoloX;
    std::getline(std::cin, titoloX);
    std::shared_ptr<Libro> libroX = mialibreria.findbook(titoloX);

    std::cout << libroX->getdetails();
    
    return 0;
};