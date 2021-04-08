#ifndef SPELLCASTER_HPP
#define SPELLCASTER_HPP

#define SPELL_DIST 2

#include "../Helpers/Debug.hpp"
#include "Unit.hpp"
#include "../States/SpellCasterState.hpp"
#include "../Spells/Spell.hpp"
#include "../Spells/SpellBook.hpp"
#include "../Cast/Cast.hpp"


class SpellCaster : public Unit {
    protected:
        SpellBook *spellBook;
        SpellCasterState *scState;
        Cast *cast;
        bool canCast;
    public:
        SpellCaster(const std::string& name, int x, int y, State *state, SpellCasterState *scState, BaseAttack *bAttack, SpellBook *spellBook, UnitType type, UnitType stateType, Cast *cast);
        virtual ~SpellCaster();
        
        SpellCasterState& getScState() const;
        int getMana() const;
        SpellBook& getSpellBook() const;
        Spell& getSpell(const std::string name) const;
        bool getCanCast() const;
        
        void addMana(int mana);
        
        void castAction(Unit& unit, Spell& spell);
        virtual void castAction(Spell& spell);
        
        bool haveMana() const;
        bool haveEnoughMana(Spell& spell) const;
        
        void showSpellBook() const;
        virtual void showSpecial() const;
        
        void setCantCast();
};

std::ostream& operator<<(std::ostream& out, const SpellCaster& sCaster);

bool isSpellCaster(Unit& unit);

#endif // SPELLCASTER_HPP