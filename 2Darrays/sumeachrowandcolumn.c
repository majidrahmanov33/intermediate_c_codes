C program to find sum of each row and columns of a matrix

 
Write a C program to read elements in a matrix and find the sum of elements of each row and columns of matrix. C program to calculate sum of rows and columns of matrix. Logic to find sum of each row and columns of a matrix in C programming.

Example

Input

Input elements in array: 
1 2 3
4 5 6
7 8 9
Output

Sum of row 1 = 6
Sum of row 2 = 15
...
...
Sum of column 3 = 18

Required knowledge
Basic C programming, For loop, Array

Must know -

Program to find sum of main diagonal elements.
Program to find sum of opposite diagonal elements.
Sum of rows and columns of a matrix is defined as -
Sum of row and column elements of a matrix

Program to find sum of rows and columns of matrix

 
/**
 * C program to find sum of elements of rows and columns of matrix
 */

#include <stdio.h>

#define SIZE 3 // Matrix size

int main()
{
    int A[SIZE][SIZE];
    int row, col, sum = 0;

    /* Input elements in matrix from user */
    printf("Enter elements in matrix of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Calculate sum of elements of each row of matrix */
    for(row=0; row<SIZE; row++)
    {
        sum = 0;
        for(col=0; col<SIZE; col++)
        {
            sum += A[row][col];
        }

        printf("Sum of elements of Row %d = %d\n", row+1, sum);
    }
    
    /* Find sum of elements of each columns of matrix */ 
    for(row=0; row<SIZE; row++)
    {
        sum = 0;
        for(col=0; col<SIZE; col++)
        {
            sum += A[col][row];
        }

        printf("Sum of elements of Column %d = %d\n", row+1, sum);
    }

    return 0;
}
Output
Enter elements in matrix of size 3x3:
 1 2 3
 4 5 6
 7 8 9
 Sum of elements of Row 1 = 6
 Sum of elements of Row 2 = 15
 Sum of elements of Row 3 = 24
 Sum of elements of Column 1 = 12
 Sum of elements of Column 2 = 15
 Sum of elements of Column 3 = 18
Happy coding ;)


