// StandardHashTable.cpp
// Created 11/8/2021 9:42:42 AM

#include <iostream> 
#include <unordered_map>
  
int main() { 
    std::unordered_map<char, int> letter_counts {{'a', 27}, {'b', 3}, 
                                                 {'c', 1}};
    std::cout << "initially: " << '\n'; 
    for (const auto &pair : letter_counts)
        std::cout << pair.first << ": " << pair.second << '\n'; 
    letter_counts['b'] = 42; // update an existing value � 
    letter_counts['x'] = 9;  // insert a new value � 
    std::cout << "after modifications: " << '\n'; 
    for (const auto &pair : letter_counts)
        std::cout << pair.first << ": " << pair.second  << '\n'; 
}
