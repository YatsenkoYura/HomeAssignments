#include "Liege_maximo.h"

void Liege_maximo::run(uint speed)
{
    //Liege run
}

uint Liege_maximo::get_speed()
{
    return _speed;
}

void Liege_maximo::set_speed(uint new_speed)
{
    _speed = new_speed;
}
void Liege_maximo::set_status_disguise(bool new_status)
{
    _disguise_works = new_status;
}

bool Liege_maximo::get_status_disguise()
{
    return _disguise_works;
}

bool Liege_maximo::solo_ability()
{
    return 1;
};

void Liege_maximo::transform() const {
    std::cout << "Liege_maximo performing transform()" << std::endl;
}

void Liege_maximo::openFire() const {
    std::cout << "Liege_maximo performing openFire()" << std::endl;
}

void Liege_maximo::radio() const {
    std::cout << "Liege_maximo performing radio()" << std::endl;
}