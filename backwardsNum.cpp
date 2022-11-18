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
    int userNumInt;
    float userNumFloat;

    // loops until user doesn't want to use it anymore
    do {
        // getting user input
        std::cout << "Enter any number: ";
        std::cin >> userNum;

        // try catch
        try {
            userNumInt = stoi(userNum);
            userNumFloat = stof(userNum);

            // checks if its a decimal
            if (userNumInt != userNumFloat) {
                std::cout << userNum << " is not a valid number!"
                          << std::endl;
                continue;
            }

            // if userNum is a negative
            if (userNumInt < 0) {
                // cycles through each digit of user's number, excluding the "-"
                std::cout << userNum[0];
                for (int counter = userNum.length(); counter > 0; counter--) {
                    std::cout << userNum[counter];
                }
                std::cout << std::endl;
            } else {
                // cycles through each digit of user's number
                for (int counter = userNum.length(); counter >= 0; counter--) {
                    std::cout << userNum[counter];
                }
                std::cout << std::endl;
            }

            // user num isn't an int
        } catch (std::invalid_argument) {
            std::cout << userNum << " is not a valid number!" << std::endl;
        }
    } while (playAgain());

    // exit message
    std::cout << "Thank you for using this program!" << std::endl;
}
