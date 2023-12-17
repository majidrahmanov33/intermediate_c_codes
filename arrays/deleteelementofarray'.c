Remove element from array C program
#include <stdio.h>
 
int main()
{
   int array[100], position, c, n;
 
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for ( c = 0 ; c < n ; c++ )
      scanf("%d", &array[c]);
 
   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);
 
   if ( position >= n+1 )
      printf("Deletion not possible.\n");
   else
   {
      for ( c = position - 1 ; c < n - 1 ; c++ )
         array[c] = array[c+1];
 
      printf("Resultant array is\n");
 
      for( c = 0 ; c < n - 1 ; c++ )
         printf("%d\n", array[c]);
   }
 
   return 0;
}
Download Delete element from array program.

C program to delete element from array output:
Delete element from array C program output

You may have observed that we need to shift array elements which are after the element to be deleted, it is very inefficient if the size of the array is large or we need to remove elements from an array repeatedly. In linked list data structure shifting isn't required only pointers are adjusted. If frequent deletion is required and the number of elements is large, it is recommended to use a linked list.
