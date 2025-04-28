#include <string>

#include "Rivista.h"

Rivista::Rivista(std::string titolo, std::string autore, int numero, std::string ambito) : Libro(titolo, autore), Numero(numero), Ambito(ambito){}
Rivista::Rivista() : Libro(), Numero(0), Ambito(""){}

std::string Rivista::getdetails(){
    return "\nTitolo: " + Titolo + "\nAutore: " + Autore + "\nNumero: " + std::to_string(Numero) + "\nAmbito: " + Ambito + "\n";
}