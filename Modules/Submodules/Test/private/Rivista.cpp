#include <string>

#include "Rivista.h"

Rivista::Rivista(std::string titolo, std::string autore, int numero, std::string ambito) : Libro(titolo, autore), Numero(numero), Ambito(ambito){}
Rivista::Rivista() : Libro(), Numero(0), Ambito(""){}//discorso del file.h

std::string Rivista::getdetails(){
    //return "\nTitolo: " + Titolo + "\nAutore: " + Autore + "\nNumero: " + std::to_string(Numero) + "\nAmbito: " + Ambito + "\n";
    //alternativa più pulita: metodo di base + aggiunte
    return Libro::getdetails() + \nNumero: " + std::to_string(Numero) + "\nAmbito: " + Ambito + "\n";
}
