#ifndef WIZARDCAST_HPP
#define WIZARDCAST_HPP

#include "../Cast.hpp"

class WizardCast : public Cast {
    public:
        WizardCast();
        ~WizardCast();
        
        void action(Unit& unit, Spell& spell);
};

#endif // WIZARDCAST_HPP