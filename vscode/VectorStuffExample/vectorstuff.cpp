#include "vectorstuff.h"

//-----------------------------------------------
// Returns the number of even numbers in vector v
int count_evens(const std::vector<int>& v) {
    int count = 0;
    for (int elem : v) {
        if (elem % 2 == 0)
            count++;
    }
    return count;
}

//-----------------------------------------------
// Increments each element of the vector by one
void increment(std::vector<int>& v) {
    for (int& elem : v)
        elem++;
}