//Yuriy Yatsenko 135624@student.spbu.ru
//Assignment 6
#ifndef TEMPLATECLASS_TPP
#define TEMPLATECLASS_TPP

#include "myTemplateClass.hpp"

template <typename T>
bool myTemplateClass<T>::foo(){
    return data.bar(number, vec);
}

#endif // TEMPLATECLASS_TPP