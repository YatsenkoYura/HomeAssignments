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
    return true;
}

void Bumblebee::jump(uint force_jump)
{
    //juuuump
}
