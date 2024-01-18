cmake_minimum_required(VERSION 3.5.0)
project(Modify VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# *.x can not be used in add_executable() and add_custom_command()
file(GLOB SOURCES libs/*.c main.cpp)

# Include header files here, don't need to add into add_executable()
include_directories(includes)
add_executable(main ${SOURCES})

target_link_libraries(main ${CMAKE_SOURCE_DIR}/libs/glfw3.lib)
