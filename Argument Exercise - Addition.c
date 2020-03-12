//Include the libraries needed to execute the code//
#include <stdio.h> //Standard inputs and outputs library
#include <stdlib.h> //Standard library
#include <string.h> //Contains tools for string and memory function handling
#include <math.h> //Mathematical functions library

/////////////////////////////////////////////////////////////////////////////////

//Feb 21 - Arguments Exercises: Addition//

int sum(int x, int y) //int type function that uses two integers, x and y
{
	return (x+y);	//The function returns to memory the value of x and y
}

int main (int argc, char** argv)	//Argument count & argument vector
									//argc is the number of arguments, the program name counts as 1
									//argv is where the arguments are going to be contained
									//argv[0] is the program name, and argv[1] is the first argument and so on...
{
	int n1=atoi(argv[1]);	//Initializes n1 and assings it the value of argv[1] while also converting it from argument to integer
	int n2=atoi(argv[2]);	//Initializes n2 and assings it the value of argv[2] while also converting it from argument to integer
	printf("The sum is equal to: %d\n", sum(n1,n2));	//Executes the sum function using the values of n1 and n2 as x and y 
														//As in the sum of n1 and n2 also \n adds spacing
	return 0; //Returns a value of 0
}

/////////////////////////////////////////////////////////////////////////////////