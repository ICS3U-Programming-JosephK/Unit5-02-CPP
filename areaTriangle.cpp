// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Joseph Kwon
// Created on: November 25 2022
// Gets base and height and outputs triangle area

#include <iostream>
#include <string>

void CalcArea(float height, float width) {
    // This function receives data, calculates, and outputs

    // initializing variables
    float area;

    // Calculate for the area of a triangle
    area = height * width / 2;

    // Display the results
    std::cout << "\nThe area of the triangle is "
              << area << " cm².\n\n";
}

main() {
    // This function gets height and base

    // Initialize variables
    float floatHeightFromUser;
    std::string strHeightFromUser, wait;
    float floatWidthFromUser;
    std::string strWidthFromUser;

    // Get user's height in cm
    std::cout << "Enter a triangle's height (cm): \n";
    std::cout << ">> ";
    std::cin >> strHeightFromUser;

    try {
        floatHeightFromUser = std::stoi(strHeightFromUser);
        // Exception thrown if the user did not enter a number.
    } catch (const std::exception) {
        std::cout << "Enter a number.\n";
        std::cout << "Please try again";
        std::cin >> wait;
    }

    // If the user value is less than 0, output the following
    if (floatHeightFromUser < 0) {
        std::cout << "You must enter a positive integer.\n";
        std::cout << "Please try again\n";
        std::cin >> wait;

        // Else if, ask for the width of the triangle
    } else if (floatHeightFromUser > 0) {
        // Get user's temperature value in celsius
        std::cout
            << "Enter a triangle's width (cm): \n";
        std::cout << ">> ";
        std::cin >> strWidthFromUser;

        try {
            floatWidthFromUser = std::stoi(strWidthFromUser);
            // Exception thrown if the user did not enter a number.
        } catch (const std::exception) {
            std::cout << "Enter a number.\n";
            std::cout << "Please try again";
            std::cin >> wait;
        }

        // Check if the width value was below 0
        if (floatWidthFromUser < 0) {
            std::cout << "You must enter a positive integer.\n";
            std::cout << "Please try again\n";
            std::cin >> wait;

        } else {
            // Call functions
            CalcArea(floatHeightFromUser, floatWidthFromUser);
        }
    }
}
