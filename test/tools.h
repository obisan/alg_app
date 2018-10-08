//
// Created by Aleksandr Dubinets on 08.10.2018.
//

#ifndef ALG_APP_TOOLS_H
#define ALG_APP_TOOLS_H

#include <gtest/gtest.h>

template<typename T>
::testing::AssertionResult ArraysMatch(const T expected,
                                       const T actual,
                                       size_t size){
    for (size_t i(0); i < size; ++i){
        if (expected[i] != actual[i]){
            return ::testing::AssertionFailure() << "array[" << i
                                                 << "] (" << actual[i] << ") != expected[" << i
                                                 << "] (" << expected[i] << ")";
        }
    }

    return ::testing::AssertionSuccess();
}

#endif //ALG_APP_TOOLS_H
