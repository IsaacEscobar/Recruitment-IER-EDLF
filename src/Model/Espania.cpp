//
// Created by isake on 27/11/2021.
//

#include "Espania.h"

Espania::Espania() {
    this->nombre = "Espania";
}

string Espania::infoCultura() {
    string info;
    info = "Comportamientos\n"
           "Tipo cultura: Reservados.\n"
           "Contacto visual: Se mantiene un contacto visual para demostrar atencion.\n"
           "Gestos: manoteo al aire, movimiento del tronco superior.\n"
           "Contacto fisico: Generalmente se dan 2 besos, uno a cada lado\n"
           "Distancia: Uno o dos brazos de distanciamiento.\n"
           "Manejo del tiempo o puntualidad: Importante puntualidad.\n"
           "Tradicion de la siesta: Siesta de 2 a 4 de la tarde por lo general.\n"
           "Estilo de comunicacion: Volumen alto y tono seco.\n";
    return info;
}

string Espania::festividades() {
    string festividades;
    festividades = "Festividades\n"
                   "- Feria de abril - La segunda quince de abril.\n"
                   "- Las fallas, Valencia - 15 al 19 de marzo.\n"
                   "- Carnavales Santa Cruz de Tenerife - Finales de enero e inicios de febrero.\n"
                   "- Los sanfermines, Pamplona - 6 al 14 de julio.\n";
    return festividades;
}
