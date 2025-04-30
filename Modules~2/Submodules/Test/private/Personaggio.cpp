#include <cmath>
#include <algorithm>

#include <iostream>

#include "Personaggio.h"

Personaggio::Personaggio(int id) : ID(id), Vita(1000), Livello(1), Vivo(true), Posizione({0,0}), Fazione(){}

const int& Personaggio::getID() const {return ID;}
int& Personaggio::getlife(){
    if(Vita > 1000){Vita = 1000;};
    if(Vita < 1){Vivo = false;};
    return Vita;
}
int& Personaggio::getlevel(){return Livello;}
bool& Personaggio::isalive(){return Vivo;}
std::vector<float>& Personaggio::getposition(){return Posizione;}
std::vector<std::string>& Personaggio::getfaction(){return Fazione;}

bool Personaggio::operator==(Personaggio altro){
    return ID == altro.getID();
}

bool Personaggio::operator!=(Personaggio altro){
    return !(ID == altro.getID());
}

float Personaggio::distance(Personaggio altro){
    return sqrt(pow(Posizione[0]-altro.getposition()[0],2)+pow(Posizione[1]-altro.getposition()[1],2));
}

void Personaggio::dealdamage(int danno, Personaggio& vittima){
    if(vittima != *this && !isally(vittima)){
        if(Livello-5 > vittima.getlevel()){danno *= 1.5;}
        else if(Livello+5 < vittima.getlevel()){danno *= 0.5;};
        vittima.getlife() -= danno;
    };
}

void Personaggio::heal(int salute, Personaggio& paziente){
    if(paziente == *this || isally(paziente)){
        paziente.getlife() += salute;
    };
}

bool Personaggio::isally(Personaggio altro){
    bool isally = false;
    for(std::string miafazione : Fazione){
        for(std::string altrafazione : altro.getfaction()){
            if(miafazione == altrafazione){isally = true;};
        };
    };
    return isally;
}