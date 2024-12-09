#include "Transformer.h"
#include <iostream>

Transformer::Transformer(std::string name, std::string worldview, Song song)
    : _name(name), _worldview(worldview), _song(song), _fuel(0), _item(nullptr) {}

Transformer::Transformer(std::string name, std::string worldview)
    : _name(name), _worldview(worldview), _fuel(0), _item(nullptr) {}

Transformer::Transformer(std::string name)
    : _name(name), _fuel(0), _item(nullptr) {}

Transformer::~Transformer() {}

Song Transformer::song()
{
    return _song;
}

void Transformer::set_song(Song song)
{
    _song = song;
}

std::string Transformer::worldview()
{
    return _worldview;
}

void Transformer::set_worldview(std::string& worldview)
{
    _worldview = worldview;
}

std::string Transformer::name()
{
    return _name;
}

void Transformer::set_name(std::string& name)
{
    _name = name;
}

void Transformer::set_fuel(uint fuel)
{
    _fuel = fuel;
}

uint Transformer::get_fuel()
{
    return _fuel;
}

void Transformer::set_item(Item* item)
{
    _item = item;
}

Item* Transformer::get_item()
{
    return _item;
}

void Transformer::sing()
{
    std::cout << _name << " поет " << _song.get_name() << " от " << _song.get_author() << std::endl;
}

bool Transformer::operator>(Transformer& other)
{
    return _fuel > other._fuel;
}

bool Transformer::operator<(Transformer& other)
{
    return _fuel < other._fuel;
}

bool Transformer::operator==(Transformer& other)
{
    return _fuel == other._fuel;
}

std::ostream& operator<<(std::ostream& os, Transformer& transformer)
{
    os << "Transformer: "
       << "Name: " << transformer._name
       << ", Worldview: " << transformer._worldview
       << ", Song: " << transformer._song.get_name()
       << " by " << transformer._song.get_author()
       << ", Fuel: " << transformer._fuel;
    return os;
}