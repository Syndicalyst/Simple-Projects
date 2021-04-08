#ifndef BERSERKER_HPP
#define BERSERKER_HPP

#include "../../Helpers/Debug.hpp"
#include "../Unit.hpp"
#include "../../States/BerserkerState/BerserkerState.hpp"

class Berserker : public Unit {
    public:
        Berserker(const std::string&, int x, int y, int hp=(int)Health::BERSERKER, int dmg=(int)Damage::BERSERKER);
        ~Berserker();
};

#endif // BERSERKER_HPP