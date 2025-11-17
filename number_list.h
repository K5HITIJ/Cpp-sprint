#pragma once
#include <vector>
class NumberList {
    public:

    void add(); 
    int sum() const;

    private: 

    std::vector<int> numbers_;
};