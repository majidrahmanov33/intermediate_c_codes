/*
Program  - Array Sorting
Author   - Vishal Solanki
Language - C Language
Date     - 03/02/2018 (dd/mm/yyyy)
*/

//IDE used for this code is "Visual Studio 2017"


#include <stdio.h>              //including stdio.h for printf and other functions
#include <conio.h>              //including conio.h for _getch() and other functions

int main()                        //default function for call
{
	int a[10] = { 3,4,7,6,5,1,2,8,10,9 };           //Array declaration size-10
	int n = 10;                                     //Temporary number for array size
	printf("\n\nArray Data : ");                    //Printing message
	for (int i = 0; i < n; i++)                     //Loop for displaying the data of array
	{
		printf(" %d ", a[i]);                   //Printing data
	}
	for (int i = 0; i < n; i++)                     //Loop for ascending ordering
	{
		for (int j = 0; j < n; j++)             //Loop for comparing other values
		{
			if (a[j] > a[i])                //Comparing other array elements
			{
				int tmp = a[i];         //Using temporary variable for storing last value
				a[i] = a[j];            //replacing value
				a[j] = tmp;             //storing last value
			}  
		}
	}
	printf("\n\nAscending : ");                     //Printing message
	for (int i = 0; i < n; i++)                     //Loop for printing array data after sorting
	{
		printf(" %d ", a[i]);
	}
	for (int i = 0; i < n; i++)                     //Loop for descending ordering
	{
		for (int j = 0; j < n; j++)             //Loop for comparing other values
		{
			if (a[j] < a[i])                //Comparing other array elements
			{
				int tmp = a[i];         //Using temporary variable for storing last value
				a[i] = a[j];            //replacing value
				a[j] = tmp;             //storing last value
			}
		}
	}
	printf("\n\nDescending : ");                    //Printing message
	for (int i = 0; i < n; i++)                     //Loop for printing array data after sorting
	{
		printf(" %d ", a[i]);                   //Printing data
	}
	_getch();                                       //using _getch() to wait for user to enter any key
	return 0;                                       //returning 0 status to system
}

//Ouput
/*


Array Data :  3  4  7  6  5  1  2  8  10  9

Ascending :  1  2  3  4  5  6  7  8  9  10

Descending :  10  9  8  7  6  5  4  3  2  1
*/
