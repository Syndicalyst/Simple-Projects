#ifndef HEALER_H
#define HEALER_H

#include "../../Helpers/Debug.hpp"
#include "../SpellCaster.hpp"
#include "../../States/State.hpp"
#include "../../Cast/HealerCast/HealerCast.hpp"

class Healer : public SpellCaster {
    public:
        Healer(const std::string& name, int x, int y, int mana=(int)Mana::HEALER, int hp=(int)Health::HEALER, int dmg=(int)Damage::HEALER);
        ~Healer();
};

#endif // HEALER_H