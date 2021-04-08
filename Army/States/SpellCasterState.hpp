#ifndef SPELLCASTERSTATE_HPP
#define SPELLCASTERSTATE_HPP

#include "../Helpers/Debug.hpp"

class SpellCasterState {
    private:
        int mana;
        int manaLimit;
    public:
        SpellCasterState(int mana);
        ~SpellCasterState();
        
        int getMana() const;
        int getManaLimit() const;
        
        void addMana(int mana);
        void reduceMana(int mana);
};

std::ostream& operator<<(std::ostream& out, const SpellCasterState& scState);

#endif // SPELLCASTERSTATE_HPP