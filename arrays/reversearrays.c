C program to reverse an array: This program reverses the array elements. For example, if 'A' is an array of integers with three elements such that
A[0] = 1, A[1] = 2, A[2] = 3
Then after reversing, the array will be
A[0] = 3, A[1] = 2, A[0] = 1

Given below is the C code to reverse an array.

Reverse array C program
#include <stdio.h>
 
int main()
{
   int n, c, d, a[100], b[100];
 
   printf("Enter the number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter the array elements\n");
 
   for (c = 0; c < n ; c++)
      scanf("%d", &a[c]);
 
   /*
    * Copying elements into array b starting from end of array a
    */
 
   for (c = n - 1, d = 0; c >= 0; c--, d++)
      b[d] = a[c];
 
   /*
    * Copying reversed array into the original.
    * Here we are modifying original array, this is optional.
    */
 
   for (c = 0; c < n; c++)
      a[c] = b[c];
 
   printf("Reverse array is\n");
 
   for (c = 0; c < n; c++)
      printf("%d\n", a[c]);
 
   return 0;
}
Download Reverse array program.

Reverse array C program output:
Reverse array C program output

Reverse array by swapping (without using additional memory)
#include <stdio.h>
 
int main() {
  int array[100], n, c, t, end;
 
  scanf("%d", &n);
  end = n - 1;
 
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }
 
  for (c = 0; c < n/2; c++) {
    t          = array[c];
    array[c]   = array[end];
    array[end] = t;
 
    end--;
  }
 
  printf("Reversed array elements are:\n");
 
  for (c = 0; c < n; c++) {
    printf("%d\n", array[c]);
  }
 
  return 0;
}

