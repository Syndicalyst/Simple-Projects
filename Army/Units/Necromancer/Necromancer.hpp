#ifndef NECROMANCER_HPP
#define NECROMANCER_HPP

#define HP_LIMIT_COEFF_NECR 1.5

#include "../../Helpers/Debug.hpp"
#include "../SpellCaster.hpp"
#include "../../States/State.hpp"
#include "../../Cast/Cast.hpp"
#include "../../Interfaces/Observer.hpp"

class Necromancer : public SpellCaster, public Observer {
    public:
        Necromancer(const std::string& name, int x, int y, int mana=(int)Mana::NECROMANCER, int hp=(int)Health::NECROMANCER, int dmg=(int)Damage::NECROMANCER);
        ~Necromancer();
        
        virtual void update(int hp);
        
        virtual void attack(Unit& enemy);
        virtual void counterAttack(Unit& enemy);
};

#endif // NECROMANCER_HPP