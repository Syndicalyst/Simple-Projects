
#ifndef ATTACK_HPP
#define ATTACK_HPP

#include "../Helpers/Debug.hpp"
#include "../Units/Unit.hpp"

class Unit;

class BaseAttack {
    public:
        BaseAttack();
        virtual ~BaseAttack();
        
        virtual void attack(Unit& attacker, Unit& victim);
        virtual void counterAttack(Unit& attacker, Unit& victim);
};

#endif // ATTACK_HPP