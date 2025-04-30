#pragma once

#include <string>

#include "Libro.h"

class Rivista : public Libro{
    private:
        int Numero;
        std::string Ambito;
    public:
        Rivista(std::string titolo, std::string autore, int numero, std::string ambito);
        // una volta che hai definito un costruttore che non ha parametri nella classe base (Libro) 
        // non c'è bisogno che lo aggiungi alle sottoclassi
        Rivista();
        ~Rivista() override = default; // non serve in libro quindi nemmeno qui 
        std::string getdetails() override;
};