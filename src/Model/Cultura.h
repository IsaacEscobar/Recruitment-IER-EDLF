//
// Created by isake on 25/11/2021.
//

#ifndef RECRUITMENT_IER_EDLF_CULTURA_H
#define RECRUITMENT_IER_EDLF_CULTURA_H

#include <string>

using std::string;


class Cultura {

    protected:
        string tipoCultura;
        string contactoVisual;
        string gestos;
        string comunicacion;
        string tradicionSiesta;
        string distanciamiento;

    public:
        virtual string getTipoCultura();

};


#endif //RECRUITMENT_IER_EDLF_CULTURA_H
