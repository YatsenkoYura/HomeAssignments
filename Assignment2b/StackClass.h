#include<iostream>

#ifndef STACKCLASS_H
#define STACKCLASS_H


class StackClass{
private:
    int top;
    int capacity;
    int* array;
    void Push(int x);

public:
    StackClass(int size);
    ~StackClass();
    void Push(std::string x);
    int Pop();
    int GetTopElement();
};
#endif STACKCLASS_H
