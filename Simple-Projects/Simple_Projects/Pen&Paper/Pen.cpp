#include "Pen.h"

Pen::Pen(size_t inkCapacity): inkCapacity(inkCapacity), inkAmount(inkCapacity) {
}

Pen::~Pen() = default;

size_t Pen::getInkAmount() const {
    return this->inkAmount;
}

size_t Pen::getInkCapacity() const {
    return this->inkCapacity;
}

void Pen::write(Paper& paper, const std::string& message) {
    if (inkAmount == 0) {
        throw OutOfInk();
    }
    if (inkAmount < message.length()) {
        paper.addContent(message.substr(0, inkAmount));
        inkAmount = 0;
        return;
    }
    paper.addContent(message);
    inkAmount -= message.length();
}

void Pen::refill() {
    inkAmount = inkCapacity;
}
