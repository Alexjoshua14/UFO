#include "ufo_functions.hpp"

void greet() {
    std::string line = "============\n";
    std::string instructions = "Instructions: save your friend from alien abduction by guessing the letters in the codeword.\n\n";
    std::cout << line << "UFO: The Game\n" << line << instructions;
}

void end_game(std::string codeword, std::string answer) {
    //Win
    if (codeword == answer) 
        std::cout << "Hooray! You saved the person and earned a medal of honor!\n";
    //Lose
    else 
        std::cout << "Oh no! The UFO just flew away with another person!\n";
}

void display_misses(int misses) {
    std::string art;

    switch (misses) {
        case 0:
            art = "### \n# # \n# # \n# # \n###\n";
            break;
        case 1:
            art = "# \n# \n# \n# \n#\n";
            break;
        case 2:
            art = "### \n  # \n###  \n#   \n###\n";
            break;
        case 3:
            art = "### \n  # \n ## \n  # \n###\n";
            break;
        case 4:
            art = "# # \n# # \n### \n  # \n  #\n";
            break;
        case 5:
            art = "### \n#   \n### \n  # \n###\n";
            break;
        case 6:
            art = "### \n#   \n### \n# # \n###\n";
            break;
        case 7:
            art = "### \n  # \n  # \n  # \n  #\n";
            break;
        default:
            art = "unknown";
    }

    std::cout << art << "\n";
}

void display_status(std::vector<char> incorrect, std::string answer) {

    std::cout << "Incorrect Guesses: ";
        print_letters(incorrect, " | ");
        std::cout << "\n";
        std::cout << "Codeword: ";
        print_letters(answer);
        std::cout << "\n\n";
}

bool guessed_already(std::vector<char> incorrect, std::string answer, char letter) {
    return (contains(incorrect, letter) || contains(answer, letter));
}

bool is_correct(std::string codeword, char letter) {
    return contains(codeword, letter);
}

std::string fill_letter(std::string codeword, std::string answer, char letter) {
    for (int i = 0; i < codeword.size(); i++) {
        if (codeword[i] == letter) {
            answer[i] = letter;
        }
    }

    return answer;
}