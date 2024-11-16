#ifndef ___PRIME_H
#define ___PRIME_H

#include "Transformer.h"
#include <string>
class Prime : public Transformer{
public:
    Prime(Song song, std::string role, Item* item)
    : Transformer("Optimus Prime", "Good", song), _role(role){
        set_item(item);
        set_fuel(200);
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
