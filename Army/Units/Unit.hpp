#ifndef UNIT_HPP
#define UNIT_HPP

#define PART_HP_NECR 0.1
#define ATTACK_DIST 1

#include <iostream>
#include <set>
#include "../Helpers/Debug.hpp"
#include "../Helpers/Exceptions.hpp"
#include "../Helpers/Default.hpp"
#include "../Interfaces/Observable.hpp"
#include "../Interfaces/Observer.hpp"
#include "../Attacks/BaseAttack.hpp"
#include "../Abilities/Ability.hpp"
#include "../Location/Location.hpp"
#include "../States/State.hpp"

class State;
class BaseAttack;
class Ability;
class Location;

enum class UnitType {
    SOLDIER,
    ROGUE,
    BERSERKER,
    VAMPIRE,
    WEREWOLF,
    WOLF,
    DEMON,
    
    WIZARD,
    HEALER,
    PRIEST,
    WARLOCK,
    NECROMANCER,
    
    ALIVE,
    UNDEAD
};

class Unit : public Observable {
    protected:
        std::string name;
        State *state;
        State *altState;
        int hitPoints;
        int hitPointLimit;
        BaseAttack *baseAttack;
        Ability *ability;
        Location *location;
        UnitType type;
        UnitType stateType;
        
        std::set<Observer*> observers;
    public:
        Unit(const std::string& name, int x, int y, State *state, BaseAttack *bAttack, UnitType type, UnitType stateType, Ability *ability=NULL);
        virtual ~Unit();
        
        bool isAlive();
        void esureIsAlive();
        
        const std::string& getName() const;
        
        State& getState() const;
        State& getAltState() const;
        
        UnitType getType() const;
        UnitType getStateType() const;
        
        BaseAttack* getAttack() const;
        Ability* getAbility() const;
        
        Location& getLocation() const;
        
        int getDamage() const;
        
        void addHitPoints(int hp);
        void setName(const std::string& name);
        void takeDamage(int dmg);
        virtual void takeMagicDamage(int dmg);
        
        virtual void attack(Unit& enemy);
        virtual void counterAttack(Unit& enemy);
        
        virtual void useAbility();
        virtual void useAbility(Unit& unit);
        
        virtual void addObserver(Observer *observer);
        virtual void removeObserver(Observer *observer);
        virtual void notify();
        
        void setType(UnitType type);
        void setStateType(UnitType type);
        void setAttack(BaseAttack *attack);
        void setState(State *state);
        void setAltState(State *state);
        void setAbility(Ability *ability);
        
        void move(char direction);
        double distance(Unit& unit);
        char typeToChar(const UnitType& type);
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);
std::ostream& operator<<(std::ostream& out, const UnitType& type);

#endif UNIT_HPP