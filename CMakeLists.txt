cmake_minimum_required(VERSION 3.12)
project(alg_app)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib/googletest)

include_directories(lib/googletest/googletest/include)

set(SRC_FILES src/main.cpp)

add_executable(alg_app_run ${SRC_FILES})

target_link_libraries(alg_app_run gtest gtest_main)