#include<iostream>
#include "StackClass.h"
#include <sstream>
#include <vector>

int main(){

    std::string input_string;
    std::cout << "Enter string:";
    std::getline(std::cin, input_string);

    std::istringstream iss(input_string);
    std::vector<std::string> words;
    std::string word;

    while (iss >> word) {
        words.push_back(word);
    }

    StackClass stack = StackClass(words.size());

    for (int i = 0; i < words.size(); ++i) {
        stack.Push(words[i]);
    }

    std::cout << stack.GetTopElement() <<std::endl;

}

