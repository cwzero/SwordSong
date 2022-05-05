cmake_minimum_required(VERSION 3.10)

project(SwordSong)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Source)
add_subdirectory(Lib)

configure_file(${CMAKE_SOURCE_DIR}/Template/Include/Phantasia/Build.hpp.in ${CMAKE_SOURCE_DIR}/Include/Phantasia/Build.hpp)