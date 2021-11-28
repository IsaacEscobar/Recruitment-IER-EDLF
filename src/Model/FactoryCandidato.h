    //
// Created by isake on 25/11/2021.
//

#ifndef RECRUITMENT_IER_EDLF_FACTORYCANDIDATO_H
#define RECRUITMENT_IER_EDLF_FACTORYCANDIDATO_H

#include <iostream>
#include <stdlib.h>
#include <ios>
#include <limits>
#include "Candidato.h"
#include "Colombia.h"
#include "Espania.h"
#include "Australia.h"
#include "Japon.h"

using std::cin;
using std::cout;
using std::getline;
using std::string;


class FactoryCandidato {

    private:
        Candidato candidato;
        Colombia colombia;
        Espania espania;
        Australia australia;
        Japon japon;

    public:
        FactoryCandidato();
        Candidato crearCandidato();

};


#endif //RECRUITMENT_IER_EDLF_FACTORYCANDIDATO_H
