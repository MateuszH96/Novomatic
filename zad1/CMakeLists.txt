cmake_minimum_required(VERSION 3.23)
set(This Zad1)
project(${This})
set(CMAKE_CXX_STANDARD 11)
set(NAME_EXE src/main.cpp)

add_executable(${This} ${NAME_EXE})
add_subdirectory(src)
target_link_libraries(${This} SRC)