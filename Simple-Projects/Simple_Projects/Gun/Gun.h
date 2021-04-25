#ifndef GUN_H
#define GUN_H

#include <iosfwd>

class OutOfRounds {};
class NotReady {};

class Gun {
    private:
        std::string model;
        int capacity;
        int amount;
        int totalShots;
        bool isReady;
    public:
        Gun(std::string model="Beretta", int capacity=8);
        ~Gun();

        int getAmount() const;
        int getCapacity() const;
        bool ready() const;
        const std::string& getModel() const;
        int getTotalShots() const;

        void prepare();
        void reload();
        void shoot();
};

std::ostream& operator<<(std::ostream& out, const Gun& gun);

#endif //GUN_H
