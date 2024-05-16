cmake_minimum_required(VERSION 3.10)
project(StringCalculator)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_subdirectory(Calculator)
add_executable(StringCalculator StringCalculator.cpp)
target_link_libraries(StringCalculator PUBLIC Calculator)
target_include_directories(StringCalculator PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/Calculator"
                          )