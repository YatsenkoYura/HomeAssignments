#include "StackClass.h"

StackClass::StackClass(int size){
    array = new float[size];
    capacity = size;
    top = -1;
}

StackClass::~StackClass(){
    delete[] array;
}

float StackClass::Pop(){
    float poppedValue = array[top];
    top--;
    return poppedValue;
}

void StackClass::Push(float x){
    array[++top] = x;
}

float StackClass::GetTopElement(){
    float element = array[top];
    return element;
}

void StackClass::Push(std::string x){
    if (x != "+" && x != "-" && x != "/" && x != "*") {
        array[++top] = std::stof(x);
    }
    else if (x == "+") {
        Push(Pop() + Pop());
    }
    else if (x == "-") {
        float a = Pop();
        float b = Pop();
        Push(b - a);
    }
    else if (x == "*") {
        Push(Pop() * Pop());
    }
    else if (x == "/") {
        float a = Pop();
        float b = Pop();
        Push(b / a);
    }
}





