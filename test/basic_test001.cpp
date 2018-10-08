//
// Created by Aleksandr Dubinets on 07.10.2018.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <memory>
#include "../src/algoritms.h"
#include "testFicture.h"
#include "tools.h"

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
    std::unique_ptr<testFicture> p(new testFicture());
    bubble_sort(p.get()->getV());

    EXPECT_TRUE(ArraysMatch<std::vector<int>>(
            p.get()->getV(), p.get()->getR(), p.get()->size()));
}

TEST(Basic_tests, TestSelection_sort) {
    std::unique_ptr<testFicture> p(new testFicture());
    selection_sort(p.get()->getV());

    EXPECT_TRUE(ArraysMatch<std::vector<int>>(
            p.get()->getV(), p.get()->getR(), p.get()->size()));
}

TEST(Basic_tests, TestInsertion_sort) {
    std::unique_ptr<testFicture> p(new testFicture());
    insertion_sort(p.get()->getV());

    EXPECT_TRUE(ArraysMatch<std::vector<int>>(
            p.get()->getV(), p.get()->getR(), p.get()->size()));
}

TEST(Basic_tests, TestMerge_sort) {
    std::unique_ptr<testFicture> p(new testFicture());
    merge_sort(p.get()->getV());
    
    EXPECT_TRUE(ArraysMatch<std::vector<int>>(
            p.get()->getV(), p.get()->getR(), p.get()->size()));
}