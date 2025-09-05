cmake_minimum_required(VERSION 3.12)
project(tictactoe LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include_directories(${CMAKE_SOURCE_DIR}/include)


add_executable(tictactoe
src/main.cpp
src/Board.cpp
src/GameEngine.cpp
)