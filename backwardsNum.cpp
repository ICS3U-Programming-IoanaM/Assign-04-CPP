// Copyright (c) 2022 Ioana Marinescu All rights reserved.
// Created By: Ioana Marinescu

// Date: Nov. 7, 2022
// a program reverses the order of a number


#include <iostream>

// to rerun the program
bool playAgain() {
    while (true) {
        // variables
        std::string replay;

        // guts user input
        std::cout << "Do you want to run this program again? [y/n] ";
        std::cin >> replay;

        // if user wants to play again
        if (replay == "y") {
            return true;

            // if user doesn't want to play again
        } else if (replay == "n") {
            return false;

        // user input invalid
        } else {
            std::cout << "Please enter y or n!" << std::endl;
        }
    } 
}

int main() {
    // variables
    std::string userNum;

    // getting user input
    std::cout << "Enter any number: ";
    std::cin >> userNum;

    do {
        // try catch
        try {
            stoi(userNum);

            // cycles through each digit of user's number
            for (int counter = userNum.length(); counter >= 0; counter--) {
                std::cout << userNum[counter];
            }
            std::cout << std::endl;

            // user num isn't an int
        } catch (std::invalid_argument) {
            std::cout << userNum << " is not a valid number!" << std::endl;
        }
    } while (playAgain());

    // exit message
    std::cout << "Thank you for using this program!" << std::endl;
}