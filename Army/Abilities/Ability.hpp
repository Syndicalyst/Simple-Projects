#ifndef ABILITY_HPP
#define ABILITY_HPP

#include "../Helpers/Debug.hpp"
#include "../Units/Unit.hpp"

class Unit;

class Ability {
    public:
        Ability() { debugPrint("Ability created"); };
        virtual ~Ability() { debugPrint("Ability destroyed"); }
        
        virtual void useAbility(Unit& unit) = 0;
        virtual void useSelfAbility(Unit& unit) = 0;
};

#endif // ABILITY_HPP