#pragma once

#include <iostream>
#include <windows.h>

void start_countdown(int seconds) {
    for (int i = seconds; i > 0; i--) {
        if (i == 1) {
            std::cout << "Starting in " << i << " second!" << std::endl;
            Sleep(1000);
            continue;
        }
        std::cout << "Starting in " << i << " seconds!" << std::endl;
        Sleep(1000);
    }
}