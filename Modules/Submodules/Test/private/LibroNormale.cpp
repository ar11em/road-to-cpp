#include <string>

#include "LibroNormale.h"

LibroNormale::LibroNormale(std::string titolo, std::string autore, std::string genere) : Libro(titolo, autore), Genere(genere){}
LibroNormale::LibroNormale() : Libro(), Genere(""){}

std::string LibroNormale::getdetails(){
    return "\nTitolo: " + Titolo + "\nAutore: " + Autore + "\nGenere: " + Genere + "\n";
}