
#ifndef ___ITEM_H
#define ___ITEM_H
#include<iostream>

class Item {
public:
    Item(std::string name)
    : _item_name(name){};
    std::string get_item_name();

private:
    std::string _item_name;
};


#endif //___ITEM_H
