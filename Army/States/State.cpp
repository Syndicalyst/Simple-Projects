#include "State.hpp"

State::State(int hp, int dmg) {
    this->hitPoints = hp;
    this->damage = dmg;
    this->hitPointsLimit = hp;
    debugPrint("State created");
}
State::~State() { 
    debugPrint("State created"); 
}

int State::getDamage() const {
    return this->damage;
}
int State::getHitPoints() const {
    return this->hitPoints;
}
int State::getHitPointsLimit() const {
    return this->hitPointsLimit;
}

void State::setDamage(int dmg) {
    this->damage = damage;
}
void State::setHitPoints(int hp) {
    this->hitPoints = hp;
}
void State::setHitPointsLimit(int hpLim) {
    this->hitPointsLimit = hpLim;
}

void State::addHitPoints(int hp) {
    int freeHitPoints = this->hitPointsLimit - this->hitPoints;
    
    if ( hp > freeHitPoints ) {
        hp = freeHitPoints;
    }
    
    this->hitPoints += hp;
}
void State::takeDamage(int dmg) {
    if ( dmg > this->hitPoints ) {
        this->hitPoints = 0;
    } else {
        this->hitPoints -= dmg;
    }
}
void State::takeMagicDamage(int dmg) {
    this->takeDamage(1.5 * dmg);
    
    debugPrint("Unit take Magic Damage");
}

void State::transform(Unit& unit) {}

std::ostream& operator<<(std::ostream& out, const State& state) {
    out << "Unit Health: " << state.getHitPoints() << '/' << state.getHitPointsLimit() << std::endl;
    out << "Unit Damage: " << state.getDamage() << std::endl;

    return out;
}