//
// Created by Aleksandr Dubinets on 07.10.2018.
//

#include <gtest/gtest.h>

TEST(Basic_tests, TestEq_1_1) {
    EXPECT_EQ(1, 1);
}

TEST(Basic_tests, TestEq_2_2) {
    EXPECT_EQ(1, 1);
}

TEST(Basic_tests, TestNe_2_1) {
    EXPECT_NE(2, 1);
}

TEST(Basic_tests, TestNe_1_2) {
    EXPECT_NE(1, 2);
}