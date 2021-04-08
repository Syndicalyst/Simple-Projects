#ifndef WEREWOLF_HPP
#define WEREWOLF_HPP

#include "../../Helpers/Debug.hpp"
#include "../Unit.hpp"
#include "../../States/State.hpp"
#include "../../Attacks/WerewolfAttack/WerewolfAttack.hpp"
#include "../../States/WerewolfState/WerewolfState.hpp"
#include "../../Abilities/WerewolfAbility/WerewolfAbility.hpp"

class Werewolf : public Unit {
    public:
        Werewolf(const std::string& name, int x, int y, int hp=(int)Health::WEREWOLF, int dmg=(int)Damage::WEREWOLF);
        ~Werewolf();
};

#endif // WEREWOLF_HPP