// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by Gabriel A
// Created on Jan 2021
// This program uses an array

#include <iostream>
#include <random>

main() {
    // this function uses an array

    float randomNumber[10];
    float aSingleNumber;
    float summ;
    float average;
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 100);

    // input
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        aSingleNumber = idist(rgen);
        randomNumber[loop_counter] = aSingleNumber;
    }
    std::cout << "";

    std::cout << "Here are 10 completely random numbers:\n\n";

    for (int loop_counter; loop_counter < 10; loop_counter++) {
        std::cout << randomNumber[loop_counter] << " ";
    }

    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        summ += randomNumber[loop_counter];
    } average = summ / 10;

    std::cout << "\n\nThe average of the 10 numbers is: " << average << "\n";
}
