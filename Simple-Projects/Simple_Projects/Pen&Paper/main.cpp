#include <iostream>
#include "Paper.h"
#include "Pen.h"

int main() {
	Pen* kugel = new Pen();
	Paper* papirus = new Paper();

	std::cout << "Paper: " << papirus->getSymbols() << "/" << papirus->getMaxSymbols() << std::endl;
	std::cout << "Pen: " << kugel->getInkAmount() << "/" << kugel->getInkCapacity() << std::endl;

	kugel->write(*papirus, "\nMY LATIN PROVERBS:\n\nIn Vino Veritas! \nVae Victus! \nDum spiro spero... \nVestis virum reddit... \nConsuetudinis magna vis est..");
	papirus->show();

	std::cout << "\nPaper: " << papirus->getSymbols() << "/" << papirus->getMaxSymbols() << std::endl;
	std::cout << "Pen: " << kugel->getInkAmount() << "/" << kugel->getInkCapacity() << std::endl;

    delete papirus;
	delete kugel;

    return 0;
}
