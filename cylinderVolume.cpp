// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program calculates that volume of a cylinder

#include <iostream>
#include <cmath>

float CalculateVolume(float radiusFromUser, float heightFromUser) {
    // calculate volume
    const double PI = 3.14;
    float radius;
    float height;
    float area;

    area = PI * pow(radiusFromUser, 2) * heightFromUser;

    return area;
}


main() {
    std::string stringRadius;
    std::string stringHeight;
    float radiusFromUser;
    float heightFromUser;
    float cylinderVolume;

    // input
    std::cout << "Lets calculate the area of a circle!" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter the radius (cm): ";
    std::cin >> stringRadius;
    std::cout << "Enter the height (cm): ";
    std::cin >> stringHeight;
    std::cout << std::endl;

    // call functions and output
    try {
        radiusFromUser = std::stoi(stringRadius);
        heightFromUser = std::stoi(stringHeight);
        cylinderVolume = CalculateVolume(radiusFromUser, heightFromUser);
        std::cout << "The volume is " << cylinderVolume << " cm³." << std::endl;
    }
    catch (std::invalid_argument) {
        std::cout << "Invalid." << std::endl;
    }
    std::cout << ""<< std::endl;
    std::cout << "Thanks for participating!"<< std::endl;
}
