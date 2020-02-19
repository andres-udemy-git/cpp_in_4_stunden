#include <iostream>

using namespace std;

int main() {
    int a = 3;
    int b = 10;

    bool meineBedingung = a < b;
    cout << " <: " << meineBedingung << endl;

    meineBedingung = a > b;
    cout << " >: " << meineBedingung << endl;

    meineBedingung = a == b;
    cout << "==: " << meineBedingung << endl;

    meineBedingung = a != b;
    cout << "!=: " << meineBedingung << endl;
}