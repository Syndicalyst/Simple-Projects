#ifndef WEREWOLFSTATES_HPP
#define WEREWOLFSTATES_HPP

#include "../../Helpers/Debug.hpp"
#include "../State.hpp"
#include "../WolfState/WolfState.hpp"


class WerewolfState : public State {
    public:
        WerewolfState(int hp, int dmg);
        ~WerewolfState();
};

#endif // WEREWOLFSTATES_H