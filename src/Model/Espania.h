//
// Created by isake on 27/11/2021.
//

#ifndef RECRUITMENT_IER_EDLF_ESPANIA_H
#define RECRUITMENT_IER_EDLF_ESPANIA_H

#include "Cultura.h"

class Espania : public Cultura {

    public:
        Espania();
        virtual string infoCultura() override;
        virtual string festividades() override;
};


#endif //RECRUITMENT_IER_EDLF_ESPANIA_H
