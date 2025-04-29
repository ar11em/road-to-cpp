#include <string>

#include "LibroNormale.h"

LibroNormale::LibroNormale(std::string titolo, std::string autore, std::string genere) : Libro(titolo, autore), Genere(genere){}
LibroNormale::LibroNormale() : Libro(), Genere(""){} // discorso del file.h

std::string LibroNormale::getdetails(){
    //return "\nTitolo: " + Titolo + "\nAutore: " + Autore + "\nGenere: " + Genere + "\n";
    //alternativa più pulita: metodo di base + aggiunte
    return Libro::getdetails() + "\nGenere: " + Genere + "\n";
}