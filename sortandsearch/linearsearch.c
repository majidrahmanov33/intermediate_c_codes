Linear search C program
#include <stdio.h>
 
int main()
{
  int array[100], search, c, n;
 
  printf("Enter the number of elements in array\n");
  scanf("%d", &n);
 
  printf("Enter %d integer(s)\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  printf("Enter a number to search\n");
  scanf("%d", &search);
 
  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", search);
 
  return 0;
}
Download Linear search program.

Output of program:
Linear search C program
C program for binary search








Linear search for multiple occurrences
In the code below we will print all the locations at which required element is found and also the number of times it occur in the list.

#include <stdio.h>
 
int main()
{
   int array[100], search, c, n, count = 0;
 
   printf("Enter the number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d numbers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
 
   printf("Enter the number to search\n");
   scanf("%d", &search);
 
   for (c = 0; c < n; c++) {
      if (array[c] == search) {
         printf("%d is present at location %d.\n", search, c+1);
         count++;
      }
   }
   if (count == 0)
      printf("%d isn't present in the array.\n", search);
   else
      printf("%d is present %d times in the array.\n", search, count);
 
   return 0;
}
Download Linear search multiple occurrence program.

Output of code:
Linear Search program output for multiple occurrence









C program for linear search using function
#include <stdio.h>
 
long linear_search(long [], long, long);
 
int main()
{
   long array[100], search, c, n, position;
 
   printf("Input number of elements in array\n");
   scanf("%ld", &n);
 
   printf("Input %d numbers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%ld", &array[c]);
 
   printf("Input number to search\n");
   scanf("%ld", &search);
 
   position = linear_search(array, n, search);
 
   if (position == -1)
      printf("%d isn't present in the array.\n", search);
   else
      printf("%d is present at location %d.\n", search, position+1);
 
   return 0;
} 
 
long linear_search(long a[], long n, long find) {
   long c;
 
   for (c = 0 ;c < n ; c++ ) {
      if (a[c] == find)
         return c;
   }
 
   return -1;
}





Linear search function using pointers
long linear_search(long *pointer, long n, long find)
{
   long c;
 
   for (c = 0; c < n; c++) {
      if (*(pointer+c) == find)
         return c;
   }
 
   return -1;
}
The time required to search an element using linear search algorithm depends on the size of the list. In the best case it is present at beginning of the list and in the worst case element is present at the end. The time complexity of linear search is O(n).
