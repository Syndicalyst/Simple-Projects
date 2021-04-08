#ifndef SUMMONDEMON_HPP
#define SUMMONDEMON_HPP

#include "../../Helpers/Debug.hpp"
#include "../Spell.hpp"
#include "../../Units/Unit.hpp"
#include "../../Units/Demon/Demon.hpp"

class SummonDemon : public Spell {
    public:
        SummonDemon();
        ~SummonDemon();
        
        Unit* summon(int x, int y) const;
};

#endif // SUMMONDEMON_HPP