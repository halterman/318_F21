#include "UniformRandom.h"

//  Create a pseudorandom number generator that produces values in 
//  the range low...high
UniformRandomGenerator::UniformRandomGenerator(int low, int high) 
	     : dist(low, high), mt(std::random_device()()) {}

//  Return a pseudorandom number in the range MIN...MAX
int UniformRandomGenerator::operator()() {
    return dist(mt);
}
