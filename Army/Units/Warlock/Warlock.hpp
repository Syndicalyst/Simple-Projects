#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <set>
#include "../../Helpers/Debug.hpp"
#include "../SpellCaster.hpp"
#include "../../States/State.hpp"
#include "../../Cast/Cast.hpp"
#include "../../Attacks/WarlockAttack/WarlockAttack.hpp"
#include "../../Location/Point.hpp"

class Warlock : public SpellCaster {
    private:
        std::set<Unit*> demons;
    public:
        Warlock(const std::string& name, int x, int y, int mana=(int)Mana::WARLOCK, int hp=(int)Health::WARLOCK, int dmg=(int)Damage::WARLOCK);
        ~Warlock();
        
        const std::set<Unit*>& getDemons() const;
        void castAction(Spell& spell);
        
        void showSpecial() const;
        void useAbility();
};

std::ostream& operator<<(std::ostream& out, const std::set<Unit*>& demons);

#endif // WARLOCK_HPP