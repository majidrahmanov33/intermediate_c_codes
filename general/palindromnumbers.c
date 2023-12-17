Check palindrome number algorithm
To test if a number is palindrome or not, do the following steps:
1. Get the number from a user.
2. Reverse it.
3. Compare it with the number entered by the user.
4. If both are the same then print palindrome number else print not a palindrome number.

C program for palindrome number
#include <stdio.h>
 
int main()
{
   int n, reverse = 0, t;
 
   printf("Enter a number to check if it is a palindrome or not\n");
   scanf("%d", &n);
 
   t = n;
 
   while (t != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + t%10;
      t = t/10;
   }
 
   if (n == reverse)
      printf("%d is a palindrome number.\n", n);
   else
      printf("%d isn't a palindrome number.\n", n);
 
   return 0;
}
Download Palindrome number program.

Output of the program:
Palindrome number C program output

Function to check palindrome number
int check_palindrome(int n) {
  int t, reverse = 0;
 
  t = n;
 
  while (t != 0) {
    reverse = reverse * 10;
    reverse = reverse + t%10;
    t = t/10;
  }
 
  if (n == reverse)
    return 1;
  else
    return 0;
}
