#include <iostream>
#include "Gun.h"

Gun::Gun(std::string model, int capacity):
        model(std::move(model)),
        capacity(capacity),
        amount(0),
        totalShots(0),
        isReady(false) {
}

Gun::~Gun() = default;

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
    --amount;
    ++totalShots;
    std::cout << "Bang!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Gun& gun) {
    out << "model: " << gun.getModel() << '\n';
    if (gun.ready()) {
        out << "Gun is ready!";
    } else {
        out << "Gun isn`t ready!";
    }
    out << "\nammo: " << gun.getAmount() << '/' << gun.getCapacity();
    out << "\nShots made by this gun: " << gun.getTotalShots() << '\n';
}
