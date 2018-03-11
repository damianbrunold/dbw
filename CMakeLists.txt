cmake_minimum_required(VERSION 3.9)
project(dbw)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS -mwindows)

add_executable(dbw main.cpp DBWApp.cpp DBWApp.h GridPane.cpp GridPane.h)

set(wxWidgets_ROOT_DIR C:/wxWidgets-3.0.3)
set(wxWidgets_USE_STATIC)

find_package(wxWidgets REQUIRED net gl core base)
include(${wxWidgets_USE_FILE})
target_link_libraries(dbw ${wxWidgets_LIBRARIES})
