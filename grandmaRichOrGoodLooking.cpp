// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on October 2021
// This program is or statement testing

#include <iostream>
#include <string>

int main() {
    // this function is or statement testing
    std::string richOrNot;
    std::string goodLookingOrNot;

    std::cout << "type y for yes and n for no" << std::endl;
    // input
    std::cout << "Enter is the guy rich or not: ";
    std::cin >> richOrNot;

    std::cout << "Enter is the guy good_looking or not:";
    std::cin >> goodLookingOrNot;
    std::cout << "" << std::endl;

    // process & output
    if (richOrNot == "y" || goodLookingOrNot == "y") {
        std::cout << "He can date your grandson.";
    } else {
        std::cout << "He can't date your grandson";
    }

    std::cout << "\nDone" << std::endl;
}
