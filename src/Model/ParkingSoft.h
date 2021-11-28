//
// Created by isake on 25/11/2021.
//

#ifndef RECRUITMENT_IER_EDLF_PARKINGSOFT_H
#define RECRUITMENT_IER_EDLF_PARKINGSOFT_H

#include "Candidato.h"
#include "FactoryCandidato.h"
#include "Entrevista.h"
#include <map>
#include <vector>
#include <ios>
#include <iostream>
#include <fstream>

using std::string;
using std::map;
using std::vector;
using std::ofstream;
using std::endl;
using std::to_string;

class ParkingSoft {

    private:
        map<int, Candidato*> candidatos;
        vector<Entrevista> entrevistas;
        FactoryCandidato factory;
    public:
        ParkingSoft();
        void anadirCandidato();
        void anadirEntrevista();
        void generarCartaBienv();
        bool verExisteCandidato(int documento);

};


#endif //RECRUITMENT_IER_EDLF_PARKINGSOFT_H
