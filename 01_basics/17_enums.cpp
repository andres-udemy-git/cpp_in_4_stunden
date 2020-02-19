#include <iostream>

enum Wochentag {Montag, Dienstag, Mittwoch, Donnerstag, Freitag, Samstag, Sonntag};

int main() {
    Wochentag tag = Montag;

    std::cout << tag << std::endl;
}