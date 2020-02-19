#include <iostream>

using namespace std;

int quadriere(int zahl) {
    return zahl * zahl;
}

void countTo(int zahl) {
    for (int i = 0; i <= zahl; i++) {
        cout << i << " ";
    }
    cout << endl << endl;
}

void drawCandy(int x) {
    for (int i = 0; i < x; i++) {
        cout << "|>O<| ";
    }
    cout << endl << endl;
}

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << quadriere(i) << endl;
    }

    countTo(20);
    drawCandy(5);
}