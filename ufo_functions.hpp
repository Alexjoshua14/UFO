#include <iostream>
#include <string>
#include <vector>

void greet();

void end_game(std::string codeword, std::string answer);

void display_misses(int misses);

void display_status(std::vector<char> incorrect, std::string answer);

template <typename T>
bool contains(T array, char letter) {
    for (int i = 0; i < array.size(); i++) {
        if (array[i] == letter) return true;
    }
    return false;
}

template <typename T>
void print_letters(T array, std::string seperator = " ") {
    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i] << seperator;
    }
}

bool guessed_already(std::vector<char> incorrect, std::string answer, char letter);

bool is_correct(std::string codeword, char letter);

std::string fill_letter(std::string codeword, std::string answer, char letter);