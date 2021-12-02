set(BINARY ${CMAKE_PROJECT_NAME})

set(CMAKE_CXX_FLAGS "-std=c++20")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -Wpedantic -Werror -fconstexpr-loop-limit=30000001 -fconstexpr-ops-limit=9000000000 -O3")

set(SOURCES
    main.cpp
    aoc_input.cpp
    parsing.cpp
    day1.cpp
    day2.cpp
    )

add_executable(${BINARY}_run ${SOURCES})
add_library(${BINARY} STATIC ${SOURCES})
