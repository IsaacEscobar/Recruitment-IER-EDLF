//
// Created by isake on 27/11/2021.
//

#ifndef RECRUITMENT_IER_EDLF_AUSTRALIA_H
#define RECRUITMENT_IER_EDLF_AUSTRALIA_H

#include "Cultura.h"

class Australia : public Cultura {

    public:
        Australia();
        virtual string infoCultura() override;
        virtual string festividades() override;

};


#endif //RECRUITMENT_IER_EDLF_AUSTRALIA_H
