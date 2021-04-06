#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <iterator>

#include <windows.h>

int simulateKeypress(WORD vkey) {
    INPUT input;
    //WORD vkey = VK_F12; // see link below
    input.type = INPUT_KEYBOARD;
    input.ki.wScan = MapVirtualKey(vkey, MAPVK_VK_TO_VSC);
    input.ki.time = 0;
    input.ki.dwExtraInfo = 0;
    input.ki.wVk = vkey;
    input.ki.dwFlags = 0; // there is no KEYEVENTF_KEYDOWN
    SendInput(1, &input, sizeof(INPUT));
    input.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &input, sizeof(INPUT));
    return EXIT_SUCCESS;
}
int writeWord(std::string word) {
    //std::cout << word << std::endl;
    transform(word.begin(), word.end(), word.begin(), ::toupper);
    //std::cout << word << std::endl;
    for (int letter : word) {
        if (letter == 0x2F) {
            letter = 0x6F;
        }
        simulateKeypress(letter);
        //std::cout << "Pressed key: " << std::hex << letter << std::endl;
        //simulateKeypress(VK_F12);
        //std::cout << letter << std::endl;
    }
    return 0;
}