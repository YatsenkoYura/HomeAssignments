#ifndef ___LIEGE_MAXIMO_H
#define ___LIEGE_MAXIMO_H

#include "Transformer.h"

class Liege_maximo : public Transformer{
public:
    std::string role() const
    {
        return _role;
    }

    void set_role(const std::string& role)
    {
        _role = role;
    }

    Liege_maximo(Song song, uint speed)
    : Transformer("Liege Maximo", "Lawful evil", song), _speed(speed){
            set_fuel(100);
    }

    void run(uint speed);
    void set_status_disguise(bool new_status);
    void set_speed(uint new_speed);
    uint get_speed();
    bool get_status_disguise();
    bool solo_ability();


private:
    uint _speed;
    std::string _role = "Solo";
    bool _disguise_works = false;
};

#endif //___LIEGE_MAXIMO_H
