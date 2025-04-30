#include "Personaggio.h"

class Armato : public Personaggio{
    private:
    int Gittata;
    public:
    Armato(int);
    ~Armato() override = default;
    void dealdamage(int, Personaggio&) override;
};