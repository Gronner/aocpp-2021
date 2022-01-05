#include "day1.hpp"
#include "day2.hpp"

#include <iostream>

#include "aoc_input.hpp"
#include "data.hpp"
#include "parsing.hpp"

static void run_day1() {
    constexpr auto part_1 = day1::sonar_sweep(day1::input, 1);
    constexpr auto part_2 = day1::sonar_sweep(day1::input, 3);
    std::cout << "Day 1 - Part 1: " << part_1 << std::endl;
    std::cout << "Day 1 - Part 2: " << part_2 << std::endl;
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
    run_day1();
    day2();
    return 0;
}
