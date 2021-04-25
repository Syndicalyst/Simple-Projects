#ifndef PAPER_H
#define PAPER_H

#include <string>

class OutOfSpace {};

class Paper {
    private:
        size_t maxSymbols;
        size_t symbols;
        std::string content;
    public:
        Paper(size_t maxSymbols=4096);
        ~Paper();

        size_t getMaxSymbols() const;
        size_t getSymbols() const;

        void addContent(const std::string& message);
        void show() const;
};

#endif //PAPER_H
