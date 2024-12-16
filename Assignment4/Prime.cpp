//Yuriy Yatsenko 135624@student.spbu.ru
//Assignment 4
#include "Prime.h"

std::string Prime::get_role()
{
    return _role;
}

std::string Prime::get_rank()
{
    return _rank;
}

void Prime::set_role(std::string role)
{
    _role = role;
}

bool Prime::general_ability()
{
    return 1;
}