#include "day2.hpp"

#include <algorithm>
#include <iostream>
#include <vector>

#include "aoc_input.hpp"

Submarine::Submarine(const bool use_aim) : horizontal_travel(0), depth(0), aim(0), use_aim(use_aim) {}

Command::Command(const std::string& command, const std::string& com_value) { 
    if("forward" == command) {
        operation = Operation::Forward;
    } else if("down" == command) {
        operation = Operation::Down;
    } else if("up" == command) {
        operation = Operation::Up;
    } else {
        std::cerr << "Unkown command: " << command << std::endl;
        exit(1);
    }
    value = std::stoi(com_value);
}

void Submarine::operate(const Command& command) {
    switch(command.operation) {
        case Operation::Forward: horizontal_travel += command.value;
                                 depth += aim * command.value;
                                 break;
        case Operation::Down: if(use_aim) {
                                  aim += command.value;
                              } else {
                                  depth += command.value;
                              };
                              break;
        case Operation::Up: if(use_aim) {
                                aim -= command.value;
                            } else {
                                depth -= command.value;
                            }; 
                            break;
    }
}

int Submarine::get_position() {
    return horizontal_travel * depth;
}

int dive(const std::vector<Command>& commands, const bool use_aim) {
    auto submarine = Submarine(use_aim);
    for (const auto& command: commands) {
        submarine.operate(command);
    }
    return submarine.get_position();
}
