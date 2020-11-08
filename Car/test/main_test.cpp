//
// Created by gamesoze on 08.11.2020.
//

#include "gtest/gtest.h"
#include "Mersedes.h"

TEST(BasicTest, UsageTest) {
    Mersedes car1("123");

    ASSERT_STREQ(car1.getStringStream().str().c_str(),
                 "Brand: Mersedes\tmodel: 123");
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}