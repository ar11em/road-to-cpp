#include "Personaggio.h"

class Oggetto : public Personaggio{
    public:
    Oggetto(int);
    ~Oggetto() override = default;
    void dealdamage(int, Personaggio&) override {}
    void heal(int, Personaggio&) override {}
};