#pragma once

#include <string>
#include <vector>

#include "Libro.h"

class Libreria{
    protected:
        std::vector<Libro*>* Lista;
    public:
        Libreria();
        ~Libreria();
        void addbook(Libro* libro);
        std::vector<Libro*>* getlist();
        Libro* findbook(std::string titolo);
};