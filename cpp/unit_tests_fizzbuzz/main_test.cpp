// main_test.cpp
#include <gtest/gtest.h>
#include "functions.cpp"


TEST(FizzBuzzTest, ExpectFizz) {
	EXPECT_EQ(fizzbuzz(9), "Fizz");
}

TEST(FizzBuzzTest, ExpectBuzz) {
	EXPECT_EQ(fizzbuzz(10), "Buzz");
}

TEST(FizzBuzzTest, ExpectFizzBuzz) {
	EXPECT_EQ(fizzbuzz(15), "FizzBuzz");
}


// ... inne testy ...

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

