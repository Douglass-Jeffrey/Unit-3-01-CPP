// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: September 2019
// This program adds two numbers

#include <iostream>

int main() {
    // this function adds numbers
    int num1;
    int num2;
    int ans;

    // input
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // process
    ans = num1+num2;

    // output
    std::cout << "" << std::endl;
    std::cout <<"The answer is: " << ans<< std::endl;
}
