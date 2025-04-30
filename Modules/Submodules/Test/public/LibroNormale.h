#pragma once

#include <string>

#include "Libro.h"

class LibroNormale : public Libro{
    private:
        std::string Genere;
    public:
        LibroNormale(std::string titolo, std::string autore, std::string genere);
        // una volta che hai definito un costruttore che non ha parametri nella classe base (Libro) 
        // non c'è bisogno che lo aggiungi alle sottoclassi
        LibroNormale(); 
        ~LibroNormale() override = default; // non serve in libro quindi nemmeno qui 
        std::string getdetails() override;
};