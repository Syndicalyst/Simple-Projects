#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include "../Helpers/Debug.hpp"

class Observer {
    public:
        Observer() { debugPrint("Observer created"); };
        ~Observer() { debugPrint("Observer destroyed"); };
        
        virtual void update(int hp) = 0;
};

#endif // OBSERVER_HPP