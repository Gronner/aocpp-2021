#pragma once

#include <string>
#include <vector>

enum class Operation {
    Forward,
    Down,
    Up,
};

struct Command {
public:
    Command(const std::string& operation, const std::string& value);
    Operation operation;
    int value;
};

class Submarine {
public:
    Submarine(const bool use_aim);
    void operate(const Command& command);
    int get_position();
private:
    int horizontal_travel;
    int depth;
    int aim;
    // This should be an overload/inheritance, but I'm lazy
    bool use_aim;
};

int dive(const std::vector<Command>& commands, const bool use_aim);
