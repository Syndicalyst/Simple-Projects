#ifndef CAST_HPP
#define CAST_HPP

#include "../Helpers/Debug.hpp"
#include "../Units/Unit.hpp"
#include "../Spells/Spell.hpp"

class Cast {
    public:
        Cast();
        virtual ~Cast();
        
        virtual void action(Unit& unit, Spell& spell);
        virtual void action(Spell& spell);
};

#endif // CAST_HPP