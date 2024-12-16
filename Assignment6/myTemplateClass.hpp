//Yuriy Yatsenko 135624@student.spbu.ru
//Assignment 6
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
};

template<>
class myTemplateClass<int>{
    public:
        int data;
        int number;
        std::vector<float> vec;

        myTemplateClass(int obj, int num, std::vector<float> vect)
            : data(obj), number(num), vec(vect) {};
        bool foo(){
          return true;
        };
};

template<>
class myTemplateClass<double>{
  public:
    double data;
    int number;
    std::vector<float> vec;
    myTemplateClass(double obj, int num, std::vector<float> vect)
        : data(obj), number(num), vec(vect) {};
    bool foo(){
      return false;
    };
};

#include "myTemplateClass.tpp"
#endif //MYTEMPLATECLASS_H
