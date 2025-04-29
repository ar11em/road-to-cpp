#pragma once

#include <string>

class Libro{
    protected:
        std::string Titolo;
        std::string Autore;
    public:
        Libro(std::string titolo, std::string autore);
        
        // ti consiglio di scrivere = default e non inizializzare a mano le variabili nel file cpp 
        // (default fa quello che hai fatto automaticamente)
        // Libro() = default; serve per dire al compilatore di generare oltre al costruttore che gli
        // dici tu anche quello dove tutte le variabili hanno valore di default
        Libro(); 
        
        //non serve il decostruttore perchè non lo stiamo utilizzando.
        //Se non lo specifichi rimane quello di default.
        virtual ~Libro(){} 
        std::string gettitle();
        virtual std::string getdetails();
};