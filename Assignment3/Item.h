
#ifndef ___ITEM_H
#define ___ITEM_H
#include "string"

class Item {
public:
    void set_item_name(const std::string& item_name)
    {
        _item_name = item_name;
    }

    Item(std::string name)
    : _item_name(name){};
    std::string get_item_name();
private:
    std::string _item_name;
};


#endif //___ITEM_H
