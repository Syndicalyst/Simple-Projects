#ifndef PRIESTATTACK_H
#define PRIESTATTACK_H

#define DMG_COEFF 2

#include "../../Helpers/Debug.hpp"
#include "../../Units/Unit.hpp"
#include "../BaseAttack.hpp"

class PriestAttack : public BaseAttack {
    public:
        PriestAttack();
        ~PriestAttack();
        
        void attack(Unit& attacker, Unit& victim);
        void counterAttack(Unit& attacker, Unit& victim);
};

#endif // PRIESTATTACK_H