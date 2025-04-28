#pragma once

#include <string>

#include "Libro.h"

class Fumetto : public Libro{
    private:
        std::string Disegnatore;
        std::string Genere;
    public:
        Fumetto(std::string titolo, std::string autore, std::string disegnatore, std:: string genere);
        Fumetto();
        ~Fumetto() override = default;
        std::string getdetails() override;
};