#ifndef UNIFORM_RANDOM_DEFINED_
#define UNIFORM_RANDOM_DEFINED_

#include <random>

class UniformRandomGenerator {
	//  A uniform distribution object
	std::uniform_int_distribution<int> dist;
	//  A Mersenne Twister random number generator with a seed 
	//  obtained from a random_device object
	std::mt19937 mt;
public:
	//  Create a pseudorandom number generator that produces values in 
	//  the range low...high
	UniformRandomGenerator(int low, int high);

	//  Return a pseudorandom number in the range MIN...MAX
	int operator()();
};

#endif

