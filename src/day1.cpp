#include "day1.hpp"

#include <algorithm>
#include <iostream>
#include <vector>

#include "aoc_input.hpp"

unsigned int sonar_sweep(std::vector<unsigned int> scans, size_t window) {
    auto compare = [window](const unsigned int& n) { return n < *(&n+window); };
    return std::count_if(scans.cbegin(), scans.cend() - window, compare);
}
