// Copyright (c) 2022 Kyanh Pham
// Created on: Oct 2022
// This program checks if you can vote

#include <iostream>

int main() {
    // This function sees if you are >= 18

    int age;
    const int VOTING_AGE = 18;

    // Input
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << std::endl;

    // Process and Output
    if (age >= VOTING_AGE) {
        std::cout << "You are eligible to vote!" << std::endl;
    } else {
        std::cout << "You are not eligible." << std::endl;
    }
    std::cout << "\nDone.";
}
