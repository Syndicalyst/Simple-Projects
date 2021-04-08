#ifndef PRIESTCAST_HPP
#define PRIESTCAST_HPP

#include "../Cast.hpp"

class PriestCast : public Cast {
    public:
        PriestCast();
        ~PriestCast();
        
        void action(Unit& unit, Spell& spell);
};

#endif // PRIESTCAST_HPP