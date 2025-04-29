#include <string>

#include "Libro.h"

Libro::Libro(std::string titolo, std::string autore) : Titolo(titolo), Autore(autore){}
Libro::Libro() : Titolo(""), Autore(""){} //discorso del file.h

std::string Libro::gettitle(){
    return Titolo;
}

std::string Libro::getdetails(){
    return "\nTitolo: " + Titolo + "\nAutore: " + Autore + "\n";
}