#include "run.hpp"

using std::string;

int main() {
    std::string input;
    std::cout << "Input a word you want to write: ";
    getline(std::cin, input);
    int times;
    std::cout << "Input number of times you want to repeat writing this word: ";
    std::cin >> times;
    bool press_enter;
    std::cout << "Shall it press enter? ";
    std::cin >> press_enter;
    run_word_writer(input, times, press_enter);
    std::cout << "Done, exit status 0" << std::endl;
    return EXIT_SUCCESS;
}