// EECS 348 Lab 05 - Matrix Manipulation
// Name: Jerry Merveille
// KUID: 3203634
// LAB session: Thursday 9 AM - 10:50 AM
// LAB Assignment: 02
// Description: This program reads input for two matrices and develop functions 
// for the following matrix manipulations: Addition, Multiplication, Transpose, and Printing. 
// The program displays the results of each manipulation.

#include <stdio.h>
#define SIZE 5

void printMatrix(int matrix[SIZE][SIZE]);
void addMatrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE], int result[SIZE][SIZE]);
void multiplyMatrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE], int result[SIZE][SIZE]);
void transposeMatrix(int matrix[SIZE][SIZE], int result[SIZE][SIZE]);

int main() {

    int m1[SIZE][SIZE] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
        };

    int m2[SIZE][SIZE] = {
        {25, 24, 23, 22, 21},
        {20, 19, 18, 17, 16},
        {15, 14, 13, 12, 11},
        {10, 9, 8, 7, 6},
        {5, 4, 3, 2, 1}
        };


    int result[SIZE][SIZE];

    printf("Matrix 1:\n");
    printMatrix(m1);

    printf("\nMatrix 2:\n");
    printMatrix(m2);

    printf("\nResulting Matrix after Addition:\n");
    addMatrices(m1, m2, result);
    printMatrix(result);

    printf("\nResulting Matrix after Multiplication:\n");
    multiplyMatrices(m1, m2, result);
    printMatrix(result);

    printf("\nTranspose of Matrix 1:\n");
    transposeMatrix(m1, result);
    printMatrix(result);

    printf("\nTranspose of Matrix 2:\n");
    transposeMatrix(m2, result);
    printMatrix(result);

    return 0;
}

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
}