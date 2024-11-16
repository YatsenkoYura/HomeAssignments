
#ifndef ___TRANSFORMER_H
#define ___TRANSFORMER_H
#include "Item.h"
#include "Song.h"


class Transformer
{
public:
    Transformer(std::string name, std::string worldview, Song song)
        : _song(song), _worldview(worldview), _fuel(0), _item(nullptr), _name(name)
    {
    }
    ~Transformer();

    void set_fuel(uint fuel);
    uint get_fuel();

    void set_item(Item* item);
    Item* get_item();

    void sing();

    bool operator<(const Transformer& other) const;
    bool operator>(const Transformer& other) const;
    bool operator==(const Transformer& other) const;
    bool operator!=(const Transformer& other) const;
    bool operator<=(const Transformer& other) const;
    bool operator>=(const Transformer& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Transformer& t);

protected:
    Song _song;
    std::string _worldview;
    uint _fuel;
    Item* _item;
    std::string _name;
};


#endif //___TRANSFORMER_H
