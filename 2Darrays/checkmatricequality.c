C program to check whether two matrices are equal or not

 
Write a C program to enter elements in two matrices and check whether both matrices are equal or not. C program to check whether elements of two matrices are equal or not. Logic to check if two matrices are equal or not in C programming.

Example

Input

Input elements of matrix1:
1 2 3
4 5 6
7 8 9

Input elements of matrix2:
1 2 3
4 5 6
7 8 9
Output

Both matrices are equal

Required knowledge
Basic C programming, For loop, Array

Equality of matrix
Two matrices are said to be equal if and only if they are of same size and they have equal corresponding entries. Equality of two matrices A and B can be defined as -

Aij = Bij (Where 1 ≤ i ≤ m and 1 ≤ j ≤ n).

Equal matrices

Both the matrices are of same dimension and also their corresponding elements are equal. Hence both Matrix A and Matrix B are equal.

Program to check matrix equality

 
/**
 * C program to check whether two matrices are equal or not
 */

#include <stdio.h>

#define SIZE 3 // Matrix size

int main()
{
    int A[SIZE][SIZE]; 
    int B[SIZE][SIZE];

    int row, col, isEqual;

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
    printf("\nEnter elements in matrix B of size %dx%d: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

    /* Assumes that the matrices are equal */
    isEqual = 1;

    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            /*
             * If the corresponding entries of matrices are not equal
             */
            if(A[row][col] != B[row][col])
            {
                isEqual = 0;
                break;
            }
        }
    }

    /*
     * Checks the value of isEqual
     * As per our assumption if isEqual contains 1 means both are equal
     * If it contains 0 means both are not equal
     */
    if(isEqual == 1)
    {
        printf("\nMatrix A is equal to Matrix B");
    }
    else
    {
        printf("\nMatrix A is not equal to Matrix B");
    }

    return 0;
}
Output
Enter elements in matrix A of size 3x3:
1 2 3
4 5 6
7 8 9

Enter elements in matrix B of size 3x3:
1 2 3
4 -5 6
7 8 9

Matrix A is not equal to Matrix B
Happy coding 😉
