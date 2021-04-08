#ifndef WARLOCKATTACK_HPP
#define WARLOCKATTACK_HPP

#include "../../Helpers/Debug.hpp"
#include "../../Units/Unit.hpp"
#include "../../Units/Warlock/Warlock.hpp"
#include "../BaseAttack.hpp"

class WarlockAttack : public BaseAttack {
    public:
        WarlockAttack();
        ~WarlockAttack();
        
        void attack(Unit& attacker, Unit& victim);
};

#endif // WARLOCKATTACK_HPP