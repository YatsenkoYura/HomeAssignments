//Yuriy Yatsenko 135624@student.spbu.ru
//Assignment 6
#ifndef CLASS1_H
#define CLASS1_H

#include <vector>

class Class1 {
public:
    bool bar(int number, std::vector<float>& vec) {
        return number > 0;
    }
    int c1_1() { return 1; }
    float c1_2() { return 1.0f; }
    void c1_3() {}
};

#endif //CLASS1_H
