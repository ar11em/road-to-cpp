#include "Armato.h"

Armato::Armato(int id) : Personaggio(id), Gittata(20){}

void Armato::dealdamage(int danno, Personaggio& vittima){
    if(Gittata < distance(vittima)){Personaggio::dealdamage(danno, vittima);};
}