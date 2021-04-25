#include "Gun.h"

Gun::Gun(const std::string& model, int capacity): model("Beretta"), capacity(8), amount(0), totalShots(0)  {
    this->model = model;
    this->capacity = capacity;
    this->amount = 0;
    this->isReady = false;
    this->totalShots = 0;
}

Gun::~Gun() {}

int Gun::getAmount() const {
    return this->amount;
}
int Gun::getCapacity() const {
    return this->capacity;
}
bool Gun::ready() const {
    return this->isReady;
}
const std::string& Gun::getModel() const {
    return this->model;
}
int Gun::getTotalShots() const {
    return this->totalShots;
}

void Gun::prepare() {
    this->isReady = true;
}
void Gun::reload() {
    amount = capacity;
}
void Gun::shoot() {
    if (amount == 0) {
        throw OutOfRounds();
    }
    if (!isReady) {
        throw NotReady();
    }
    amount -= 1;
    totalShots += 1;
    std::cout << "Bang!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Gun& gun) {
    out << "model: " << gun.getModel() << std::endl;
    if (gun.ready()) {
        out << "Gun is ready!" << std::endl;
    } else {
        out << "Gun isn`t ready!" << std::endl;
    }
    out << "ammo: " << gun.getAmount() << '/' << gun.getCapacity() << std::endl;
    out << "Shots made by this gun: " << gun.getTotalShots() << std::endl;
}