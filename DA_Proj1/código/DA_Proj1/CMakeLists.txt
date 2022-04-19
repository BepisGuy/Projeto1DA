cmake_minimum_required(VERSION 3.20)
project(DA_Proj1)

set(CMAKE_CXX_STANDARD 14)

include_directories(codigo)

add_executable(DA_Proj1 main.cpp
        código/carrinha.cpp código/carrinha.h
        código/encomenda.cpp código/encomenda.h)
