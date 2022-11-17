// Copyright (c) 2022 Ioana Marinescu All rights reserved.
// Created By: Ioana Marinescu

// Date: Nov. 7, 2022
// a program reverses the order of a number


#include <iostream>

int main() {
    // variables
    std::string userNum;
    bool isNotValid = true;

    // getting user input
    std::cout << "Enter any number: ";
    std::cin >> userNum;

    while (isNotValid) {
        // try catch
        try {
            stoi(userNum);

            // breaks out of loop
            isNotValid = false;

            // cycles through each digit of user's number
            for (int counter = userNum.length(); counter >= 0; counter--) {
                std::cout << userNum[counter];
            }
            std::cout << std::endl;

            // user num isn't an int
        } catch (std::invalid_argument) {
            std::cout << userNum << " is not a valid number!" << std::endl;
        }
    }
}