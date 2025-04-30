#include "ManiNude.h"

ManiNude::ManiNude(int id) : Personaggio(id), Gittata(2){}

void ManiNude::dealdamage(int danno, Personaggio& vittima){
    if(Gittata < distance(vittima)){Personaggio::dealdamage(danno, vittima);};
}