#pragma once

#include <string>
#include <vector>
#include <memory>

#include "Libro.h"

class Libreria{
    protected:
        std::vector<std::shared_ptr<Libro>>* Lista;
    public:
        Libreria();
        ~Libreria();
        void addbook(std::shared_ptr<Libro> libro);
        std::vector<std::shared_ptr<Libro>>* getlist();
        std::shared_ptr<Libro> findbook(std::string titolo);
};