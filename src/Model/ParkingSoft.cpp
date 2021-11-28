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
    string nombre, nacionalidad, fecha;
    int documento, cont = 0;
    cout << "Ingrese la fecha de la entrevista:\n";
    fflush(stdin);
    getline(cin, fecha);
    cout << "Ingrese el documento del candidato:\n";
    cin >> documento;

    Entrevista entrevistaTemp;

    if(verExisteCandidato(documento) == false)
    {
        throw std::domain_error("El candidato no esta registrado");
    }
    else if(verExisteCandidato(documento) == true)
    {
        for(vector<Entrevista>::iterator pEntrevista = entrevistas.begin(); pEntrevista != entrevistas.end(); pEntrevista++)
        {
            if(pEntrevista->getIdentificacion() == documento)
            {
                cont++;
            }
        }
        if(cont == 3)
        {
            cout << "Este candidato ya tiene tres entrevistas pendientes\n";
            return;
        }
        for(map<int, Candidato*>::iterator pCandidato = candidatos.begin(); pCandidato != candidatos.end(); pCandidato++)
        {
            int verDoc = pCandidato->first;
            if(verDoc == documento)
            {
                entrevistaTemp.setCandidato(pCandidato->second->getNombre());
                entrevistaTemp.setIdentificacion(documento);
                entrevistaTemp.setFecha((fecha));
                entrevistaTemp.setNacionalidad(pCandidato->second->getNacionalidad().getNombre());
                entrevistas.push_back(entrevistaTemp);
            }
        }
    }

}

void ParkingSoft::generarCartaBienv() {

}

bool ParkingSoft::verExisteCandidato(int documento)
{
    for(map<int, Candidato*>::iterator pCandidato = candidatos.begin(); pCandidato != candidatos.end(); pCandidato++)
    {
        int verDoc = pCandidato->first;
        if(verDoc == documento)
        {
            return  true;
        }
    }
    return false;
}