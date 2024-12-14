#ifndef ___TRANSFORMER_H
#define ___TRANSFORMER_H

#include <iostream>
#include <string>
#include "Item.h"
#include "Song.h"

class Transformer
{
public:
    Transformer(std::string name, std::string worldview, Song song);
    Transformer(std::string name, std::string worldview);
    Transformer(std::string name);

    virtual ~Transformer();
    Song song();

    void set_song(Song song);

    std::string worldview();
    void set_worldview(std::string& worldview);

    std::string name();
    void set_name(std::string& name);

    void set_fuel(uint fuel);
    uint get_fuel();

    void set_item(Item* item);
    Item* get_item();
    virtual void transform() const {
        std::cout << "Transformer transforming" << std::endl;
    }

    virtual void openFire() const {
        std::cout << "Transformer opening fire" << std::endl;
    }

    virtual void radio() const {
        std::cout << "Transformer using radio" << std::endl;
    }

    void sing();

    bool operator>(Transformer& other);
    bool operator<(Transformer& other);
    bool operator==(Transformer& other);

    friend std::ostream& operator<<(std::ostream& os, Transformer& transformer);

protected:
    std::string _name;
    std::string _worldview;
    Song _song;
    uint _fuel;
    Item* _item;
};

#endif // ___TRANSFORMER_H