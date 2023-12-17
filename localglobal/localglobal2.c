1. EXAMPLE PROGRAM FOR LOCAL VARIABLE IN C:
The scope of local variables will be within the function only.
These variables are declared within the function and can’t be accessed outside the function.
In the below example, m and n variables are having scope within the main function only. These are not visible to test function.
Like wise, a and b variables are having scope within the test function only. These are not visible to main function.
C

#include<stdio.h>
void test();

int main()
{
   int m = 22, n = 44;
        // m, n are local variables of main function
        /*m and n variables are having scope
        within this main function only.
        These are not visible to test funtion.*/
        /* If you try to access a and b in this function,
        you will get 'a' undeclared and 'b' undeclared error */
   printf("\nvalues : m = %d and n = %d", m, n);
   test();
}

void test()
{
   int a = 50, b = 80;
        // a, b are local variables of test function
        /*a and b variables are having scope
        within this test function only.
        These are not visible to main function.*/
        /* If you try to access m and n in this function,
        you will get 'm' undeclared and 'n' undeclared
        error */
   printf("\nvalues : a = %d and b = %d", a, b);
}
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
#include<stdio.h>
void test();
 
int main()
{
   int m = 22, n = 44;
        // m, n are local variables of main function
        /*m and n variables are having scope
        within this main function only.
        These are not visible to test funtion.*/
        /* If you try to access a and b in this function,
        you will get 'a' undeclared and 'b' undeclared error */
   printf("\nvalues : m = %d and n = %d", m, n);
   test();
}
 
void test()
{
   int a = 50, b = 80;
        // a, b are local variables of test function
        /*a and b variables are having scope
        within this test function only.
        These are not visible to main function.*/
        /* If you try to access m and n in this function,
        you will get 'm' undeclared and 'n' undeclared
        error */
   printf("\nvalues : a = %d and b = %d", a, b);
}
Output:

values : m = 22 and n = 44
values : a = 50 and b = 80
2. EXAMPLE PROGRAM FOR GLOBAL VARIABLE IN C:
The scope of global variables will be throughout the program. These variables can be accessed from anywhere in the program.
This variable is defined outside the main function. So that, this variable is visible to main function and all other sub functions.
C

#include<stdio.h>
void test();int m = 22, n = 44;
int a = 50, b = 80;

int main()
{
   printf("All variables are accessed from main function");
   printf("\nvalues: m=%d:n=%d:a=%d:b=%d", m,n,a,b);
   test();
}

void test()
{
   printf("\n\nAll variables are accessed from" \
   " test function");
   printf("\nvalues: m=%d:n=%d:a=%d:b=%d", m,n,a,b);
}
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
#include<stdio.h>
void test();int m = 22, n = 44;
int a = 50, b = 80;
 
int main()
{
   printf("All variables are accessed from main function");
   printf("\nvalues: m=%d:n=%d:a=%d:b=%d", m,n,a,b);
   test();
}
 
void test()
{
   printf("\n\nAll variables are accessed from" \
   " test function");
   printf("\nvalues: m=%d:n=%d:a=%d:b=%d", m,n,a,b);
}

 

OUTPUT:
All variables are accessed from main function
values : m = 22 : n = 44 : a = 50 : b = 80
All variables are accessed from test function
values : m = 22 : n = 44 : a = 50 : b = 80
