//Yuriy Yatsenko 135624@student.spbu.ru
//Assignment 3

#include "Liege_maximo.h"

void Liege_maximo::run(uint speed) {
    //Liege run
}

uint Liege_maximo::get_speed() {
    return _speed;
}

void Liege_maximo::set_speed(uint new_speed) {
    _speed = new_speed;
}
void Liege_maximo::set_status_disguise(bool new_status) {
    _disguise_works = new_status;
}

bool Liege_maximo::get_status_disguise() {
    return _disguise_works;
}

bool Liege_maximo::solo_ability(){
    return 1;
};