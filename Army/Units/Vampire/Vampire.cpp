#include "Vampire.hpp"

Vampire::Vampire(const std::string& name, int x, int y, int hp, int dmg) 
                : Unit(name, x, y,
                  new State(hp, dmg),
                  new VampireAttack(),
                  UnitType::VAMPIRE,
                  UnitType::UNDEAD,
                  new VampireAbility()) {
    
    debugPrint("Vampire created", this->getName());
}

Vampire::~Vampire() {
    debugPrint("Vampire destroyed", this->getName());
}