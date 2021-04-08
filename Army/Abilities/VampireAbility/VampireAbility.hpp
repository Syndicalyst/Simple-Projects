#ifndef VAMPIREABILITY_HPP
#define VAMPIREABILITY_HPP

#include <sstream>
#include "../../Helpers/Debug.hpp"
#include "../Ability.hpp"
#include "../../Attacks/VampireAttack/VampireAttack.hpp"
#include "../../Units/Vampire/Vampire.hpp"
#include "../../States/State.hpp"
#include "../../Units/SpellCaster.hpp"
#include "../../Units/Unit.hpp"

class Unit;

class VampireAbility : public Ability {
    public:
        VampireAbility();
        ~VampireAbility();
        
        void useAbility(Unit& unit);
        void useSelfAbility(Unit& unit);
        void infect(Unit& unit);
        void infectSpellCaster(Unit& unit);
        
        void setPoint(Unit& unit);
};

#endif // VAMPIREABILITY_HPP