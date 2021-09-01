#include <iostream>
#include "vectorstuff.h"

// Conveniently print the contents of a vector.
// T must be a type that std::ostream can process.
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
    os << '{';
    if (!vec.empty()) {
        auto iter = vec.begin();
        auto end = vec.end();
        os << *iter++;
        while (iter != end)
            os << ", " << *iter++;
    }
    os << '}';
    return os;
}

int main() {
    std::vector<int> vec{ 4, 3, 2, 3, 0, 5 };
    std::cout << "The number of evens in " << vec
              << " is " << count_evens(vec) << '\n';
    std::cout << vec << " incremented is ";
    increment(vec);
    std::cout << vec << '\n';
}