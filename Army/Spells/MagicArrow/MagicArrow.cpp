#include "MagicArrow.hpp"

MagicArrow::MagicArrow() : Spell("Magic Arrow", (int)SpellCost::MAGICARROW, (int)SpellDmg::MAGICARROW, SpellType::DMG) {
    debugPrint("MagicArrow created");
}
MagicArrow::~MagicArrow() {
    debugPrint("MagicArrow destroyed");
}