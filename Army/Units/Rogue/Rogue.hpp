#ifndef ROGUE_HPP
#define ROGUE_HPP

#include "../../Helpers/Debug.hpp"
#include "../Unit.hpp"
#include "../../States/State.hpp"
#include "../../Attacks/RogueAttack/RogueAttack.hpp"

class Rogue : public Unit {
    public:
        Rogue(const std::string& name, int x, int y, int hp=(int)Health::ROGUE, int dmg=(int)Damage::ROGUE);
        ~Rogue();
};


#endif // ROGUE_HPP