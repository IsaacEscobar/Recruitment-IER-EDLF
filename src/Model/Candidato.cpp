//
// Created by isake on 25/11/2021.
//

#include "Candidato.h"

Candidato::Candidato() {

}

string Candidato::getNombre() {
    return nombre;
}

void Candidato::setNombre(string nombre) {
    this->nombre = nombre;
}

string Candidato::getEmail() {
    return email;
}

void Candidato::setEmail(string email) {
    this->email = email;
}

string Candidato::getlinkedIn() {
    return linkedIn;
}

void Candidato::setLinkedIn(string linkedIn) {
    this->linkedIn = linkedIn;
}

string Candidato::getGithub() {
    return github;
}

void Candidato::setGithub(string github) {
    this->github = github;
}

int Candidato::getPasaporte() {
    return pasaporte;
}

void Candidato::setPasaporte(int pasaporte) {
    this->pasaporte = pasaporte;
}

Cultura Candidato::getNacionalidad() {
    return nacionalidad;
}

void Candidato::setNacionalidad(Cultura nacionalidad) {
    this->nacionalidad = nacionalidad;
}

