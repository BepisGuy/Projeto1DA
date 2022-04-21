cmake_minimum_required(VERSION 3.20)
project(DA_P1)

set(CMAKE_CXX_STANDARD 14)

include_directories(codigo)

add_executable(DA_P1 Codigo/main.cpp
        ../DA_P1/Codigo/carrinha.cpp ../DA_P1/Codigo/carrinha.h
        ../DA_P1/Codigo/encomenda.cpp ../DA_P1/Codigo/encomenda.h ../DA_P1/Codigo/Cenario1.cpp ../DA_P1/Codigo/Cenario1.h ../DA_P1/Codigo/Cenario2.cpp ../DA_P1/Codigo/Cenario2.h ../DA_P1/Codigo/Cenario3.cpp ../DA_P1/Codigo/Cenario3.h)
