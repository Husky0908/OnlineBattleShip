cmake_minimum_required(VERSION 3.16)

project(BattleShip LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(libs)

add_executable(BattleShip battleship.cpp)
target_link_libraries(BattleShip table)
target_link_libraries(BattleShip event_loop)
