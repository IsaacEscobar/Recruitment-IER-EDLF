//
// Created by isake on 27/11/2021.
//

#include "Japon.h"

Japon::Japon() {
    this->nombre = "Japon";
}

string Japon::infoCultura()
{
    string info;
    info = "Comportamientos\n"
           "Tipo Cultura: Reservada\n"
           "Contacto visual: Poca duración y poca intensidad, ya que se sugiere que el contacto visual emplea los mismos"
           " recursos mentales que una tarea compleja.Poca duración y poca intensidad, ya que se sugiere que el contacto"
           " visual emplea los mismos recursos mentales que una tarea compleja.\n"
           "Gestos: Reverencia,\n"
           "Contacto fisico: El minimo posible no suelen mostrar mucho contacto fisico en publico.\n"
           "Distancia: Es importante mantener un espacio prudente entre las personas.\n"
           "Manejo del tiempo o puntualidad: Extremadamente puntuales y avisan con mucho tiempo los cambios de planes.\n"
           "Tradicion de la siesta: Japon es uno de los paises en los que menos se duerme, pero hay una tradición llamada Inemuri.\n"
           "Estilo de comunicacion: Es bastante estandar en cuanto al tono y volumen.\n";
    return  info;
}

string Japon::festividades() {
    string festividades;
    festividades = "Festividades\n"
                   "- Festival de nieve de sapporo - 31 de enero al 11 de febrero.\n"
                   "- Sanja Matsuri - 18 al 20 de Mayo.\n"
                   "- Kanda Matsuri - 12 y 13 de Mayo.\n"
                   "- Gion Matsuri - Todo julio.\n";
    return festividades;
}





