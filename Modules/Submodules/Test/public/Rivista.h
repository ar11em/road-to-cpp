#pragma once

#include <string>

#include "Libro.h"

class Rivista : public Libro{
    private:
        int Numero;
        std::string Ambito;
    public:
        Rivista(std::string titolo, std::string autore, int numero, std::string ambito);
        Rivista();
        ~Rivista() override = default;
        std::string getdetails() override;
};