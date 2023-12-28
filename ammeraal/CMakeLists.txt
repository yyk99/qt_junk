#
#
#

cmake_minimum_required(VERSION 3.5)

project(ammeraal)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

source_group(Generated REGULAR_EXPRESSION "mocs.*cpp")

# Use c:/qt/5.15.2/msvc2019_64/bin/windeployqt.exe

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(common)

add_subdirectory(1.1)
add_subdirectory(1.3)
add_subdirectory(1.3a)
add_subdirectory(1.4)
add_subdirectory(1.5)
add_subdirectory(1.6)
add_subdirectory(1.7)

add_subdirectory(2.1)
add_subdirectory(2.2)
add_subdirectory(2.3)
add_subdirectory(2.4)

add_subdirectory(3.1)

# end of file