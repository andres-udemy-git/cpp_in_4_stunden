#include <iostream>
#include <cstring>

struct tier {
    char art[30];
    char farbe[10];
    int alter;
    int gewicht;
};

int main() {
     tier bello = {"Hund", "braun", 1, 9};

    std::cout 
        << "Bello ist ein " 
        << bello.art 
        << ". Sein Fell ist " 
        << bello.farbe 
        << ". Er ist " 
        << bello.alter 
        << " Jahre alt und er wiegt " 
        << bello.gewicht 
        << " Kilo." 
        << std::endl;

        bello.gewicht = 20;
        std::cout << bello.gewicht << std::endl;

        strcpy(bello.farbe, "grau");
        std::cout << bello.farbe << std::endl;
}