cmake_minimum_required(VERSION 3.20)
project(Recruitment_IER_EDLF)


include_directories(lib)
include_directories(src)
include_directories(test)

add_subdirectory(lib/googleTest)
add_subdirectory(src)
add_subdirectory(test)

set(CMAKE_CXX_STANDARD 14)


add_executable(
        #Nombre del ejecutable
        ParkingSoft
        #Lista de archivos a compilar en este target
        src/main.cpp src/View/View.cpp src/View/View.h src/Model/ParkingSoft.cpp src/Model/ParkingSoft.h src/Model/Candidato.cpp
        src/Model/Candidato.h src/Model/FactoryCandidato.cpp src/Model/FactoryCandidato.h src/Model/Cultura.cpp src/Model/Cultura.h
        src/Model/Entrevista.cpp src/Model/Entrevista.h src/Model/Colombia.cpp src/Model/Colombia.h src/Model/Espania.cpp
        src/Model/Espania.h src/Model/Australia.cpp src/Model/Australia.h src/Model/Japon.cpp src/Model/Japon.h)