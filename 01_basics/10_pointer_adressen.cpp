#include <iostream> 

int main() {
    int a = 3;
    int b = 5;

    std::cout << "Wert a: " << a << std::endl;
    std::cout << "Adresse a: " << &a << std::endl;

    std::cout << "Wert b: " << b << std::endl;
    std::cout << "Adresse b: " << &b << std::endl;

    int* ptrA = &a;
    int* ptrB = &b;

    std::cout << "Wert a: " << *ptrA << std::endl;
    std::cout << "Adresse a: " << ptrA << std::endl;
    std::cout << "Pointer a: " << &ptrA << std::endl;

    std::cout << "Wert b: " << *ptrB << std::endl;
    std::cout << "Adresse b: " << ptrB << std::endl;
    std::cout << "Pointer a: " << &ptrB << std::endl;

    *ptrA = 10;
    std::cout << "Wert a: " << *ptrA << std::endl;
}