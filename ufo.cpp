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
    
    end_game(codeword, answer);

}