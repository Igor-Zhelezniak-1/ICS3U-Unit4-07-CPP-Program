// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This program is program

#include <iostream>
#include <random>

main() {
    for (int counter1 = 1000; counter1 < 2001; counter1++) {
        if (counter1 % 5 != 4) {
            std::cout << counter1 << " ";
        } else {
            std::cout << counter1 << " " << std::endl;
        }
    }

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
