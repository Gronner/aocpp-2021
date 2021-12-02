#include "gtest/gtest.h"

#include "aoc_input.hpp"
#include "data.hpp"
#include "day1.hpp"

TEST(Day1Test, SampleInput) {
    std::vector<unsigned int> input_data = {
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
    ASSERT_EQ(7, sonar_sweep(input_data, 1));
    ASSERT_EQ(5, sonar_sweep(input_data, 3));
}

TEST(Day1Test, RiddleInput) {
    auto input_data = aoc::read_input_tokenwise<unsigned int>(day1_data);
    ASSERT_EQ(1215, sonar_sweep(input_data, 1));
    ASSERT_EQ(1150, sonar_sweep(input_data, 3));
}
