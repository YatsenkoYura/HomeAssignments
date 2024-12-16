//Yuriy Yatsenko 135624@student.spbu.ru
//Assignment 3
#include <gtest/gtest.h>
#include "Bumblebee.h"
#include "Prime.h"
#include "Liege_maximo.h"
#include "Item.h"
#include "Song.h"

TEST(SongTest, SongGetters) {
    Song song("Yasuo-P", "lu-lululu-lu-lu", "Electric Angel");
    EXPECT_EQ(song.get_author(), "Yasuo-P");
    EXPECT_EQ(song.get_name(), "Electric Angel");
    EXPECT_EQ(song.get_melody(), "lu-lululu-lu-lu");
}

TEST(ItemTest, ItemGetters) {
    Item item("Rock guitar");
    EXPECT_EQ(item.get_item_name(), "Rock guitar");
}

TEST(PrimeTest, PrimeAttributes) {
    Item item_prime("sign 'STOP'");
    Prime prime(Song("Wowaka", "tu-tutu-tuutuu", "Rolling girl"), "Leader", &item_prime);

    EXPECT_EQ(prime.get_role(), "Leader");
    EXPECT_TRUE(prime.general_ability());
    prime.set_role("Commander");
    EXPECT_EQ(prime.get_role(), "Commander");
}

TEST(BumblebeeTest, BumblebeeAttributes) {
    Item item_bumb("Rock guitar");
    Bumblebee bumblebee(Song("Yasuo-P", "lu-lululu-lu-lu", "Electric Angel"), "Runner", 10, &item_bumb);

    EXPECT_EQ(bumblebee.get_role(), "Runner");
    EXPECT_TRUE(bumblebee.infantry_ability());
    bumblebee.set_role("Scout");
    EXPECT_EQ(bumblebee.get_role(), "Scout");
}

TEST(LiegeMaximoTest, LiegeMaximoAttributes) {
    Liege_maximo liege_maximo(Song("SeeU", "tu-lulu-pupu-ru", "Jangsanbeom"), 20);

    EXPECT_TRUE(liege_maximo.solo_ability());
    liege_maximo.set_speed(30);
    EXPECT_EQ(liege_maximo.get_speed(), 30);
    liege_maximo.set_status_disguise(true);
    EXPECT_TRUE(liege_maximo.get_status_disguise());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
