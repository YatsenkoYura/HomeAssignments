//Yuriy Yatsenko 135624@student.spbu.ru
//Assignment 3

#include <iostream>
#include "Transformer.h"
#include "Item.h"
#include "Song.h"
int main() {
    Transformer prime = Transformer("Optimus Prime", "Good", Song("wowaka", "tuttutuututu", "Rolling girl"));
    prime.sing();
    return 0;
}