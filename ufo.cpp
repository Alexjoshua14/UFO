#include "ufo_functions.hpp"

/*
* This game is essentially hangman but UFO themed.
*/
int main() {
    greet();

    // Initialize codeword and answer string
    std::string codeword = "codecademy";
    int max_misses = 7;

    //One underscore for each letter in codeword
    std::string answer = "__________"; 
    
    int misses = 0;
    std::vector<char> incorrect;
    bool guess = false;
    char letter;

    while (answer != codeword && misses < max_misses) {
        std::cout << "Please enter your guess: ";
        std::cin >> letter;
        
        while (guessed_already(incorrect, answer, letter)) {
            std::cout << "You already guessed that letter.. Please enter a new guess: ";
            std::cin >> letter;
        }

        guess = is_correct(codeword, letter);

        if (guess) {
            answer = fill_letter(codeword, answer, letter);
            std::cout << "Correct!\n";
        } else {
            incorrect.push_back(letter);
            misses++;
            std::cout << "Incorrect! The tractor beam pulls the person further.\n";
            display_misses(misses);
        }
        
        display_status(incorrect, answer);
    }
    
    end_game(codeword, answer);

}