#include "Transformer.h"
#include<iostream>
Transformer::~Transformer() {}
void Transformer::set_fuel(uint fuel) {
    _fuel = fuel;
}

uint Transformer::get_fuel() {
    return _fuel;
}

void Transformer::set_item(Item* item) {
    _item = item;
}

Item* Transformer::get_item() {
    return _item;
}

void Transformer::sing() {
    std::cout << _name << " поет " << _song.get_name() << " от " << _song.get_author() << std::endl;
}