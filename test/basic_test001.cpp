//
// Created by Aleksandr Dubinets on 07.10.2018.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../src/algoritms.h"

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

TEST(Basic_tests, TestBubble_sort) {
    std::vector<int> v = { 2, -11, -6, 5, 6, 7, 1, -2, 3, 4};
    bubble_sort(v);
    ASSERT_THAT(v, ::testing::ElementsAre(
            -11, -6, -2, 1, 2, 3, 4, 5, 6, 7
            ));
}
 /*
TEST(Basic_tests, TestSelection_sort) {
    std::vector<int> v = { 2, -11, -6, 5, 6, 7, 1, -2, 3, 4};
    selection_sort(v);

    ASSERT_THAT(v, ::testing::ElementsAre(
            -11, -6, -2, 1, 2, 3, 4, 5, 6, 7
    ));
}

TEST(Basic_tests, TestInsertion_sort) {
    std::vector<int> v = { 2, -11, -6, 5, 6, 7, 1, -2, 3, 4};
    insertion_sort(v);

    ASSERT_THAT(v, ::testing::ElementsAre(
            -11, -6, -2, 1, 2, 3, 4, 5, 6, 7
    ));
}

TEST(Basic_tests, TestMerge_sort) {
    std::vector<int> v = { 2, -11, -6, 5, 6, 7, 1, -2, 3, 4};
    merge_sort(v);

    ASSERT_THAT(v, ::testing::ElementsAre(
            -11, -6, -2, 1, 2, 3, 4, 5, 6, 7
    ));
} */