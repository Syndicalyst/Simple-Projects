#ifndef STATE_HPP
#define STATE_HPP

#include <iostream>
#include "../Helpers/Debug.hpp"
#include "../Units/Unit.hpp"

class Unit;

class State {
    private:
        int damage;
        int hitPoints;
        int hitPointsLimit;
    public:
        State(int hp, int dmg);
        virtual ~State();
        
        int getDamage() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        
        void setDamage(int dmg);
        void setHitPoints(int hp);
        void setHitPointsLimit(int hpLim);
        
        void addHitPoints(int hp);
        void takeDamage(int hp);
        virtual void takeMagicDamage(int dmg);
        
        virtual void transform(Unit& unit);
};

std::ostream& operator<<(std::ostream& out, const State& state);

#endif //STATE_HPP
