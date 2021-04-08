#include "Wizard.hpp"

Wizard::Wizard(const std::string& name, int x, int y, int mana, int hp, int dmg)
             : SpellCaster(name, x, y,
               new State(hp, dmg),
               new SpellCasterState(mana),
               new BaseAttack(),
               new SpellBook(),
               UnitType::WIZARD,
               UnitType::ALIVE,
               new WizardCast()) {
    this->spellBook->insertSpell(new Fireball());
    this->spellBook->insertSpell(new MagicArrow());
    this->spellBook->insertSpell(new Healing());
    
    debugPrint("Wizard created", this->getName());
}

Wizard::~Wizard() {
    debugPrint("Wizard destroyed", this->getName());
}