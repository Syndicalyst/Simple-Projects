#include "Priest.hpp"

Priest::Priest(const std::string& name, int x, int y, int mana, int hp, int dmg)
             : SpellCaster(name, x, y,
               new State(hp, dmg),
               new SpellCasterState(mana),
               new PriestAttack(),
               new SpellBook(),
               UnitType::PRIEST,
               UnitType::ALIVE,
               new PriestCast()) {
    this->spellBook->insertSpell(new Fireball());
    this->spellBook->insertSpell(new MagicArrow());
    this->spellBook->insertSpell(new Healing());
    
    debugPrint("Priest created", this->getName());
}

Priest::~Priest() {
    debugPrint("Priest destroyed", this->getName());
}