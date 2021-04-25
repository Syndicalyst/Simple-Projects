#ifndef UNIT_H
#define UNIT_H

#include <iosfwd>
#include <string>

class UnitIsDead {};

class Unit {
    private:
        std::string name;
        int damage;
        int hitPoints;
        int hitPointsLimit;

        void ensureIsAlive();
    public:
        Unit(std::string name, int hp, int dmg);
        ~Unit();

        int getDamage() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        const std::string& getName() const;

        void addHitPoints(int hp);
        void takeDamage(int dmg);

        void attack(Unit& enemy);
        void counterAttack(Unit& enemy);
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //UNIT_H
