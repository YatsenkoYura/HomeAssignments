
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

template<>
class myTemplateClass<int>{
    public:
        myTemplateClass(int obj, int num, std::vector<float> vect);
        ~myTemplateClass();
        bool foo(){
          return true;
        };
};

template<>
class myTemplateClass<double>{
  public:
    myTemplateClass(double obj, int num, std::vector<float> vect);
    ~myTemplateClass();
    bool foo(){
      return false;
    };
};

#include "myTemplateClass.tpp"
#endif //MYTEMPLATECLASS_H
