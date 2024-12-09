

#ifndef ___BUMBLEBEE_H
#define ___BUMBLEBEE_H

#include "Transformer.h"
#include <string>

class Bumblebee : public Transformer
{
public:
    uint force_jump() const
    {
        return _force_jump;
    }

    void set_force_jump(uint force_jump)
    {
        _force_jump = force_jump;
    }

    void set_rank(const std::string& rank)
    {
        _rank = rank;
    }
    Bumblebee(Song song, std::string role, uint force_jump, Item* item)
        : Transformer("Bumblebee", "Chaotically Kind", song), _role(role), _force_jump(force_jump)
    {
        set_item(item);
        set_fuel(250);
    }
    std::string get_rank();
    void jump(uint force_jump);
    void set_role(std::string role);
    std::string get_role();

    bool infantry_ability();

private:
    std::string _rank = "Infantry";
    std::string _role;
    uint _force_jump;

};


#endif //___BUMBLEBEE_H
