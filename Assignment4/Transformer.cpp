#include "Transformer.h"
#include<iostream>
Transformer::~Transformer() {}
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

bool Transformer::operator<(const Transformer& other) const
{
    return _fuel < other._fuel;
}

bool Transformer::operator>(const Transformer& other) const
{
    return _fuel > other._fuel;
}

bool Transformer::operator==(const Transformer& other) const
{
    return _fuel == other._fuel;
}

bool Transformer::operator!=(const Transformer& other) const
{
    return _fuel != other._fuel;
}

bool Transformer::operator<=(const Transformer& other) const
{
    return _fuel <= other._fuel;
}

bool Transformer::operator>=(const Transformer& other) const
{
    return _fuel >= other._fuel;
}

std::ostream& operator<<(std::ostream& os, const Transformer& t)
{
    os << "Fuel: " << t._fuel << " Name: " << t._name << " Worlview: " << t._worldview << std::endl;
    return os;
}