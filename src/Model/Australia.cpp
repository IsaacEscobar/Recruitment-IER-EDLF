//
// Created by isake on 27/11/2021.
//

#include "Australia.h"

Australia::Australia() {
    this->nombre = "Australia";
}

string Australia::infoCultura() {
    string info;
    info = "Comportamientos\n"
           "Tipo cultura: Es multicultural casi la mitad de los habitantes son extranjeros.\n"
           "Contacto visual: Es importante mantener el contacto visual.\n"
           "Gestos: Saludo comun con la mano derecha.\n"
           "Contacto fisico: Son poco cariñosos y no se tiende a buscar mucho el contacto físico.\n"
           "Distancia: Son bastante respetuosos con el espacio personal de los demás.\n"
           "Manejo del tiempo o puntualidad: La puntualidad es muy valorada en Australia.\n"
           "Tradicion de la siesta: No hay una tradicion en particular.\n"
           "Estilo de comunicacion: Es tono y volumen es bastante estándar ni muy fuerte ni muy bajito.\n";
    return  info;
}

string Australia::festividades() {
    string festividades;
    festividades = "Festividades\n"
                   "- Festival de la Vendimia - 2 al 10 de marzo.\n"
                   "- Festival de Moomba - Segundo lunes de marzo y dura 4 dias.\n"
                   "- Alice Springs Camel Cup.\n"
                   "- Melbourne Cup.\n";
    return festividades;
}
