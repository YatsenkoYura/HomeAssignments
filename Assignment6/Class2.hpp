#ifndef CLASS2_H
#define CLASS2_H

#include <vector>

class Class2 {
public:
    bool bar(int number, std::vector<float>& vec) {
        return !vec.empty();
    }
};

#endif //CLASS2_H
