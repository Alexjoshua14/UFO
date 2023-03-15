#include <iostream>
#include <string>
#include "ufo_functions.hpp"

int main() {
    // Initialize codeword and answer string
    std::string codeword = "codecademy";
    int max_misses = 7;

    //One underscore for each letter in codeword
    std::string answer = "__________"; 
    
    int misses = 0;

    while (answer != codeword && misses < max_misses) {




        misses++;
    }
    
    //Win
    if (codeword == answer) 
        std::cout << "Hooray! You saved the person and earned a medal of honor!\n";
    //Lose
    else 
        std::cout << "Oh no! The UFO just flew away with another person!\n";

}