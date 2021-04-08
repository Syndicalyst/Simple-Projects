#include "Fireball.hpp"

Fireball::Fireball() : Spell("Fireball", (int)SpellCost::FIREBALL, (int)SpellDmg::FIREBALL, SpellType::DMG) {
    debugPrint("Fireball created");
}
Fireball::~Fireball() {
    debugPrint("Fireball destroyed");
}