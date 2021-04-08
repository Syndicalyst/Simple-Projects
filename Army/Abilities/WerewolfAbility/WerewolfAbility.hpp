#ifndef WEREWOLFABILITY_HPP
#define WEREWOLFABILITY_HPP

#define TRANSFORM_COEF 2

#include <sstream>
#include "../../Helpers/Debug.hpp"
#include "../Ability.hpp"
#include "../../Attacks/WerewolfAttack/WerewolfAttack.hpp"
#include "../../States/WolfState/WolfState.hpp"
#include "../../States/WerewolfState/WerewolfState.hpp"
#include "../../Units/SpellCaster.hpp"

class WerewolfAbility : public Ability{
    public:
        WerewolfAbility();
        ~WerewolfAbility();
        
        void useAbility(Unit& unit);
        void useSelfAbility(Unit& unit);
        void selfTransform(Unit& unit);
        void infect(Unit& unit);
        void infectSpellCaster(Unit& unit);
        
        void setPoint(Unit& unit);
};

#endif // WEREWOLFABILITY_HPP