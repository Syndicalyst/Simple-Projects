#include "Healing.hpp"

Healing::Healing() : Spell("Healing", (int)SpellCost::CURE, (int)SpellDmg::CURE, SpellType::HEAL) {
    debugPrint("Healing created");
}
Healing::~Healing() {
    debugPrint("Healing destroyed");
}