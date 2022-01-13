// Copyright (c) 2022 Abdul basit All rights reserved.
//
// Created by: Abdul basit
// Created on: Jan 2022
// This program calculates the surface area and volume of a octagonal prism

#include <iostream>
#include <iomanip>
#include <cmath>

float s_area(float base_int, float height_int) {
    // This functions calculates surface_area
    float surface_area;

    surface_area = (8.0 * base_int * height_int + 4.0
                    * (1 + sqrt(2.0)) * pow(base_int, 2.0));

    return surface_area;
}

float vol(float base_int, float height_int) {
    // This functions calculates volume
    float volume;

    volume = 2.0 * (1.0 + sqrt(2.0)) * height_int * pow(base_int, 2.0);

    return volume;
}

int main() {
    // This function receives input
    std::string base_str;
    std::string height_str;
    float base_int;
    float height_int;
    float surface_area;
    float volume;

    // Input
    while (true) {
        std::cout << "Enter Length of the Base Edge of the Octagonal"
                         " Prism (mm): ";
        std::cin >> base_str;

        try {
            base_int = std::stof(base_str);
            if (base_int <= 0) {
                std::cout << "You have not inputted a valid base length,"
                    " please input a positive number!" << std::endl;
                std::cout << "" << std::endl;
            } else {
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "That is not a number, please input a number!"
            << std::endl;
            std::cout << "" << std::endl;
        }
    }
    while (true) {
        std::cout << "Enter the height of the triangle (cm): ";
        std::cin >> height_str;

        try {
            height_int = std::stof(height_str);
            if (height_int <= 0) {
                std::cout << "You have not inputted a valid height,"
                    " please input a positive number!" << std::endl;
                std::cout << "" << std::endl;
            } else {
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "That is not a number, please input a number!"
            << std::endl;
            std::cout << "" << std::endl;
        }
    }
    std::cout << "" << std::endl;

    // Call Functions
    surface_area = s_area(base_int, height_int);
    volume = vol(base_int, height_int);

    // Output
    std::cout << "Surface Area is "
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << surface_area << " mm²" << std::endl;
    std::cout << "Volume is "
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << volume << " mm³" << std::endl;
    std::cout << "\nDone." << std::endl;
}
