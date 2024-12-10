#include "Bumblebee.h"

std::string Bumblebee::get_role()
{
    return _role;
}

std::string Bumblebee::get_rank()
{
    return _rank;
}

void Bumblebee::set_role(std::string role)
{
    _role = role;
}

bool Bumblebee::infantry_ability()
{
    return 1;
}

void Bumblebee::jump(uint force_jump)
{
    //juuuump
}

void Bumblebee::transform() const {
    std::cout << "Bumblebee performing transform()" << std::endl;
}

void Bumblebee::openFire() const {
    std::cout << "Bumblebee performing openFire()" << std::endl;
}

void Bumblebee::radio() const {
    std::cout << "Bumblebee performing radio()" << std::endl;
}
