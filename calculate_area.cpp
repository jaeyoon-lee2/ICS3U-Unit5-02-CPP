// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon (Jay) Lee
// Created on: Nov 2019
// This program calculate area of triangle

#include <iostream>
#include <string>


void CalculateArea(int base, int height) {
    // calculate area of triangle

    float area;

    // process
    area = 0.5 * base * height;

    // output
    std::cout << "The area of triangle is "<< area <<" cm²"<< std::endl;
}


main() {
    // this function gets base and height

    std::string base;
    std::string height;
    int integerAsBase;
    int integerAsHeight;

    // input
    std::cout << "Enter the base of triangle: ";
    std::cin >> base;
    std::cout << "Enter the height of triangle: ";
    std::cin >> height;
    std::cout << std::endl;

    // call functions
    try {
        integerAsBase = std::stoi(base);
        integerAsHeight = std::stoi(height);
        CalculateArea(integerAsBase, integerAsHeight);
    } catch (std::invalid_argument) {
        std::cout << "It is not an integer";
    }
}
