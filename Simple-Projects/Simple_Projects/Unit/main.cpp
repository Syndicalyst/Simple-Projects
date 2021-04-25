#include <iostream>
#include "Unit.h"

static void reportDead(const Unit& unit) {
    std::cout << "Unit " << unit.getName() << " is dead!\n" << std::endl;
}

int main() {
    Unit militia("Militiaman Johnny", 40, 15);
    Unit cavalry("Knight Richard", 120, 50);

    std::cout << militia << std::endl;
    std::cout << cavalry << std::endl;

    try {
        cavalry.attack(militia);
    } catch (UnitIsDead) {
        reportDead(militia);
    }
    
    std::cout << militia << std::endl;
    std::cout << cavalry << std::endl;

    try {
        militia.addHitPoints(10);
    } catch (UnitIsDead) {
        reportDead(militia);
    }

    cavalry.addHitPoints(10);

    std::cout << militia << std::endl;
    std::cout << cavalry << std::endl;

	return 0;
}
