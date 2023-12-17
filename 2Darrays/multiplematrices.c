C program to multiply two matrices

 
Write a C program to read elements in two matrices and multiply them. Matrix multiplication program in C. How to multiply matrices in C. Logic to multiply two matrices in C programming.

Example

Input

Input elements of matrix1:
1 2 3
4 5 6
7 8 9
Input elements of matrix2:
9 8 7
6 5 4
3 2 1
Output

Product of matrices =
30 24 18
84 69 54
138 114 90

Required knowledge
Basic C programming, For loop, Array

Must know - Program to perform scalar matrix multiplication

Matrix Multiplication
Two matrices can be multiplied only and only if number of columns in the first matrix is same as number of rows in second matrix. Multiplication of two matrices is defined as -

Matrix multiplication

Program to multiply two matrices

 
/**
 * C program to multiply two matrices
 */

#include <stdio.h>

#define SIZE 3 // Size of the matrix

int main()
{
    int A[SIZE][SIZE]; // Matrix 1 
    int B[SIZE][SIZE]; // Matrix 2
    int C[SIZE][SIZE]; // Resultant matrix
    
    int row, col, i, sum;


    /* Input elements in first matrix from user */
    printf("Enter elements in matrix A of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Input elements in second matrix from user */
    printf("\nEnter elements in matrix B of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

    /*
     * Multiply both matrices A*B
     */
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            sum = 0;
            /*
             * Multiply row of first matrix to column of second matrix
             * and store sum of product of elements in sum.
             */
            for(i=0; i<SIZE; i++)
            {
                sum += A[row][i] * B[i][col];
            }

            C[row][col] = sum;
        }
    }

    /* Print product of the matrices */
    printf("\nProduct of matrix A * B = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }

    return 0;
}
Output
Enter elements in matrix A of size 3x3:
1 2 3
4 5 6
7 8 9

Enter elements in matrix B of size 3x3:
9 8 7
6 5 4
3 2 1

Product of matrix A * B =
30 24 18
84 69 54
138 114 90
Happy coding 😉


