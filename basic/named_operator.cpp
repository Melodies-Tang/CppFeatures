#include <iso646.h>
#include <iostream>

int main() {
    std::cout << (true and false) << std::endl;
    std::cout << (true or false) << std::endl;
    std::cout << (true xor false) << std::endl;
    std::cout << (true bitand false) << std::endl;
}