//Yuriy Yatsenko 135624@student.spbu.ru
//Assignment 5
#ifndef ___SONG_H
#define ___SONG_H
#include "string"

class Song
{
public:


    Song() : _name("Untitled"), _author("Unknown"), _melody("Unknown") {}

    Song(std::string author, std::string melody, std::string name)
        : _name(name), _author(author), _melody(melody) {}


    void set_name(std::string& name)
    {
        _name = name;
    }


    void set_author(std::string& author)
    {
        _author = author;
    }


    void set_melody(std::string& melody)
    {
        _melody = melody;
    }
    std::string get_name();
    std::string get_author();
    std::string get_melody();

private:
    std::string _name;
    std::string _author;
    std::string _melody;
};


#endif //___SONG_H
