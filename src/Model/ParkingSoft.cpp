//
// Created by isake on 25/11/2021.
//

#include "ParkingSoft.h"

ParkingSoft::ParkingSoft() {

}

void ParkingSoft::anadirCandidato() {
    Candidato newCand = this->factory.crearCandidato();
    Candidato* candidatoAgregar = new Candidato(newCand.getNombre(), newCand.getEmail(), newCand.getlinkedIn(),
                                                newCand.getGithub(), newCand.getPasaporte(), newCand.getNacionalidad());
    //candidatos[candidatoAgregar->getPasaporte()] = candidatoAgregar; - Estabamos probando las diferentes formas
    candidatos.insert({candidatoAgregar->getPasaporte(), candidatoAgregar});
    for(map<int, Candidato*>::iterator pCandidato = candidatos.begin(); pCandidato != candidatos.end(); pCandidato++) {
        cout << pCandidato->second->getNombre() << "\n";
        cout << pCandidato->second->getPasaporte() << "\n";
        pCandidato->second->getNacionalidad()->infoCultura();
    }
}

void ParkingSoft::anadirEntrevista() {

}

void ParkingSoft::generarCartaBienv() {

}