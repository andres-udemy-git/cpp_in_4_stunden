#include <iostream>

int main() {
    bool cond1 = true;
    bool cond2 = false;
    bool cond3 = true;

    std::cout << (cond1 && cond2) << std::endl;
    std::cout << (cond1 && cond3) << std::endl;
    std::cout << (cond1 || cond2) << std::endl;
    std::cout << (cond1 ^ cond2) << std::endl;
    std::cout << (cond1 ^ cond3) << std::endl;
}