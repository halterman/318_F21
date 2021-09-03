// Parts adapted from https://stackoverflow.com/questions/21516575/fill-a-vector-with-random-numbers-c

#include <vector>
#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <iomanip>
#include <functional>

#include "UniformRandom.h"

// Fill the given vector with zeros
void clear(std::vector<int>& a) {
    for (int& elem : a) {
        elem = 0;
    }
}


//// Report the accumulated statistics
//void report(const std::vector<int>& a, int runs) {
//    std::cout.setf(std::ios::fixed, std::ios::floatfield); // set fixed floating format
//    std::cout.precision(2); // for fixed format, two decimal places 
//    for (size_t i = 0; i < a.size(); i++) {
//		std::cout << std::setw(2) << i << ": " << std::setw(7) <<a[i] 
//                  << "   (" << (100.0 * a[i]) / runs << "%)\n";
//    }
//}

void test_random_distribution(const std::string& name, int num_values, int runs,
                              std::function<int()> gen) {
    std::vector<int> tally(num_values);  // A vector of counters
    clear(tally);  // Ensure all counters start at zero
    for (int i = 0; i < runs; i++) {
        int value = gen();
        //std::cout << value << ' ';
        tally[value]++;  // Count the generated pseudorandom number
    }
    std::cout << "\n------- " << name << "------\n";
    std::cout.setf(std::ios::fixed, std::ios::floatfield); // set fixed floating format
    std::cout.precision(4); // for fixed format, two decimal places 
    // Report results
    for (size_t i = 0; i < tally.size(); i++) {
        std::cout << std::setw(2) << i << ": " << std::setw(7) << tally[i]
            << "   (" << std::setw(8) << (100.0 * tally[i]) / runs << "%)\n";
    }
}


int main() {
    const int NUMBER_OF_VALUES =  10;  // Use 10,000 to see a difference

    const int RUNS = 10'000'000;

    //-----------------------------------------------------------------
    // Using a uniform integer distribution

    UniformRandomGenerator gen(0, NUMBER_OF_VALUES - 1);

    test_random_distribution("Uniform integer distribution using Mersenne Twister",
                             NUMBER_OF_VALUES, RUNS, gen);
                             //NUMBER_OF_VALUES, RUNS, [&]() { return gen(); });

    //------------------------------------------------------------------
    // Using the old-fashioned rand function from the standard C library
    test_random_distribution("Using old-fashioned rand from the C library",
                             NUMBER_OF_VALUES, RUNS, [&]() { return rand() % NUMBER_OF_VALUES; });

}