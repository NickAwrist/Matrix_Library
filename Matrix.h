#ifndef MATRIXLIB_MATRIX_H
#define MATRIXLIB_MATRIX_H

#include <cstdlib>
#include <iostream>

class Matrix {
    public:
        static int** matrix;
        int m, n;
        Matrix(int m, int n){
            this->m = m;
            this->n = n;

            matrix = init(m, n);

        }

        ~Matrix(){
            deleteMatrix();
        }

        void printMatrix() const{
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++) {
                    std::cout << matrix[i][j] << " ";
                }
                std::cout << "\n";
            }
        }

    private:

        static int** init(int rows, int cols){
            int** ret = static_cast<int **>(calloc(rows, sizeof(int*)));

            for(int i=0; i<rows; i++){
                ret[i] = static_cast<int *>(calloc(cols, sizeof(int)));
            }

            return ret;
        }

        void deleteMatrix(){
            for(int i=0; i<m; i++){
                free(matrix[i]);
            }
            free(matrix);
        }



};


#endif //MATRIXLIB_MATRIX_H
