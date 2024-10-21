#ifndef STACKCLASS_H
#define STACKCLASS_H

#include <string>

class StackClass {
private:
    float* array;
    int capacity;
    int top;

public:
    StackClass(int size);
    ~StackClass();
    void Push(float x);
    void Push(std::string x);
    float Pop();
    float GetTopElement();
};
#endif //STACKCLASS_H
