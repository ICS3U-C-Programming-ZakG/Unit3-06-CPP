// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Oct. 24, 2023
// This program generates a number between 0-9
// and the user must guess the number
// then it will say if they're correct or incorrect.
// It will also be within a try catch to prevent crashing
// and to tell the user if they entered something other than an integer.

#include <cstdlib>
#include <iostream>
#include <string>


int main() {
    // Introduce program to user and get user guess
    std::cout << "This is a guessing game";
    std::cout << " and you must guess a random number between 0 - 9!\n";
    std::cout << "Please guess a number between 0-9: ";
    std::string userGuess;
    std::cin >> userGuess;
    int userGuessAsNumber;
    std::cout << "\n";

    // Providing a seed value
    srand((unsigned) time(NULL));

    // Generate random number
    int correctAnswer = 0 + (rand() % 9);

    // try converting user guess into an integer
    try {
        userGuessAsNumber = std::stoi(userGuess);
        if (userGuessAsNumber == correctAnswer) {
            std::cout << "You guessed correctly!\n";
        } else {
            // Display guessing wrong
            std::cout << "You guessed wrong. The number is: "
                      << correctAnswer << std::endl;
        }
        // Tell user if their input is invalid
    } catch (std::invalid_argument) {
        std::cout << "" << userGuess << " is not a number between 0 and 9.\n";
    }
}
