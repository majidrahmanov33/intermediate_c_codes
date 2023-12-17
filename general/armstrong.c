Armstrong number C program: C programming code to check whether a number is an Armstrong number or not. An Armstrong number is a number which is equal to the sum of digits raise to the power total number of digits in the number. Some Armstrong numbers are: 0, 1, 2, 3, 153, 370, 407, 1634, 8208, etc. Read more about Armstrong numbers. We will consider base ten numbers in our program. The algorithm to do this is: First we calculate the number of digits in our program and then compute the sum of individual digits raise to the power number of digits. If this sum equals the input number, then the number is an Armstrong number otherwise not.

Examples:
7 = 7^1
371 = 3^3 + 7^3 + 1^3 (27 + 343 +1)
8208 = 8^4 + 2^4 +0^4 + 8^4 (4096 + 16 + 0 + 4096).
1741725 = 1^7 + 7^7 + 4^7 + 1^7 + 7^7 + 2^7 +5^7 (1 + 823543 + 16384 + 1 + 823543 +128 + 78125)

C programming code
#include <stdio.h>
 
int power(int, int);
 
int main()
{
   int n, sum = 0, temp, remainder, digits = 0;
 
   printf("Input an integer\n");
   scanf("%d", &n);
 
   temp = n;
   // Count number of digits
   while (temp != 0) {
      digits++;
      temp = temp/10;
   }
 
   temp = n;
 
   while (temp != 0) {
      remainder = temp%10;
      sum = sum + power(remainder, digits);
      temp = temp/10;
   }
 
   if (n == sum)
      printf("%d is an Armstrong number.\n", n);
   else
      printf("%d isn't an Armstrong number.\n", n);
 
   return 0;
}
 
int power(int n, int r) {
   int c, p = 1;
 
   for (c = 1; c <= r; c++) 
      p = p*n;
 
   return p;   
}
Download Check Armstrong number program.

Output of program:
Check Armstrong number C program output

C program to check Armstrong number using function
We will use long long data type in our program so that we can check numbers up to 2^64-1.

#include <stdio.h>
 
int check_armstrong(long long);
long long power(int, int);
 
int main () {
   long long n;
 
   printf("Input a number\n");
   scanf("%lld", &n);
 
   if (check_armstrong(n) == 1)
      printf("%lld is an armstrong number.\n", n); 
   else
      printf("%lld isn't an armstrong number.\n", n);   
 
   return 0;
}
 
int check_armstrong(long long n) {
   long long sum = 0, temp;
   int remainder, digits = 0;
 
   temp = n;
 
   while (temp != 0) {
      digits++;
      temp = temp/10;
   }
 
   temp = n;
 
   while (temp != 0) {
      remainder = temp%10;
      sum = sum + power(remainder, digits);
      temp = temp/10;
   }
 
   if (n == sum)
      return 1;
   else
      return 0;
}
 
long long power(int n, int r) {
   int c;
   long long p = 1;
 
   for (c = 1; c <= r; c++) 
      p = p*n;
 
   return p;   
}
An output of the program:

Input a number
35641594208964132
35641594208964132 is an Armstrong number.
