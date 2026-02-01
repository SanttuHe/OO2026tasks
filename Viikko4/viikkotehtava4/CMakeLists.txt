cmake_minimum_required(VERSION 3.16)

project(Viikkotehtava4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Viikkotehtava4 main.cpp
    Luottotili.h
    Luottotili.cpp
    Pankkitili.h
    Pankkitili.cpp
    Asiakas.cpp
    Asiakas.h)

include(GNUInstallDirs)
install(TARGETS Viikkotehtava4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
