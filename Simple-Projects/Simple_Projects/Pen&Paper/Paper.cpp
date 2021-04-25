#include <iostream>
#include "Paper.h"

Paper::Paper(size_t maxSymbols): maxSymbols(maxSymbols), symbols(0) {
}

Paper::~Paper() = default;

size_t Paper::getMaxSymbols() const {
    return this->maxSymbols;
}

size_t Paper::getSymbols() const {
    return this->symbols;
}

void Paper::addContent(const std::string& message) {
    const size_t total = symbols + message.length();

    if (symbols == maxSymbols) {
        throw OutOfSpace();
    }
    if (total > maxSymbols) {
        const size_t remaining = maxSymbols - symbols;

        content.append(message, 0, remaining);
        symbols = maxSymbols;
        return;
    }

    content += message;
    symbols = total;
}

void Paper::show() const {
    std::cout << content << std::endl;
}
