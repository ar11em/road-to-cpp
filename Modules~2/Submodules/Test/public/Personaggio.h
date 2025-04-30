#pragma once

#include <string>
#include <vector>

class Personaggio{
    protected:
        int ID;
        int Vita;
        int Livello;
        bool Vivo;
        std::vector<float> Posizione;
        std::vector<std::string> Fazione;
    public:
        Personaggio(int);
        virtual ~Personaggio(){}
        const int& getID() const;
        int& getlife();
        int& getlevel();
        bool& isalive();
        std::vector<float>& getposition();
        virtual std::vector<std::string>& getfaction();
        bool operator==(Personaggio);
        bool operator!=(Personaggio);
        float distance(Personaggio);
        virtual void dealdamage(int, Personaggio&);
        virtual void heal(int, Personaggio&);
        //void changelife(int);
        //void changefaction(std::string, std::string);
        bool isally(Personaggio);
};