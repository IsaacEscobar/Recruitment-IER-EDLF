//
// Created by isake on 25/11/2021.
//

#include "FactoryCandidato.h"

FactoryCandidato::FactoryCandidato() {

}

Candidato FactoryCandidato::crearCandidato() {
    string nombre, email, linkedIn, github;
    int pasaporte, opc;
    Cultura *ptr;
    cout << "Ingrese el nombre del candidato:\n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, nombre);
    cout << "Ingrese el email del candidato:\n";
    getline(cin, email);
    cout << "Ingrese el LinkedIn del candidato:\n";
    getline(cin, linkedIn);
    cout << "Ingrese el Github del candidato:\n";
    getline(cin, github);
    //try
    cout << "Ingrese el pasaporte del candidato:\n";
    cin >> pasaporte;
    Candidato newCandidato = Candidato(nombre, email, linkedIn, github, pasaporte, ptr);
    do {
        cout << "Seleccione el pais de origen del candidato:\n";
        cout << "1. Colombia\n"
                "2. Espania\n"
                "3. Australia\n"
                "4. Japon\n";
        cin >> opc;
        switch (opc) {
            case 1:
                ptr = new Colombia();
                newCandidato.setNacionalidad(ptr);
                break;
            case 2:
                ptr = new Espania();
                newCandidato.setNacionalidad(ptr);
                break;
            case 3:
                ptr = new Australia();
                newCandidato.setNacionalidad(ptr);
                break;
            case 4:
                ptr = new Japon();
                newCandidato.setNacionalidad(ptr);
                break;
            default: cout << "Opcion no contemplada, intentelo de nuevo\n";
                break;
        }
    } while(opc > 4 && opc < 1);
    return newCandidato;
}
