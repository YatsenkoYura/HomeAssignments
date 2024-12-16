//Yuriy Yatsenko 135624@student.spbu.ru
//Assignment 5
#ifndef ___PRIME_H
#define ___PRIME_H

#include "Transformer.h"
#include <string>
class Prime : public Transformer
{
public:


    Prime(Song song, std::string role, Item* item)
        : Transformer("Optimus Prime", "Good", song), _role(role)
    {
        set_item(item);
        set_fuel(200);
    }

    void transform() const override;
    void openFire() const override;
    void radio() const override;

    void set_rank(const std::string& rank)
    {
        _rank = rank;
    }

    std::string get_rank();

    void set_role(std::string role);
    std::string get_role();

    bool general_ability();

private:
    std::string _rank  = "General";
    std::string _role;


};
#endif //___PRIME_H
