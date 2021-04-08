#ifndef OBSERVABLE_HPP
#define OBSERVABLE_HPP

#include "../Helpers/Debug.hpp"
#include "Observer.hpp"

class Observable {
    public:
        Observable() { debugPrint("Observable created"); };
        ~Observable() { debugPrint("Observable destroyed"); };
        
        virtual void addObserver(Observer *observer) = 0;
        virtual void removeObserver(Observer *observer) = 0;
        virtual void notify() = 0;
};

#endif // OBSERVABLE_HPP