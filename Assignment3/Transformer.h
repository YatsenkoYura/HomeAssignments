//Yuriy Yatsenko 135624@student.spbu.ru
//Assignment 3

#ifndef ___TRANSFORMER_H
#define ___TRANSFORMER_H
#include "Item.h"
#include "Song.h"


class Transformer {
public:
    Transformer(std::string name, std::string worldview, Song song)
        : _name(name), _worldview(worldview), _song(song), _fuel(0), _item(nullptr)  {
    }
    ~Transformer();

    Song get_song();
    void set_song(Song song);

    std::string get_worldview();
    void set_worldview(const std::string& worldview);

    std::string get_name();
    void set_name(const std::string& name);

    void set_fuel(uint fuel);
    uint get_fuel();

    void set_item(Item* item);
    Item* get_item();

    void sing();

protected:
    std::string _name;
    std::string _worldview;
    Song _song;

    uint _fuel;
    Item* _item;
};


#endif //___TRANSFORMER_H
