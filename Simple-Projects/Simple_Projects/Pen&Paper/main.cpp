#include <iostream>
#include "Pen.h"

int main() {
	Pen kugel;
	Paper papyrus;

	std::cout << "Paper: " << papyrus.getSymbols() << '/' << papyrus.getMaxSymbols() << std::endl;
	std::cout << "Pen: " << kugel.getInkAmount() << '/' << kugel.getInkCapacity() << std::endl;

	kugel.write(papyrus, "\nMY LATIN PROVERBS:\n\nIn Vino Veritas! \nVae Victis! \nDum spiro spero... \nVestis virum reddit... \nConsuetudinis magna vis est..");
	papyrus.show();

	std::cout << "\nPaper: " << papyrus.getSymbols() << '/' << papyrus.getMaxSymbols() << std::endl;
	std::cout << "Pen: " << kugel.getInkAmount() << '/' << kugel.getInkCapacity() << std::endl;

    return 0;
}
