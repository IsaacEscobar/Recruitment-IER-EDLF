//
// Created by isake on 27/11/2021.
//

#ifndef RECRUITMENT_IER_EDLF_JAPON_H
#define RECRUITMENT_IER_EDLF_JAPON_H

#include "Cultura.h"

class Japon : public Cultura {

    public:
        Japon();
        virtual string infoCultura() override;
        virtual string festividades() override;

};


#endif //RECRUITMENT_IER_EDLF_JAPON_H
