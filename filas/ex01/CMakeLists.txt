cmake_minimum_required(VERSION 3.25)
project(PilhaEstatica)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(PilhaEstatica
        main.cpp
        aluno.h
        fila.h
        fila.cpp
        pilha.h
        pilha.cpp
)
