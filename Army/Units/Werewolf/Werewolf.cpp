#include "Werewolf.hpp"

Werewolf::Werewolf(const std::string& name, int x, int y, int hp, int dmg) 
                : Unit(name, x, y,
                  new WerewolfState(hp, dmg),
                  new WerewolfAttack(),
                  UnitType::WEREWOLF,
                  UnitType::ALIVE,
                  new WerewolfAbility()) {
    
    debugPrint("Werewolf created", this->getName());
}
Werewolf::~Werewolf() {
    debugPrint("Werewolf destroyed", this->getName());
}