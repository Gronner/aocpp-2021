#include "gtest/gtest.h"

#include "aoc_input.hpp"
#include "data.hpp"
#include "day1.hpp"

TEST(Day1Test, SampleInput) {
    constexpr std::array<unsigned int, 10> input_data = {
        199,
        200,
        208,
        210,
        200,
        207,
        240,
        269,
        260,
        263,
    };
    ASSERT_EQ(7, day1::sonar_sweep(input_data, 1));
    ASSERT_EQ(5, day1::sonar_sweep(input_data, 3));
}

TEST(Day1Test, RiddleInput) {
    ASSERT_EQ(1215, day1::sonar_sweep(day1::input, 1));
    ASSERT_EQ(1150, day1::sonar_sweep(day1::input, 3));
}
