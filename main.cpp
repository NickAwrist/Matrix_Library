#include <iostream>
#include "library.h"

int main(){

    auto a = new Matrix(2,2);
    auto b = new Matrix(2,2);

    a->matrix[0][0] = 1;
    a->matrix[0][1] = 2;
    a->matrix[1][0] = 3;
    a->matrix[1][2] = 4;

    b->matrix[0][0] = 1;
    b->matrix[0][1] = 2;
    b->matrix[1][0] = 3;
    b->matrix[1][2] = 4;

    a->printMatrix();
    std::cout << "\n";
    b->printMatrix();
    std::cout << "\n";

    auto c = addMatrices(&a,&b);

    c->printMatrix();

    return 0;
}