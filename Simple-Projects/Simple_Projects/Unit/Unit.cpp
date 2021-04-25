#include <ostream>
#include "Unit.h"

void Unit::ensureIsAlive() {
    if (hitPoints <= 0) {
        throw new UnitIsDead();
    }
}

Unit::Unit(std::string name, int hp, int dmg):
        name(std::move(name)),
        damage(dmg),
        hitPoints(hp),
        hitPointsLimit(hp) {
}

Unit::~Unit() = default;

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
    } else {
        hitPoints += hp;
    }
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
    out << "Unit name: " << unit.getName() << '\n';
    out << "Unit health: " << unit.getHitPoints() << '/' << unit.getHitPointsLimit() << '\n';
    out << "Unit damage: " << unit.getDamage() << '\n';  
}
