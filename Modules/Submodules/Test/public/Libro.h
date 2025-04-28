#pragma once

#include <string>

class Libro{
    protected:
        std::string Titolo;
        std::string Autore;
    public:
        Libro(std::string titolo, std::string autore);
        Libro();
        virtual ~Libro(){}
        std::string gettitle();
        virtual std::string getdetails();
};