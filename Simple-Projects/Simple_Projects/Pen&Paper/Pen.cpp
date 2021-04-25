#include "Pen.h"

Pen::Pen(int inkCapacity): inkCapacity(4096) {
    this->inkCapacity = inkCapacity;
    this->inkAmount = inkCapacity;
}

Pen::~Pen() {}

int Pen::getInkAmount() const {
    return this->inkAmount;
}
int Pen::getInkCapacity() const {
    return this->inkCapacity;
}

void Pen::write(Paper& paper, const std::string& message) {
    if (inkAmount == 0) {
        throw OutOfInk();
    }
    if (inkAmount < message.length()) {
        paper.addContent(message.substr(0, inkAmount - 1));
        inkAmount = 0;
        return;
    }
    paper.addContent(message);
    inkAmount -= message.length();
}

void Pen::refill() {
    inkAmount = inkCapacity;
}