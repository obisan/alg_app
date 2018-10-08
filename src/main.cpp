#include <iostream>
#include "algoritms.h"

int main() {

    std::vector<int> v = { 2, -11, -6, 5, 6, 7, 1, -2, 3, 4};

    for(int i : v) std::cout << i << " ";
    std::cout << std::endl;

    bubble_sort(v);
    //merge_sort(v);

    for(int i : v) std::cout << i << " ";
    std::cout << std::endl;

    std::cout << binary_search(v, 5) << std::endl;

    List<int> *list = new List<int>();
    list->vec2list(v);
    list->print_next();

    std::cout << std::endl;

    list->print_prev();

    return 0;
}