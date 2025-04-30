#include "Personaggio.h"

class ManiNude : public Personaggio{
    private:
    int Gittata;
    public:
    ManiNude(int);
    ~ManiNude() override = default;
    void dealdamage(int, Personaggio&) override;
};