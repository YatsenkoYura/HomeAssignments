#include "StackClass.h"

StackClass::StackClass(int size){
    array = new int[size];
    capacity = size;
    top = -1;
}

StackClass::~StackClass(){
    delete[] array;
}


int StackClass::Pop(){
    int poppedValue = array[top];
    top--;
    return poppedValue;
}

void StackClass::Push(int x){
    array[++top] = x;
}

int StackClass::GetTopElement(){
    int element = array[top];
    return element;
}

void StackClass::Push(std::string x){
    if (x != "+" && x != "-" && x != "/" && x != "*") {
        array[++top] = std::stoi(x);
    }
    if (x == "+") {
        Push(Pop() + Pop());
    }
    else if (x == "-") {
        int a = Pop();
        int b = Pop();
        Push(b - a);
    }
    if (x == "*") {
        Push(Pop() * Pop());
    }
    else if (x == "/") {
        int a = Pop();
        int b = Pop();
        Push(b / a);
    }

}





