#pragma once

#include <string>

#include "Libro.h"

class LibroNormale : public Libro{
    private:
        std::string Genere;
    public:
        LibroNormale(std::string titolo, std::string autore, std::string genere);
        LibroNormale();
        ~LibroNormale() override = default;
        std::string getdetails() override;
};