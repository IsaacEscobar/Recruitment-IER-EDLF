//
// Created by isake on 25/11/2021.
//

#include "View.h"

View::View() {

}

void View::menuParkingSoft() {
    int opcionUsuario;
    do {
        cout << "1. Crear candidato.\n";
        cout << "2. Programar una entrevista.\n";
        cout << "3. Generar carta de bienvenida.\n";
        cout << "0. Salir.\n";
        cout << "Digite el numero: ";
        cin >> opcionUsuario;
        switch(opcionUsuario) {
            case 1:
                this->principal.anadirCandidato();
                break;
            case 2:
                this->principal.anadirEntrevista();
                break;
            case 3:
                this->principal.generarCartaBienv();
                break;
            case 0:
                break;
            default: cout << "Opcion no contemplada, intentelo de nuevo\n";
                break;
        }
    } while(opcionUsuario != 0);
}

