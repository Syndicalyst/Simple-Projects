#include <iostream>
#include "List.h"

static void print(const List& list) {
	std::cout << "\n======================\n";
	std::cout << list;
	std::cout << "\n======================\n";
}

int main() {
	List list;

	list.insert(700, 0);
	list.insert(123, 1);
	list.insert(42, 2);

	list.push_back(3);
	print(list);

	list.find(42);

	list.erase(0);

	print(list);
	list.sort();
	print(list);

	std::cout << "[1]: " << list[1] << std::endl;

	return 0;
}
