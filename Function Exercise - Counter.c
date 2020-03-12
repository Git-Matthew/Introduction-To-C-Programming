//Include the libraries needed to execute the code//
#include <stdio.h> //Standard inputs and outputs library
#include <stdlib.h> //Standard library
#include <string.h> //Contains tools for string and memory function handling
#include <math.h> //Mathematical functions library

/////////////////////////////////////////////////////////////////////////////////

//Feb 28 - Function Exercises: Counter//

void increase_count(int *count_ptr) //void type function that uses a pointer but does not require a value to be returned
{
	(*count_ptr)++; //Adds +1 to whatever value the pointer *count_ptr has selected 
}

int main() //Means the function needs to return an integer
{
	int count = 0; //Number of times through
	while (count < 10) //Does an action as long as the value of the variable count is less than 10
	{
	increase_count(&count); //Applies the function increase_count
	printf("%d\n",count); //Prints the current value of the variable count as in how many times was the action performed also \n adds spacing
	}

	return 0; //Returns a value of 0
}


/////////////////////////////////////////////////////////////////////////////////