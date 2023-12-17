Global and local variables
A local variable is a variable that is declared inside a function. A global variable is a variable that is declared outside all functions. A local variable can only be used in the function where it is declared. A global variable can be used in all functions.

See the following example:


	#include<stdio.h>

	// Global variables
	int A;
	int B;

	int Add()
	{
		return A + B;
	}

	int main()
	{
		int answer; // Local variable
		A = 5;
		B = 7;
		answer = Add();
		printf("%d\n",answer);
		return 0;
	}

As you can see two global variables are declared, A and B. These variables can be used in main() and Add().
The local variable answer can only be used in main().

That’s all for this tutorial.
