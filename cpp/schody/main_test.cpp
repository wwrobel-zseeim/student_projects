#include <iostream>
#include "gtest/gtest.h"
#include "stair_function.cpp"

TEST(StairTest, StairTest1) {
	StairResults* result = getStairResults(550, 360);
	ASSERT_EQ(result -> hasError(), false);
	EXPECT_EQ(result -> getLevels(), 2);
	EXPECT_EQ(result -> getStairHeight(), 180);
	EXPECT_EQ(result -> getStairLength(), 275);
	EXPECT_EQ(result -> getTotalStairsLength(), 550);
}

TEST(StairTest, StairTest2) {
	StairResults* result = getStairResults(2513, 1600);
	ASSERT_EQ(result -> hasError(), false);
	EXPECT_EQ(result -> getLevels(), 10);
	EXPECT_EQ(result -> getStairHeight(), 160);
	EXPECT_EQ(result -> getStairLength(), 251);
	EXPECT_EQ(result -> getTotalStairsLength(), 2510);
}

TEST(StairTest, StairTest3) {
	StairResults* result = getStairResults(27000, 18180);
	ASSERT_EQ(result -> hasError(), false);
	EXPECT_EQ(result -> getLevels(), 101);
	EXPECT_EQ(result -> getStairHeight(), 180);
	EXPECT_EQ(result -> getStairLength(), 267);
	EXPECT_EQ(result -> getTotalStairsLength(), 26967);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

