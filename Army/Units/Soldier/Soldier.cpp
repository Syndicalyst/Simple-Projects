#include "Soldier.hpp"

Soldier::Soldier(const std::string& name, int x, int y, int hp, int dmg) 
                : Unit(name, x, y, new State(hp, dmg), new BaseAttack(), UnitType::SOLDIER, UnitType::ALIVE) {
    
    debugPrint("Soldier created", this->getName());
}
Soldier::~Soldier() {
    debugPrint("Soldier destroyed", this->getName());
}