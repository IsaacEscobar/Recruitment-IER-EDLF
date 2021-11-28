//
// Created by isake on 25/11/2021.
//

#ifndef RECRUITMENT_IER_EDLF_ENTREVISTA_H
#define RECRUITMENT_IER_EDLF_ENTREVISTA_H

#include <string>
#include <iostream>


using std::cin;
using std::cout;
using std::endl;
using std::string;


class Entrevista {
   private:
    string fecha;
    string candidato;
    int identificacion;
    string nacionalidad;

   public:
    Entrevista();
    void mostrarEntrevista();

    string getFecha();
    void setFecha(string fecha);
    string getCandidato();
    void setCandidato(string candidato);
    int getIdentificacion();
    void setIdentificacion(int identificacion);
    string getNacionalidad();
    void setNacionalidad(string nacionalidad);

};


#endif //RECRUITMENT_IER_EDLF_ENTREVISTA_H
