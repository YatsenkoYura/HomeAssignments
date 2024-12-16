//Yuriy Yatsenko 135624@student.spbu.ru
//Assignment 5

#ifndef ___ITEM_H
#define ___ITEM_H
#include "string"

class Item
{
public:


    Item(std::string name)
        : _item_name(name) {};
    std::string get_item_name();

    void set_item_name(const std::string& item_name)
    {
        _item_name = item_name;
    }
private:
    std::string _item_name;
};


#endif //___ITEM_H
