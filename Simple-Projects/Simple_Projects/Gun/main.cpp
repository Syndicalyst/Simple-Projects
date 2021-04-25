#include <iostream>
#include "Gun.h"

static void tryShoot(Gun& gun) {
    try {
        gun.shoot();
    } catch (NotReady) {
        std::cout << "Distort your gun shutter!\n" << std::endl;
    } catch (OutOfRounds) {
        std::cout << "Reload your gun!\n" << std::endl;
    }
}

int main() {
    Gun rifle("SVT-38", 10);
    Gun pistol("Mauser-23", 15);
    
    std::cout << "My New Rifle:\n" << rifle << std::endl;
    std::cout << "My New Pistol:\n" << pistol << std::endl;

    tryShoot(rifle);
    rifle.reload();
    rifle.prepare();
    
    pistol.reload();
    pistol.prepare();
    
    for ( int i = 0; i < 10; ++i ) {
        rifle.shoot();
    }

    tryShoot(rifle);
    pistol.shoot();

    std::cout << "My New Rifle:\n" << rifle << std::endl;
    std::cout << "My New Pistol:\n" << pistol << std::endl;

    rifle.prepare();
    rifle.reload();
    pistol.reload();

    std::cout << "My New Rifle:\n" << rifle << std::endl;
    std::cout << "My New Pistol:\n" << pistol << std::endl;

    return 0;
}
