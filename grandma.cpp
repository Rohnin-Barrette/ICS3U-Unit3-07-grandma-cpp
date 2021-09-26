// Copyright [2021] Rohnin Barrette"  [legal/copyright]

// Created by: Rohnin Barrette
// Created on: Sept 2021
// This functiontells the user if they're able to date my grand daughter


#include <iostream>

int main() {
    // This functiontells the user if they're
    // able to date my grand daughter
    std::string age_string;
    int age_number;

    // input
    std::cout << "Enter your age: ";
    std::cin >> age_string;
    std::cout << "" << std::endl;

    // process
    try {
        age_number = std::stoi(age_string);
        if (age_number >= 25 && age_number <= 40) {
            std::cout << "You are acceptable to date my grandchild.";
        } else {
            if (age_number <= 25)
                std::cout << "You're too young";
            if (age_number >= 40)
                std::cout << "You're too old";
        }
}   catch (std::invalid_argument) {
        std::cout << age_string << " Is not a valid input";

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
    }
}

