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

void Prime::transform() const {
    std::cout << "Prime performing transform()" << std::endl;
}

void Prime::openFire() const {
    std::cout << "Prime performing openFire()" << std::endl;
}

void Prime::radio() const {
    std::cout << "Prime performing radio()" << std::endl;
}