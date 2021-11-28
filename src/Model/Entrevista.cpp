//
// Created by isake on 25/11/2021.
//

#include "Entrevista.h"

Entrevista::Entrevista()
{
    this->fecha = fecha;
    this->candidato = candidato;
    this->identificacion = identificacion;
    this->nacionalidad = nacionalidad;
}

string Entrevista::getFecha()
{
    return fecha;
}
void Entrevista::setFecha(string fecha)
{
    this->fecha = fecha;
}

string Entrevista::getCandidato()
{
    return candidato;
}
void Entrevista::setCandidato(string candidato)
{
    this->candidato = candidato;
}

int Entrevista::getIdentificacion()
{
    return identificacion;
}
void Entrevista::setIdentificacion(int identificaion)
{
    this->identificacion = identificaion;
}

string Entrevista::getNacionalidad()
{
    return nacionalidad;
}
void Entrevista::setNacionalidad(string nacionalidad)
{
    this->nacionalidad = nacionalidad;
}

