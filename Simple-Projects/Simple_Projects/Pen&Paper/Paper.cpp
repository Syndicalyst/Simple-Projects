#include "Paper.h"

Paper::Paper(int maxSymbols): maxSymbols(4096) {
    this->maxSymbols = maxSymbols;
    this->symbols = 0;
    this->content = "";
}

Paper::~Paper() {}

int Paper::getMaxSymbols() const {
    return this->maxSymbols;
}
int Paper::getSymbols() const {
    return this->symbols;
}

void Paper::addContent(const std::string& message) {
    int total = symbols += message.length();

    if (symbols == maxSymbols) {
        throw OutOfSpace();
    }
    if (total > maxSymbols) {
        int len = maxSymbols - symbols;

        content += message.substr(0, len - 1);
        symbols = maxSymbols;
        return;
    }
    content += message;
    symbols += message.length();
}

void Paper::show() const {
    std::cout << content << std::endl;
}