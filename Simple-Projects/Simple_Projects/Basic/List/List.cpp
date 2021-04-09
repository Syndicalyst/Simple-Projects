#include <iostream>
#include <cstdlib>

#include "List.h"

List::List(int capacity, double multiplier): capacity(100), multiplier(1.05) {
    this->capacity = capacity;
    this->multiplier = multiplier;
    this->current = 0;

    array = (int*)malloc(capacity*sizeof(int));

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
    if ( current > index && index > 0 ) {
        current -= 1;

        for (int i = 0; i < current; i++ ) {
        	array[i] = array[i+1];
        }
    }
}

void List::insert(int value, int index) {
    if ( current >= index && index >= 0 ) {
        push_back(value);

        for ( int i = current; i > index; i-- ) {
            array[i] = array[i-1];
        }
        array[index] = value;
    }
}

int List::find(int value) const {
    for ( int i = 0 ; i < current; i++ ){
        if ( array[i] == value ) {
            return i;
        }
    }
    return -1;
}

void List::push_back(int value) {
    int newCurrent = current + 1;

    if ( newCurrent > capacity ) {
       int newCapacity = capacity * multiplier;
       int* newArray = (int*)realloc(array, newCapacity*sizeof(int));

       if ( newArray == NULL ) {
           throw OutOfMemoryException();
       }

       capacity = newCapacity;
       array = newArray;
    }
    array[current] = value;
    current = newCurrent;
}

int List::pop_back() {
    if ( current == 0 ) {
       throw ZeroLenException();
    }
    current -= 1;
    return array[current];
}

void List::sort() {
    int last = current - 1;

	for ( int i = 0; i < last; i++ ) {
		for ( int j = 0; j < last; j++ ) {
			int min = j + 1;
            if ( array[j] > array[min] ) {
                int temp = array[j];

                array[j] = array[min];
                array[min] = temp;
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
    int last = list.size() - 1;

    for ( int i = 0; i < last; i++ ) {
        out << list[i] << ' ';
    }
    out << list[last];
    return out;
}