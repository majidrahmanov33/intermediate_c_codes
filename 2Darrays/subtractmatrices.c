C program to subtract two matrices

 
Write a C program to read elements in two matrices and find the difference of two matrices. Program to subtract two matrices in C. Logic to subtract two matrices in C programming.

Example

Input

Input elements in 3x3 matrix1:
1 2 3
4 5 6
7 8 9

Input elements in 3x3 matrix2:
9 8 7
6 5 4
3 2 1
Output

Difference of both matrices =
-8 -6 -4
-2  0  2
4  6  8

Required knowledge
Basic C programming, For loop, Array

Matrix Subtraction
Elements of two matrices can only be subtracted if and only if both matrices are of same size. Matrix subtraction is done element wise (entry wise) i.e. Difference of two matrices A and B of size mXn is defined by
A - B = Aij - Bij (Where 1 ≤ i ≤ m and 1 ≤ j ≤ n)

Matrix subtraction

Read more - Program to add two matrices

Program to subtract two matrices
/**
 * C program to find difference of two matrices of size 3x3
 */

#include <stdio.h>

#define SIZE 3 // Size of the matrix

int main()
{
    int A[SIZE][SIZE];  // Matrix 1
    int B[SIZE][SIZE];  // Matrix 2
    int C[SIZE][SIZE];  // Resultant matrix

    int row, col;

    /* Input elements in first matrix */
    printf("Enter elements in matrix A of size 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Input elements in second matrix */
    printf("\nEnter elements in matrix B of size 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

    /*
     * Subtract both matrices and store the result in matrix C
     */
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            /* Cij = Aij - Bij */
            C[row][col] = A[row][col] - B[row][col];
        }
    }

    /* Print difference of both matrices A and B */
    printf("\nDifference of two matrices A-B = \n");
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

Difference of both matrices A-B =
-8 -6 -4
-2  0  2
4  6  8
Happy coding 😉
