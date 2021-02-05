cmake_minimum_required(VERSION 3.17)
project(Elenco_Telefonico C)

set(CMAKE_C_STANDARD 99)

add_executable(Elenco_Telefonico main.c user.c user.h binary_search.c binary_search.h list.c list.h)