cmake_minimum_required(VERSION 3.20)
project(data_structures_alg)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(data_structures_alg
        main.cpp
        ValidParentheses/ValidParentheses.cpp
        BaseballGame/BaseballGame.cpp
        BaseballGame/BaseballGame.hpp
        NimGame/NimGame.cpp
        NimGame/NimGame.hpp
)

target_include_directories(data_structures_alg PRIVATE
        ValidParentheses
)
