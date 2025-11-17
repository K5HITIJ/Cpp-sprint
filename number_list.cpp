#include "number_list.h"
#include<iostream>

void NumberList::add(){
    int value;
    std::cout << "Hello Enter the integers to be summed";
    while (std::cin >> value) {
        NumberList::numbers_.push_back(value);
    }
}

int NumberList::sum() const {
    int sum=0;
    for (int x : NumberList::numbers_){
        sum = sum + x;
    }
    return sum;
}