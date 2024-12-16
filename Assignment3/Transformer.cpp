//Yuriy Yatsenko 135624@student.spbu.ru
//Assignment 3

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

Song Transformer::get_song()
{
    return _song;
}
void Transformer::set_song(Song song)
{
    _song = song;
}
void Transformer::set_worldview(const std::string& worldview)
{
        _worldview = worldview;
}
std::string Transformer::get_worldview()
{
    return _worldview;
}

void Transformer::set_name(const std::string& name)
{
    _name = name;
}

std::string Transformer::get_name()
{
    return _name;
}

void Transformer::sing() {
    std::cout << _name << " поет " << _song.get_name() << " от " << _song.get_author() << std::endl;
}