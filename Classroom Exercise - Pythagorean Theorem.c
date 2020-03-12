//Include the libraries needed to execute the code//
#include <stdio.h> //Standard inputs and outputs library
#include <stdlib.h> //Standard library
#include <string.h> //Contains tools for string and memory function handling
#include <math.h> //Mathematical functions library

/////////////////////////////////////////////////////////////////////////////////

//Feb 18 - Classroom Exercises: Pythagorean Theorem//

float hypotenuse(float x, float y) //float type function that uses two possibly fractionary values x and y
{
	return sqrt((x*x)+(y*y));	//The function returns the square root of the sum of x squared and y squared
}

int main() //Means the function needs to return an integer
{
	float s1=9, s2=5; //Creates and declares values for the variables s1 and s2

	printf("The hypotenuse is equal to: %.2f\n", hypotenuse(s1,s2));	//Executes the sum function using the values of s1 and s2 as x and y 
																		//As in it gives the value of the hypotenuse also \n adds spacing
	return 0; //Returns a value of 0
}

/////////////////////////////////////////////////////////////////////////////////