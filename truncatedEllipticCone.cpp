// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// Created by: Peter Sobowale
// Date: Oct 4, 2022
// This program calculates the lateral surface,
// surface area and volume of a truncated elliptic
// cone
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    // declare variables
    float coneHeight, sMajorAxisBase, sMinorAxisBase,
        cutOffHeight, sMajorAxisTop, sMinorAxisTop,
        tecSurfaceArea, lateralSurface, tecVolume;

    // this gets the input for all needed values
    std::cout << "What is the cone height(cm): ";
    std::cin >> coneHeight;
    std::cout << "\nWhat is the semi-major axis base(cm): ";
    std::cin >> sMajorAxisBase;
    std::cout << "\nWhat is the semi-minor axis base(cm): ";
    std::cin >> sMinorAxisBase;
    std::cout << "\nWhat is the cutoff height(cm): ";
    std::cin >> cutOffHeight;
    std::cout << "\nWhat is the semi-major axis top(cm): ";
    std::cin >> sMajorAxisTop;
    std::cout << "\nWhat is the semi-minor axis top(cm): ";
    std::cin >> sMinorAxisTop;
    std::cout << "\nWhat is the lateral surface(cm^2): ";
    std::cin >> lateralSurface;

    // Equation for the surface area of a truncated elliptic cone
    tecSurfaceArea = lateralSurface + M_PI * (sMajorAxisBase * sMinorAxisBase
    + sMajorAxisTop * sMinorAxisTop);
    // Equation for the volume of a truncated elliptic cone
    tecVolume = (M_PI / 3 * (coneHeight * sMajorAxisBase * sMinorAxisBase
    - cutOffHeight * sMajorAxisTop * sMinorAxisTop));

    // Display of the volume, SA and lateral surface formatted
    std::cout << "\nThe volume of the truncated elliptic cone is: "
    << std::fixed << std::setprecision(2) << std::setfill('0')
    << tecVolume << "cm^3";
    std::cout << "\nThe lateral surface of the truncated elliptic cone is: "
    << std::fixed << std::setprecision(2) << std::setfill('0')
    << lateralSurface << "cm^2" << std::endl;
    std::cout << "\nThe surface area of the truncated elliptic cone is: "
    << std::fixed << std::setprecision(2) << std::setfill('0')
    << tecSurfaceArea << "cm^2" << std::endl;
}
