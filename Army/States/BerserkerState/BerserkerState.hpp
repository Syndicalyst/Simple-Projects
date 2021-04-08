#ifndef BERSERKERSTATES_HPP
#define BERSERKERSTATES_HPP

#include "../../Helpers/Debug.hpp"
#include "../State.hpp"

class BerserkerState : public State {
    public:
        BerserkerState(int hp, int dmg);
        ~BerserkerState();
        
        void takeMagicDamage(int dmg);
};

#endif // BERSERKERSTATES_HPP