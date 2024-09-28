//Yuriy Yatsenko 135624@student.spbu.ru
//hello world project


#include <iostream>
#include "greeting.h"

using namespace std;

int main() {
    greeting("world!");
    string word;
    while (true) {
        cout << "Input: ";
        cin >> word;
        greeting(word);
    }
}