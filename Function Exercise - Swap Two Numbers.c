//Include the libraries needed to execute the code//
#include <stdio.h> //Standard inputs and outputs library
#include <stdlib.h> //Standard library
#include <string.h> //Contains tools for string and memory function handling
#include <math.h> //Mathematical functions library

/////////////////////////////////////////////////////////////////////////////////

//Feb 28 - Function Exercises: Swap Two Numbers//

void increase_count(int *count_ptr)	//void type function that uses a pointer but does not require a value to be returned
{
	(*count_ptr)++; //Adds +1 to whatever value the pointer *count_ptr has selected
}

void swap(int*a,int*b) //void type function that uses two pointers *a and *b but does not require a value to be returned
{
	int c=*a; //sets the value of a to a temporary variable called c
	*a=*b; //sets the value of a to be that of b
	*b=c; //sets the value of b to be that of c which is actually the one form the original a
}
int main() //Means the function needs to return an integer
{
	int i=0,n1=2,n2=3; //Creates and declares values for the variables i,n1 and n2
	printf("First number: %d\nSecond number: %d\n", n1, n2); //prints the values of n1 and n2 in that order also \n adds spacing
	swap(&n1,&n2); //Executes the swap function which swaps the locations of n1 and n2
	printf("swapping...\nFirst number: %d\nSecond number: %d\n",n1,n2); //Prints the values of n1 and n2 in that order also \n adds spacing
	while (i<10) //Repeats the action as long as i is less than 10
	{
	increase_count(&i); //applies the function increase_count to the value in the location of i
	printf("%d\n",i); // prints the current value of i as in how many times the action was performed also \n adds spacing
	}
	return 0; //Returns a value of 0
}

/////////////////////////////////////////////////////////////////////////////////