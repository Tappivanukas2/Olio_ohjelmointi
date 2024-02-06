cmake_minimum_required(VERSION 3.5)

project(olio_kotitehtava3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(olio_kotitehtava3 main.cpp
    chefs.h
    chefs.cpp)

include(GNUInstallDirs)
install(TARGETS olio_kotitehtava3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
