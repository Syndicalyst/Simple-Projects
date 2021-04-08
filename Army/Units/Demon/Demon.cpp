#include "Demon.hpp"

Demon::Demon(const std::string& name, int x, int y, int hp, int dmg) : Soldier(name, x, y, hp, dmg) {
    this->type = UnitType::DEMON;
    debugPrint("Demon created", this->getName());
}
Demon::~Demon() {
    debugPrint("Demon destroyed", this->getName());
}