#pragma once

#include <string>

class Libro{
    protected:
        std::string Titolo;
        std::string Autore;
    public:
        Libro(std::string titolo, std::string autore);
        Libro();
        ~Libro(){}
        std::string gettitle();
        std::string getdetails();
};