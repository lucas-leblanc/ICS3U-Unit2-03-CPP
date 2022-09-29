// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program calculates the circumference of a circle
// with user input
#include <iostream>
int main() {
    // this function calculates circumference of a circle
    const double TAU = 6.28;
    int radius;
    double circumference;
    // input
    std::cout << "Enter radius of the circle (mm): ";
    std::cin >> radius;
    // process
    circumference = TAU * radius;
    // output
    std::cout << "" << std::endl;
    std::cout << "Circumference is " << circumference << " mm" << std::endl;
}