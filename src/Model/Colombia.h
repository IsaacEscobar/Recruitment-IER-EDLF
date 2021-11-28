//
// Created by isake on 27/11/2021.
//

#ifndef RECRUITMENT_IER_EDLF_COLOMBIA_H
#define RECRUITMENT_IER_EDLF_COLOMBIA_H

#include "Cultura.h"

class Colombia : public Cultura {

    public:
        Colombia();
        virtual string infoCultura() override;
        virtual string festividades() override;

};


#endif //RECRUITMENT_IER_EDLF_COLOMBIA_H
