#ifndef WOLFSTATES_HPP
#define WOLFSTATES_HPP

#define WOLF_MAGIC_DMG_COEFF 1.5

#include "../../Helpers/Debug.hpp"
#include "../State.hpp"

class WolfState : public State {
    public:
        WolfState(int hp, int dmg);
        ~WolfState();
        
        void takeMagicDamage(int dmg);
};

#endif // WOLFSTATES_HPP