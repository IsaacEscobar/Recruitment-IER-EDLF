//
// Created by isake on 25/11/2021.
//

#ifndef RECRUITMENT_IER_EDLF_CULTURA_H
#define RECRUITMENT_IER_EDLF_CULTURA_H

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

class Cultura {

    protected:
        string tipoCultura;
        string contactoVisual;
        string gestos;
        string comunicacion;
        string tradicionSiesta;
        string distanciamiento;

        virtual void setTipoCultura();
        virtual void setContactoVisual();
        virtual void setGestos();
        virtual void setComunicacion();
        virtual void setTradicionSiesta();
        virtual void setDistanciamiento();

    public:
        string getTipoCultura();
        string getContactoVisual();
        string getGestos();
        string getComunicacion();
        string getTradicionSiesta();
        string getDistanciamiento();

};


#endif //RECRUITMENT_IER_EDLF_CULTURA_H
