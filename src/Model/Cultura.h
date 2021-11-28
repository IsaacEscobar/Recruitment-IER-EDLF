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
       string nombre;

    public:
        Cultura();
        virtual string infoCultura();
        virtual string festividades();
        string getNombre();

};


#endif //RECRUITMENT_IER_EDLF_CULTURA_H
