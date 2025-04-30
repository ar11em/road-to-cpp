#pragma once

#include <string>

#include "Libro.h"

class Fumetto : public Libro{
    private:
        std::string Disegnatore;
        std::string Genere;
    public:
        Fumetto(std::string titolo, std::string autore, std::string disegnatore, std:: string genere);
        
        // una volta che hai definito un costruttore che non ha parametri nella classe base (Libro) 
        // non c'è bisogno che lo aggiungi alle sottoclassi
        Fumetto();
        ~Fumetto() override = default; // non serve in libro quindi nemmeno qui 
        std::string getdetails() override;
};