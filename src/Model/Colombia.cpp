//
// Created by isake on 27/11/2021.
//

#include "Colombia.h"

Colombia::Colombia() {
    this->nombre = "Colombia";
}

string Colombia::infoCultura() {
    string info;
    info = "Comportamientos\n"
           "Tipo cultura: Expresiva.\n"
           "Contacto visual: Se mantiene un contacto visual para demostrar atencion.\n"
           "Gestos: Paila, ni idea, pointing lips.\n"
           "Contacto fisico: Apreton de manos, abrazo o beso para gente cercana.\n"
           "Distancia: Uno o dos brazos de distanciamiento.\n"
           "Puntualidad: Importante la puntualidad, salirse de los horarios establecidos es molesto.\n"
           "Tradicion de la siesta: No hay.\n"
           "Estilo de comunicacion: Comunicacion estandar en ambientes laborales.\n";
    return  info;
}

string Colombia::festividades() {
    string festividades;
    festividades = "Festivideades\n"
                   "- Feria de Cali - 25 a 30 de diciembre.\n"
                   "- Dia de las velitas - 7 de diciembre.\n"
                   "- Carnaval de blancos y negros - 2 al 7 de enero.\n"
                   "- Feria de las flores - 12 al 22 de agosto.\n";
    return festividades;
}