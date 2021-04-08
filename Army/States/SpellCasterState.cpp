#include "SpellCasterState.hpp"

SpellCasterState::SpellCasterState(int mana) {
    this->mana = mana;
    this->manaLimit = mana;
    debugPrint("SpellCasterState created");
}
SpellCasterState::~SpellCasterState() {
    debugPrint("SpellCasterState created");
}

int SpellCasterState::getMana() const {
    return this->mana;
}
int SpellCasterState::getManaLimit() const {
    return this->manaLimit;
}

void SpellCasterState::addMana(int mana) {
    int freeMana = this->manaLimit - this->mana;

    if (mana > freeMana) {
        mana = freeMana;
    }
    this->mana += mana;
}
void SpellCasterState::reduceMana(int mana) {
    if ( mana > this->manaLimit ) {
        this->mana = 0;
    } else {
        this->mana -= mana;
    }
}

std::ostream& operator<<(std::ostream& out, const SpellCasterState& scState) {
    out << "Unit Mana: " << scState.getMana() << '/' << scState.getManaLimit() << std::endl;
    return out;
}