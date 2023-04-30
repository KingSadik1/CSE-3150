#include <iostream>
#include "lab9.h"
using namespace std;

vector<vector<int>> matrix_multiply(vector<vector<int>> matrix1, vector<vector<int>> matrix2) {
    int size = matrix1.size();
    vector<vector<int>> final_matrix(size, vector<int>(size, 0));
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                final_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return final_matrix;
}

vector<vector<int>> create_matrix(int rows, int cols) {
    vector<vector<int>> matrix1(rows, vector<int>(cols));
    int counter = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix1[i][j] = counter;
            counter++;
        }
    }
    return matrix1;
}

void print_matrix(vector<vector<int>> matrix1) {
    for (int i = 0; i < matrix1.size(); i++) {
        for (int j = 0; j < matrix1.size(); j++) {
            cout << " " << matrix1[i][j] << " ";
        }
        cout << endl;
    }
}