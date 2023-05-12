#include "gtest/gtest.h"
#include "src/math.h"

TEST(AddTest, HandlePositiveInput) {
    EXPECT_EQ(2, add(1, 1));
}

TEST(AddTest, HandleNegativeInput) {
    EXPECT_EQ(2, add(1, 1));
}

TEST(AddTest, HandleZeroInput) {
    EXPECT_EQ(0, add(0, 0));
}