#ifndef HEALERCAST_HPP
#define HEALERCAST_HPP

#include "../Cast.hpp"

class HealerCast : public Cast {
    public:
        HealerCast();
        ~HealerCast();
        
        void action(Unit& unit, Spell& spell);
};

#endif // HEALERCAST_HPP