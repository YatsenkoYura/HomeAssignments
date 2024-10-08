#include<iostream>

class Stack{
private:
    int top;
    int capacity;
    int* array;

public:
    Stack(int size){
        array = new int[size];
        capacity = size;
        top = -1;
    };
    ~Stack(){
        delete[] array;
    }
    bool isFull(){
        return((capacity -1) == top);
    }
    bool isEmpty(){
        return top == -1;
    }
    void push(int x){
        if(! isFull()){
            array[++top] = x;
        }
    }
    void pop(){
        if(! isEmpty()){
            --top;
        }
    }
    int peek(){
        if(! isEmpty()){
            return array[top];
        }
    }
};
int main(){

}