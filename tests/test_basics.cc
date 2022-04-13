
#include <gtest/gtest.h>
#include <HTMLParser/HTMLParser.h>

class BasicsTest : public ::testing::Test {
};

TEST_F(BasicsTest, TestBackwardsCompat) {
    EXPECT_TRUE(true);
}

