//Yuriy Yatsenko 135624@student.spbu.ru
//Assignment 5

#include <gtest/gtest.h>
#include "Bumblebee.h"
#include "Prime.h"
#include "Liege_maximo.h"
#include "Item.h"
#include "Song.h"

TEST(SongTest, SongGetters)
{
    Song song("Yasuo-P", "lu-lululu-lu-lu", "Electric Angel");
    EXPECT_EQ(song.get_author(), "Yasuo-P");
    EXPECT_EQ(song.get_name(), "Electric Angel");
    EXPECT_EQ(song.get_melody(), "lu-lululu-lu-lu");
}

TEST(ItemTest, ItemGetters)
{
    Item item("Rock guitar");
    EXPECT_EQ(item.get_item_name(), "Rock guitar");
}

TEST(PrimeTest, PrimeAttributes)
{
    Item item_prime("sign 'STOP'");
    Prime prime(Song("Wowaka", "tu-tutu-tuutuu", "Rolling girl"), "Leader", &item_prime);

    EXPECT_EQ(prime.get_role(), "Leader");
    EXPECT_TRUE(prime.general_ability());
    prime.set_role("Commander");
    EXPECT_EQ(prime.get_role(), "Commander");
}

TEST(BumblebeeTest, BumblebeeAttributes)
{
    Item item_bumb("Rock guitar");
    Bumblebee bumblebee(Song("Yasuo-P", "lu-lululu-lu-lu", "Electric Angel"), "Runner", 10, &item_bumb);

    EXPECT_EQ(bumblebee.get_role(), "Runner");
    EXPECT_TRUE(bumblebee.infantry_ability());
    bumblebee.set_role("Scout");
    EXPECT_EQ(bumblebee.get_role(), "Scout");
}

TEST(LiegeMaximoTest, LiegeMaximoAttributes)
{
    Liege_maximo liege_maximo(Song("SeeU", "tu-lulu-pupu-ru", "Jangsanbeom"), 20);

    EXPECT_TRUE(liege_maximo.solo_ability());
    liege_maximo.set_speed(30);
    EXPECT_EQ(liege_maximo.get_speed(), 30);
    liege_maximo.set_status_disguise(true);
    EXPECT_TRUE(liege_maximo.get_status_disguise());
}

TEST(TransformerTest, GreaterOperator)
{
    Item item_prime("sign STOP");
    Item* item_link_prime = &item_prime;
    Item item_bumb("Rock guitar");
    Item* item_link_bumb = &item_bumb;

    Prime prime(Song("Wowaka", "tu-tutu-tuutuu", "Rolling girl"), "Leader", item_link_prime);
    Bumblebee bumblebee(Song("Yasuo-P", "lu-lululu-lu-lu", "Electric Angel"), "Runner", 10, item_link_bumb);

    EXPECT_TRUE(bumblebee > prime);
    EXPECT_FALSE(prime > bumblebee);
}

TEST(TransformerTest, LessOperator)
{
    Item item_prime("sign STOP");
    Item* item_link_prime = &item_prime;
    Item item_bumb("Rock guitar");
    Item* item_link_bumb = &item_bumb;

    Prime prime(Song("Wowaka", "tu-tutu-tuutuu", "Rolling girl"), "Leader", item_link_prime);
    Bumblebee bumblebee(Song("Yasuo-P", "lu-lululu-lu-lu", "Electric Angel"), "Runner", 10, item_link_bumb);

    EXPECT_TRUE(prime < bumblebee);
    EXPECT_FALSE(bumblebee < prime);
}

TEST(TransformerTest, EqualOperator)
{
    Item item_prime("sign STOP");
    Item* item_link_prime = &item_prime;
    Prime prime1(Song("Wowaka", "tu-tutu-tuutuu", "Rolling girl"), "Leader", item_link_prime);
    Prime prime2(Song("Wowaka", "tu-tutu-tuutuu", "Rolling girl"), "Leader", item_link_prime);

    EXPECT_TRUE(prime1 == prime2);
    prime2.set_fuel(150);
    EXPECT_FALSE(prime1 == prime2);
}

TEST(TransformerTest, StreamInsertionOperator)
{
    Item item_prime("sign STOP");
    Item* item_link_prime = &item_prime;
    Prime prime(Song("Wowaka", "tu-tutu-tuutuu", "Rolling girl"), "Leader", item_link_prime);

    std::ostringstream output;
    output << prime;

    std::string expected_output = "Transformer: Name: Optimus Prime, Worldview: Good, Song: Rolling girl by Wowaka, Fuel: 200";
    EXPECT_EQ(output.str(), expected_output);
}


void TestTransformerMethods(Transformer* transformer, const std::string& expected_class_name) {
    testing::internal::CaptureStdout();
    transformer->transform();
    transformer->openFire();
    transformer->radio();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find(expected_class_name + " performing transform()"), std::string::npos);
    EXPECT_NE(output.find(expected_class_name + " performing openFire()"), std::string::npos);
    EXPECT_NE(output.find(expected_class_name + " performing radio()"), std::string::npos);
}

TEST(PrimeTest, VirtualMethods)
{
    Prime prime(Song("Wowaka", "tu-tutu-tuutuu", "Rolling girl"), "Leader", nullptr);
    TestTransformerMethods(&prime, "Prime");
}

TEST(BumblebeeTest, VirtualMethods)
{
    Bumblebee bumblebee(Song("Yasuo-P", "lu-lululu-lu-lu", "Electric Angel"), "Runner", 10, nullptr);
    TestTransformerMethods(&bumblebee, "Bumblebee");
}

TEST(LiegeMaximoTest, VirtualMethods)
{
    Liege_maximo liege_maximo(Song("SeeU", "tu-lulu-pupu-ru", "Jangsanbeom"), 20);
    TestTransformerMethods(&liege_maximo, "Liege_maximo");
}

TEST(TransformerTest, BasePointerVirtualMethodCalls)
{
    std::vector<Transformer*> transformers = {
        new Prime(Song("Wowaka", "tu-tutu-tuutuu", "Rolling girl"), "Leader", nullptr),
        new Bumblebee(Song("Yasuo-P", "lu-lululu-lu-lu", "Electric Angel"), "Runner", 10, nullptr),
        new Liege_maximo(Song("SeeU", "tu-lulu-pupu-ru", "Jangsanbeom"), 20)
    };

    std::vector<std::string> class_names = { "Prime", "Bumblebee", "Liege_maximo" };

    for (size_t i = 0; i < transformers.size(); ++i) {
        TestTransformerMethods(transformers[i], class_names[i]);
        delete transformers[i];
    }
}



int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
