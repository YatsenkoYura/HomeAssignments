#ifndef CLASS3_HPP
#define CLASS3_HPP

#include <vector>

class Class3 {
public:
    bool bar(int number, std::vector<float>& vec) {
        return number == -static_cast<int>(vec.size());
    }
};

#endif // CLASS3_HPP