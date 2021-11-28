//
// Created by isake on 25/11/2021.
//

#ifndef RECRUITMENT_IER_EDLF_CANDIDATO_H
#define RECRUITMENT_IER_EDLF_CANDIDATO_H

#include "Cultura.h"
#include <string>

using std::string;

class Candidato {

    private:
        string nombre;
        string email;
        string linkedIn;
        string github;
        int pasaporte;
        Cultura* nacionalidad;

    public:
        Candidato();
        Candidato(string nombre, string email, string linkedIn, string github, int pasaporte, Cultura *nacionalidad);

        string getNombre();
        void setNombre(string nombre);
        string getEmail();
        void setEmail(string email);
        string getlinkedIn();
        void setLinkedIn(string linkedIn);
        string getGithub();
        void setGithub(string github);
        int getPasaporte();
        void setPasaporte(int pasaporte);
        Cultura* getNacionalidad();
        void setNacionalidad(Cultura *nacionalidad);


};


#endif //RECRUITMENT_IER_EDLF_CANDIDATO_H
