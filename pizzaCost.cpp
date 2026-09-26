// Copyright (c) 2026 Emmanuella Taiwo All rights reserved

// Created by: Emmanuella Taiwo
// Date:Sep 25th,2026
// This program asks the user for the diameter of the
// Pizza.It then calculates and displays the cost
// the pizza.
#include <iomanip>
#include <iostream>


int main() {
    // declare constants
    const float COST_PER_INCH = 0.50;
    float diameter;

    // process
    std::cout << "Enter the diameter of the pizza (inches): ";
    std::cin >> diameter;

    // calculate the cost of the pizza
    float cost = diameter * COST_PER_INCH;

    // display the cost of the pizza
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The cost of the pizza is: $" << cost << std::endl;

    return 0;
}
