#include <algorithm>
#include <cstdlib>
#include <ostream>

#include "List.h"

List::List(int capacity, double multiplier):
        array((int*)malloc(capacity*sizeof(int))),
        capacity(capacity),
        multiplier(multiplier),
        current(0) {
    if (array == NULL) {
        throw OutOfMemoryException();
    }
}

List::~List() {
    free(array);
}

int List::size() const {
    return current;
}

int List::max_size() const {
    return capacity;
}

void List::erase(int index) {
    if ( current > index && index >= 0 ) {
		std::copy(array + index + 1, array + current, array);
        --current;
    }
}

void List::insert(int value, int index) {
    if ( current >= index && index >= 0 ) {
        push_back(0);

		std::copy_backward(array + index, array + current - 1, array + current);
        array[index] = value;
    }
}

int List::find(int value) const {
    for ( int i = 0 ; i < current; ++i ) {
        if ( array[i] == value ) {
            return i;
        }
    }
    return -1;
}

void List::push_back(int value) {
    if ( current == capacity ) {
       const int newCapacity = capacity * multiplier;
       int* const newArray = (int*)realloc(array, newCapacity*sizeof(int));

       if ( newArray == NULL ) {
           throw OutOfMemoryException();
       }

       capacity = newCapacity;
       array = newArray;
    }
    array[current] = value;
	++current;
}

int List::pop_back() {
    if ( current == 0 ) {
       throw ZeroLenException();
    }
    return array[--current];
}

void List::sort() {
    const int last = current - 1;

	// Bubble sorting will keep an invariant as follows: [sorted|unsorted]
	for ( int sorted = 0; sorted < last; ++sorted ) {
		for ( int i = last; i > sorted; --i ) {
			// Bubble down the max element from the unsorted region
			const int prev = i - 1;
            if ( array[prev] > array[i] ) {
                std::swap(array[prev], array[i]);
            }
		}
	}
}

int List::operator[](int index) const {
    return array[index];
}

bool List::operator==(const List& other) const {
    return current == other.current; 
}

bool List::operator!=(const List& other) const {
    return current != other.current;
}

std::ostream& operator<<(std::ostream& out, const List& list) {
    const int last = list.size() - 1;

    for ( int i = 0; i < last; ++i ) {
        out << list[i] << ' ';
    }
    return out << list[last];
}
