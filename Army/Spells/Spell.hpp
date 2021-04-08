#ifndef SPELL_HPP
#define SPELL_HPP

#include "../Helpers/Debug.hpp"
#include "../Helpers/Default.hpp"
#include "../Units/Unit.hpp"

enum class SpellType {
    DMG,
    HEAL,
    SUMMON
};

class Spell {
    protected:
        std::string name;
        int manaCost;
        int damage;
        SpellType type;
    public:
        Spell(const std::string& name, int manaCost, int damage, SpellType type);
        virtual ~Spell();
        
        const std::string& getName() const;
        int getManaCost() const;
        int getDamage() const;
        SpellType getType() const;
        virtual Unit* summon(int x, int y) const;
};

std::ostream& operator<<(std::ostream& out, const Spell& spell);

#endif // SPELL_HPP