#ifndef VAMPIREATTACK_HPP
#define VAMPIREATTACK_HPP

#define PART_OF_HP 0.6

#include "../../Helpers/Debug.hpp"
#include "../../Units/Unit.hpp"
#include "../BaseAttack.hpp"

class VampireAttack : public BaseAttack {
    public:
        VampireAttack();
        ~VampireAttack();
        
        void attack(Unit& attacker, Unit& victim);
        void counterAttack(Unit& attacker, Unit& victim);
};

#endif // VAMPIREATTACK_HPP