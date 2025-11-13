#include <iostream>
#include "addition.h"

int main(){
    int a, b;
    std::cout << "Enter two numbers to add: ";
    std::cin >> a >> b;
    std::cout << "Result: " << add(a, b) << '\n';
    return 0;
}