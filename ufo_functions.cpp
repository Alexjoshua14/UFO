#include "ufo_functions.hpp"

void greet() {
    std::string line = "============\n";
    std::string instructions = "Instructions: save your friend from alien abduction by guessing the letters in the codeword.";
    std::cout << line << "UFO: The Game" << line << instructions;
}

void end_game(std::string codeword, std::string answer) {
    //Win
    if (codeword == answer) 
        std::cout << "Hooray! You saved the person and earned a medal of honor!\n";
    //Lose
    else 
        std::cout << "Oh no! The UFO just flew away with another person!\n";
}