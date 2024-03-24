cmake_minimum_required(VERSION 3.25)
project(Jellyfin_Opener)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static")
add_executable(Jellyfin_Opener main.cpp progressbar.hpp)

