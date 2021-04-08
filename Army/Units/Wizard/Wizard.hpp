#ifndef WIZARD_HPP
#define WIZARD_HPP

#include "../../Helpers/Debug.hpp"
#include "../SpellCaster.hpp"
#include "../../States/State.hpp"
#include "../../Cast/WizardCast/WizardCast.hpp"

class Wizard : public SpellCaster {
    public:
        Wizard(const std::string& name, int x, int y, int mana=(int)Mana::WIZARD, int hp=(int)Health::WIZARD, int dmg=(int)Damage::WIZARD);
        ~Wizard();
};

#endif // WIZARD_HPP