#ifndef CLASS3_HPP
#define CLASS3_HPP

#include <vector>

class Class3 {
public:
    bool bar(int number, std::vector<float>& vec) {
        return number == -static_cast<int>(vec.size());
    }

    int c3_1() { return 3; }
    float c3_2() { return 3.0f; }
    void c3_3() {}
};

#endif // CLASS3_HPP