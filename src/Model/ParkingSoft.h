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

using std::map;
using std::vector;

class ParkingSoft {

    private:
        map<int, Candidato*> candidatos;
        vector<Entrevista*> entrevistas;
        FactoryCandidato factory;
    public:


};


#endif //RECRUITMENT_IER_EDLF_PARKINGSOFT_H
