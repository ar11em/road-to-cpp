#include <iostream>
#include <string>

#include "Personaggio.h"
#include "ManiNude.h"
#include "Armato.h"
#include "Oggetto.h"

int main(){

    Personaggio Sebastian(1);
    Personaggio Piapia(2);
    Personaggio Zombastian(3);
    Sebastian.getfaction().push_back("Azzurri");
    Piapia.getfaction().push_back("Azzurri");
    Zombastian.getfaction().push_back("Pezzati");
    Zombastian.dealdamage(100, Sebastian);
    Piapia.heal(80, Sebastian);
    std::cout << std::to_string(Sebastian.getlife());
    return 0;
};