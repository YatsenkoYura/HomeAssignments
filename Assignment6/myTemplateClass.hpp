
#ifndef MYTEMPLATECLASS_H
#define MYTEMPLATECLASS_H

#include<vector>

template<typename T>
class myTemplateClass
{
public:
    T data;
    int number;
    std::vector<float> vec;
    bool foo();

    myTemplateClass(T obj, int num, std::vector<float> vect)
        : data(obj), number(num), vec(vect) {};
    ~myTemplateClass();
};



#endif //MYTEMPLATECLASS_H
