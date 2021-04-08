#include "SummonDemon.hpp"

SummonDemon::SummonDemon() : Spell("Summon Demon", (int)SpellCost::SUMMONDEMON, 0, SpellType::SUMMON) {
    debugPrint("SummonDemon created");
}
SummonDemon::~SummonDemon() {
    debugPrint("SummonDemon destroyed");
}

Unit* SummonDemon::summon(int x, int y) const {
    Unit *demon = new Demon("Demon", x, y);
    
    return demon;
}