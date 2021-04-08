#ifndef WEREWOLFATTACK_HPP
#define WEREWOLFATTACK_HPP

#include "../../Helpers/Debug.hpp"
#include "../../Units/Unit.hpp"
#include "../BaseAttack.hpp"

class WerewolfAttack : public BaseAttack {
    public:
        WerewolfAttack();
        ~WerewolfAttack();
        
        void attack(Unit& attacker, Unit& victim);
        void counterAttack(Unit& attacker, Unit& victim);
};

#endif // WEREWOLFATTACK_HPP