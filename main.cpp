#include "type.hpp"
#include "cooldown.hpp"

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
    int ran = 0;
    start_countdown(3);
    do {
        ran++;
        writeWord(input);
        if (press_enter == 1) simulateKeypress(0x0D);
        //std::cout << "Wrote word " << ran << " time(s)" << std::endl;
    } while(times > ran);
    std::cout << "Done, exit status 0" << std::endl;
    return EXIT_SUCCESS;
}