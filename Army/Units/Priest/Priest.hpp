
#ifndef PRIEST_HPP
#define PRIEST_HPP

#include "../../Helpers/Debug.hpp"
#include "../SpellCaster.hpp"
#include "../../States/State.hpp"
#include "../../Cast/PriestCast/PriestCast.hpp"
#include "../../Attacks/PriestAttack/PriestAttack.hpp"

class Priest : public SpellCaster {
    public:
        Priest(const std::string& name, int x, int y, int mana=(int)Mana::PRIEST, int hp=(int)Health::PRIEST, int dmg=(int)Damage::PRIEST);
        ~Priest();
};

#endif // PRIEST_HPP