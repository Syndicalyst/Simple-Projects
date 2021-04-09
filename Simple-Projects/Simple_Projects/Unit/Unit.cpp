#include "Unit.h"

void Unit::ensureIsAlive() {
    if (hitPoints <= 0) {
        throw new UnitIsDead();
    }
}

Unit::Unit(const std::string& name, int hp, int dmg) {
    this->name = name;
    this->damage = dmg;
    this->hitPointsLimit = hp;
    this->hitPoints = hp;
}

Unit::~Unit() {}

int Unit::getDamage() const {
    return this->damage;
}
int Unit::getHitPoints() const {
    return this->hitPoints;
}
int Unit::getHitPointsLimit() const {
    return this->hitPointsLimit;
}
const std::string& Unit::getName() const {
    return this->name;
}

void Unit::addHitPoints(int hp) {
    if (hitPoints + hp > hitPointsLimit) {
        hitPoints = hitPointsLimit;
    }
    hitPoints += hp;
}
void Unit::takeDamage(int dmg) {
    ensureIsAlive();

    hitPoints -= dmg;

    if (hitPoints <= 0) {
        throw UnitIsDead();
    }
}

void Unit::attack(Unit& enemy) {
    enemy.takeDamage(damage);
}

void Unit::counterAttack(Unit& enemy) {
    enemy.takeDamage(damage/2);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << "Unit name: " << unit.getName() << std::endl;
    out << "Unit Health: " << unit.getHitPoints() << '/' << unit.getHitPointsLimit() << std::endl;
    out << "Unit Damage: " << unit.getDamage() << std::endl;  
}