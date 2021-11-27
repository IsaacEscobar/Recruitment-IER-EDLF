cmake_minimum_required(VERSION 3.20)
project(Recruitment_IER_EDLF)

set(CMAKE_CXX_STANDARD 14)

add_executable(Recruitment_IER_EDLF main.cpp View/View.cpp View/View.h Model/ParkingSoft.cpp Model/ParkingSoft.h Model/Candidato.cpp Model/Candidato.h Model/FactoryCandidato.cpp Model/FactoryCandidato.h Model/Cultura.cpp Model/Cultura.h Model/Entrevista.cpp Model/Entrevista.h Model/Colombia.cpp Model/Colombia.h)
