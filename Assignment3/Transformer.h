
#ifndef ___TRANSFORMER_H
#define ___TRANSFORMER_H
#include "Item.h"
#include "Song.h"


class Transformer {
public:
    Transformer(std::string name, std::string worldview, Song song)
            : _name(name), _worldview(worldview), _song(song), _fuel(0), _item(nullptr){
    }
    ~Transformer();

    void set_fuel(uint fuel);
    uint get_fuel();

    void set_item(Item* item);
    Item* get_item();

    void sing();

protected:
    Song _song;
    std::string _worldview;
    uint _fuel;
    Item* _item;
    std::string _name;
};


#endif //___TRANSFORMER_H
