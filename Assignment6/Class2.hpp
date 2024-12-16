//Yuriy Yatsenko 135624@student.spbu.ru
//Assignment 6
#ifndef CLASS2_H
#define CLASS2_H

#include <vector>

class Class2 {
public:
    bool bar(int number, std::vector<float>& vec) {
        return !vec.empty();
    }

    int c2_1() { return 2; }
    float c2_2() { return 2.0f; }
    void c2_3() {}
};

#endif //CLASS2_H
