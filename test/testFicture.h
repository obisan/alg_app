//
// Created by Aleksandr Dubinets on 08.10.2018.
//

#ifndef ALG_APP_TESTFITURE_H
#define ALG_APP_TESTFITURE_H

#include <vector>
#include <gtest/gtest.h>

class testFicture {

public:
    std::vector<int> v = { 2, -11, -6, 5, 6, 7, 1, -2, 3, 4};
    std::vector<int> r = {-11, -6, -2, 1, 2, 3, 4, 5, 6, 7 };

    std::vector<int>& getV() {
        return v;
    }

    std::vector<int>& getR() {
        return r;
    }

    int size() {
        return v.size();
    }

    void print() {
        for(int i : v) {
            std::cout << i << " " ;
        }
        std::cout << std::endl;
    }

//    std::cout << binary_search(v, 5) << std::endl;

};


#endif //ALG_APP_TESTFITURE_H
