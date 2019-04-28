cmake_minimum_required(VERSION 2.8.3)

set(CMAKE_CXX_FLAGS -std=c++11)

find_package (Threads)

include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/lib)

add_executable (interface src/main.cpp)

target_link_libraries(interface stimuli glfw3 GL X11 dl ${CMAKE_THREAD_LIBS_INIT})
