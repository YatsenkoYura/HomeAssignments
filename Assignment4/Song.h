#ifndef ___SONG_H
#define ___SONG_H
#include "string"

class Song
{
public:
    void set_name(const std::string& name)
{
    _name = name;
}


    void set_author(const std::string& author)
{
    _author = author;
}


    void set_melody(const std::string& melody)
{
    _melody = melody;
}
    Song(std::string author, std::string melody, std::string name)
        : _name(name), _author(author), _melody(melody) {};
    std::string get_name();
    std::string get_author();
    std::string get_melody();

private:
    std::string _name;
    std::string _author;
    std::string _melody;
};


#endif //___SONG_H
