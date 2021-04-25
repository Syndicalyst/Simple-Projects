#include <iostream>
#include "Date.h"

int main() {
    Date date;
	Date date2(29, 9, 1938);
	Date date3(16, 9, 1939);

	try {
		Date date4(30, 13, 1234);
	} catch (InvalidDate) {
		std::cout << "\nError! Please enter REAL Date!\n";
	}

	std::cout << date << std::endl;
	std::cout << date2 << std::endl;
	std::cout << date3 << std::endl;

    return 0;
}
