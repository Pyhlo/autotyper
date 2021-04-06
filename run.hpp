#pragma once

#include "cooldown.hpp"
#include "type.hpp"

int run_word_writer(std::string word, int times, bool press_enter) {
    int ran = 0;
    start_countdown(3);
    do {
        ran++;
        writeWord(word);
        if (press_enter == 1) simulateKeypress(0x0D);
        //std::cout << "Wrote word " << ran << " time(s)" << std::endl;
    } while(times > ran);
}