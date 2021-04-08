#ifndef DEMON_HPP
#define DEMON_HPP

#include "../../Helpers/Debug.hpp"
#include "../Unit.hpp"
#include "../Soldier/Soldier.hpp"
#include "../../States/State.hpp"

class Demon : public Soldier {
    public:
        Demon(const std::string& name, int x, int y, int hp=(int)Health::DEMON, int dmg=(int)Damage::DEMON);
        ~Demon();
};

#endif // DEMON_HPP