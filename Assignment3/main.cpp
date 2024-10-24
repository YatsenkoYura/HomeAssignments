//Yuriy Yatsenko 135624@student.spbu.ru
//Assignment 3

#include "Prime.h"
#include "Bumblebee.h"
#include "Item.h"
#include "Song.h"
#include "Liege_maximo.h"

int main() {
    Item item_prime = Item("sign 'STOP'");
    Item* item_link_prime = &item_prime;
    Prime prime = Prime(Song("Wowaka", "tu-tutu-tuutuu", "Rolling girl"), "Leader", item_link_prime);
    prime.sing();

    Item item_bumb = Item("Rock guitar");
    Item* item_link_bumb = &item_bumb;
    Bumblebee bumblebee = Bumblebee(Song("Yasuo-P", "lu-lululu-lu-lu", "Electric Angel"), "Runner", 10, item_link_bumb);
    bumblebee.sing();

    Liege_maximo liege_maximo = Liege_maximo(Song("SeeU ", "tu-lulu-pupu-ru", "Jangsanbeom "), 20);
    liege_maximo.sing();
    return 0;
}