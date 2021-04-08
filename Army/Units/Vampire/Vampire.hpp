#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#define HP_LIMIT_COEFF_VAM 1.6

#include "../../Helpers/Debug.hpp"
#include "../Unit.hpp"
#include "../../States/State.hpp"
#include "../../Attacks/VampireAttack/VampireAttack.hpp"
#include "../../Abilities/VampireAbility/VampireAbility.hpp"

class Vampire : public Unit {
    public:
        Vampire(const std::string& name, int x, int y, int hp=(int)Health::VAMPIRE, int dmg=(int)Damage::VAMPIRE);
        ~Vampire();
};

#endif // VAMPIRE_HPP