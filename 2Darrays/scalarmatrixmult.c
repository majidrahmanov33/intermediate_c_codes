C program to perform Scalar matrix multiplication

 
Write a C program to read elements in a matrix and perform scalar multiplication of matrix. C program for scalar multiplication of matrix. How to perform scalar matrix multiplication in C programming. Logic to perform scalar matrix multiplication in C program.

Example

Input

Input elements of matrix A:
1 2 3
4 5 6
7 8 9
Input multiplier: 2
Output

2  4  6
8 10 12
14 16 18
Required knowledge
Basic C programming, For loop, Array

Scalar multiplication of matrix
Scalar multiplication of matrix is the simplest and easiest way to multiply matrix. Scalar multiplication of matrix is defined by -
(cA)ij = c . Aij (Where 1 ≤ i ≤ m and 1 ≤ j ≤ n)

Scalar multiplication of matrix

Read more - Program to multiply two matrices

Program to perform scalar matrix multiplication

 
/**
 * C program to perform scalar matrix multiplication
 */
 
#include <stdio.h>

#define SIZE 3 // Maximum size of the array

int main()
{
    int A[SIZE][SIZE]; 
    int num, row, col;

    /* Input elements in matrix from user */
    printf("Enter elements in matrix of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Input multiplier from user */
    printf("Enter any number to multiply with matrix A: ");
    scanf("%d", &num);

    /* Perform scalar multiplication of matrix */
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            /* (cAij) = c . Aij */
            A[row][col] = num * A[row][col];
        }
    }

    /* Print result of scalar multiplication of matrix */
    printf("\nResultant matrix c.A = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }

    return 0;
}
Output
Enter elements in matrix of size 3x3:
1 2 3
4 5 6
7 8 9
Enter any number to multiply with matrix A: 2

Resultant matrix c.A =
2  4  6
8 10 12
14 16 18
Happy coding 😉


