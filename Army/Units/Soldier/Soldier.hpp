#ifndef SOLDIER_HPP
#define SOLDIER_HPP

#include "../../Helpers/Debug.hpp"
#include "../Unit.hpp"
#include "../../States/State.hpp"

class Soldier : public Unit {
    public:
        Soldier(const std::string& name, int x, int y, int hp=(int)Health::SOLDIER, int dmg=(int)Damage::SOLDIER);
        virtual ~Soldier();
};

#endif // SOLDIER_HPP