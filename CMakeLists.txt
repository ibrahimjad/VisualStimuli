cmake_minimum_required(VERSION 2.8.3)

set(CMAKE_CXX_FLAGS -std=c++11)


if("${CMAKE_SIZEOF_VOID_P}" EQUAL "8")
  link_directories(${CMAKE_SOURCE_DIR}/lib/x64)
 else()
  set(CMAKE_CXX_FLAGS -m32)
  link_directories(${CMAKE_SOURCE_DIR}/lib/x86)
endif()


include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable (interface src/main.cpp)

find_package (Threads)
target_link_libraries(interface stimuli glfw GL X11 dl ${CMAKE_THREAD_LIBS_INIT})
