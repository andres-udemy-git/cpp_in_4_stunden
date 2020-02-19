#include <iostream>

void printMatrix(char matrix[][3] ) {
    std::cout << " " << matrix[0][0] << " | " << matrix[1][0] << " | " << matrix[2][0] << std::endl;
    std::cout << "---+---+---" << std::endl;
    std::cout << " " << matrix[0][1] << " | " << matrix[1][1] << " | " << matrix[2][1] << std::endl;
    std::cout << "---+---+---" << std::endl;
    std::cout << " " << matrix[0][2] << " | " << matrix[1][2] << " | " << matrix[2][2] << std::endl;
    std::cout << std::endl;
}

int main() {
    char matrix[][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    printMatrix(matrix);

    matrix[2][1] = 'X';

    printMatrix(matrix);

    matrix[1][1] = 'O';

    printMatrix(matrix);
}