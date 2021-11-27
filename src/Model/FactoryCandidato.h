    //
// Created by isake on 25/11/2021.
//

#ifndef RECRUITMENT_IER_EDLF_FACTORYCANDIDATO_H
#define RECRUITMENT_IER_EDLF_FACTORYCANDIDATO_H

#include "Candidato.h"
#include "Colombia.h"
/* #include "Pais1"
   #include "Pais2"
   #include "Pais3"
*/

class FactoryCandidato {

    private:
        Candidato candidato;
        Colombia colombia;

    public:
        FactoryCandidato();
        Candidato* crearCandidato();
        /*
        P1 info();
        P2 info();
        P3 info();
        */
};


#endif //RECRUITMENT_IER_EDLF_FACTORYCANDIDATO_H
