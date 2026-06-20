cmake_minimum_required(VERSION 4.1)
project(C_Coding C)

set(CMAKE_C_STANDARD 11)

add_executable(C_Coding
        Training/main.c
        Training/variables.c
        Training/format_specifier.c
        Training/format_specifier.c
        Training/memory.c
        Training/testing.c)
