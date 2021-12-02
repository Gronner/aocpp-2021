#include "day1.hpp"

#include <iostream>

#include "aoc_input.hpp"
#include "data.hpp"

static void day1() {
    auto input_data = aoc::read_input_tokenwise<unsigned int>(day1_data);
    std::cout << "Day 1 - Part 1: " << sonar_sweep(input_data, 1) << std::endl;
    std::cout << "Day 1 - Part 2: " << sonar_sweep(input_data, 3) << std::endl;
}

int main() {
    day1();
    return 0;
}
