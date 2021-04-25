#include <iostream>
#include "Gun.h"

int main() {
    Gun rifle( "SVT-38", 10);
    Gun pistol( "Mauser-23", 15);
    
    std::cout << "\nMy New Gun:\n" << rifle << std::endl;
    std::cout << "\nMy New Pistol:\n" << pistol << std::endl;

    try {
        rifle.shoot();
    } catch (NotReady) {
        std::cout << "Distort your gun shutter!\n" << std::endl;
    } catch (OutOfRounds) {
        std::cout << "\nReload your gun!\n" << std::endl;
    }

    rifle.reload();
    rifle.prepare();
    
    pistol.reload();
    pistol.prepare();
    
    for ( int i = 0; i < 10; i++ ) {
        rifle.shoot();
    }

    try {
        rifle.shoot();
    } catch (NotReady) {
        std::cout << "Distort your gun shutter!\n" << std::endl;
    } catch (OutOfRounds) {
        std::cout << "\nReload your gun!\n" << std::endl;
    }

    pistol.shoot();

    std::cout << "\nMy New Gun:\n" << rifle << std::endl;
    std::cout << "\nMy New Pistol:\n" << pistol << std::endl;

    rifle.prepare();
    rifle.reload();
    pistol.reload();

    std::cout << "\nMy New Gun:\n" << rifle << std::endl;
    std::cout << "\nMy New Pistol:\n" << pistol << std::endl;

    return 0;
}