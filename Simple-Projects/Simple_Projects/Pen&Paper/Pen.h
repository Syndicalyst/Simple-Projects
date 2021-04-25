#ifndef PEN_H
#define PEN_H

#include "Paper.h"

class OutOfInk {};

class Pen {
    private:
        size_t inkAmount;
        size_t inkCapacity;
    public:
        Pen(size_t inkCapacity=4096);
        ~Pen();

        size_t getInkAmount() const;
        size_t getInkCapacity() const;

        void write(Paper& paper, const std::string& message);
        void refill();
};


#endif //PEN_H
