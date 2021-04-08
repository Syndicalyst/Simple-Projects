
#ifndef ROGUEATTACK_HPP
#define ROGUEATTACK_HPP

#include "../../Helpers/Debug.hpp"
#include "../../Units/Unit.hpp"
#include "../BaseAttack.hpp"

class RogueAttack : public BaseAttack {
    public:
        RogueAttack();
        ~RogueAttack();
        
        void attack(Unit& attacker, Unit& victim);
};

#endif // ROGUEATTACK_HPP