#include <iostream>
#include "Unit.h"

int main() {
    Unit militia("Militiaman Johnny", 40, 15);
    Unit cavalry("Knight Richard", 120, 50);

    std::cout << militia << std::endl;
    std::cout << cavalry << std::endl;

    try {
        cavalry.attack(militia);
    } catch (UnitIsDead) {
        std::cout << "Unit " << militia.getName() << " is dead!\n" << std::endl;
    }
    
    std::cout << militia << std::endl;
    std::cout << cavalry << std::endl;

    try {
        militia.addHitPoints(10);
    } catch (UnitIsDead) {
        std::cout << "Unit " << militia.getName() << " is dead!\n" << std::endl;
    }

    cavalry.addHitPoints(10);

    std::cout << militia << std::endl;
    std::cout << cavalry << std::endl;

	return 0;
}