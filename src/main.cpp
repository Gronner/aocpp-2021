#include "day1.hpp"
#include "day2.hpp"

#include <iostream>

#include "aoc_input.hpp"
#include "data.hpp"
#include "parsing.hpp"

static void day1() {
    auto input_data = aoc::read_input_tokenwise<unsigned int>(day1_data);
    std::cout << "Day 1 - Part 1: " << sonar_sweep(input_data, 1) << std::endl;
    std::cout << "Day 1 - Part 2: " << sonar_sweep(input_data, 3) << std::endl;
}

static void day2() {
    const auto input_data = aoc::read_input_linewise(day2_data);
    std::vector<Command> commands;
    for (const auto line: input_data) {
        auto line_data = aoc::grab_information(line, "(.+) (\\d)");
        commands.push_back(Command(line_data[1], line_data[2]));
    }
    std::cout << "Day 2 - Part 1: " << dive(commands, false) << std::endl;
    std::cout << "Day 2 - Part 2: " << dive(commands, true) << std::endl;
}

int main() {
    day1();
    day2();
    return 0;
}
