//Include the libraries needed to execute the code//
#include <stdio.h> //Standard inputs and outputs library
#include <stdlib.h> //Standard library
#include <string.h> //Contains tools for string and memory function handling
#include <math.h> //Mathematical functions library

/////////////////////////////////////////////////////////////////////////////////

//Feb 18 - Classroom Exercises: Addition//

float sum(float x, float y)	//float type function that uses two possibly fractionary values x and y
{
	return (x+y);	//The function returns to memory the value of x and y
}

int main() //Means the function needs to return an integer
{
	float n1=2000, n2=20; //Creates and declares values for the variables n1 and n2

	printf("The sum is equal to: %.2f\n", sum(n1,n2)); 	//Executes the sum function using the values of n1 and n2 as x and y 
														//As in the sum of n1 and n2 also \n adds spacing
	return 0; //Returns a value of 0
}

/////////////////////////////////////////////////////////////////////////////////