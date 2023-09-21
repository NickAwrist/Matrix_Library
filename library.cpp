#include "library.h"

#include <iostream>

Matrix* addMatrices(const Matrix& a, const Matrix& b){
    if(a.m != b.m || a.n != b.n){
        std::cout << "Unable to add matrices, must have same number of rows and columns";
        return nullptr;
    }

    auto *result = new Matrix(a.m, a.n);
    for(int i=0; i<a.m; i++){
        for(int j=0; j<a.n; i++){
            result->matrix[i][j] = a.matrix[i][j] + b.matrix[i][j];
        }
    }

    return result;
}