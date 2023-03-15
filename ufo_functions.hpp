/* Alex Joshua (c) 2023 */

#include <iostream>
#include <string>
#include <vector>

/* Display a greeting messsage to start the game */
void greet();

/* Display end game message */
void end_game(std::string codeword, std::string answer);

/* Display ascii art of number of current misses */
void display_misses(int misses);

/* Display incorrectly guessed letter and current status of answer */
void display_status(std::vector<char> incorrect, std::string answer);

/* Check to see if a char array or string contains a given letter */
template <typename T>
bool contains(T array, char letter) {
    for (int i = 0; i < array.size(); i++) {
        if (array[i] == letter) return true;
    }
    return false;
}

/* Print out the letters in a char array or string with the specified seperator between letters */
template <typename T>
void print_letters(T array, std::string seperator = " ") {
    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i] << seperator;
    }
}

/* Check to see if the letter was already guessed */
bool guessed_already(std::vector<char> incorrect, std::string answer, char letter);

/* Check to see if the guessed letter is contained in codeword */
bool is_correct(std::string codeword, char letter);

/* Fill the correct letter into our answer */
std::string fill_letter(std::string codeword, std::string answer, char letter);