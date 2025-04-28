#include <string>

#include "Fumetto.h"

Fumetto::Fumetto(std::string titolo, std::string autore, std::string disegnatore, std::string genere) : Libro(titolo, autore), Disegnatore(disegnatore), Genere(genere){}
Fumetto::Fumetto() : Libro(), Disegnatore(""), Genere(""){}

std::string Fumetto::getdetails(){
    return "\nTitolo: " + Titolo + "\nAutore: " + Autore + "\nDisegnatore: " + Disegnatore + "\nGenere: " + Genere + "\n";
}