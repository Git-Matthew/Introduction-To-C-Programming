//Include the libraries needed to execute the code//
#include <stdio.h> //Standard inputs and outputs library
#include <stdlib.h> //Standard library
#include <string.h> //Contains tools for string and memory function handling
#include <math.h> //Mathematical functions library

/////////////////////////////////////////////////////////////////////////////////

//Feb 21 - Arguments Exercises: Pythagorean Theorem//

float hypotenuse(float x, float y) //float type function that uses two possibly fractionary values x and y
{
	return sqrt((x*x)+(y*y)); //The function returns the square root of the sum of x squared and y squared
}

int main (int argc, char** argv)	//Argument count & argument vector
									//argc is the number of arguments, the program name counts as 1
									//argv is where the arguments are going to be contained
									//argv[0] is the program name, and argv[1] is the first argument and so on...
{
	int s1=atof(argv[1]); //Initializes s1 and assings it the value of argv[1] while also converting it from argument to integer
	int s2=atof(argv[2]); //Initializes s1 and assings it the value of argv[2] while also converting it from argument to integer
	printf("The hypotenuse is equal to: %.2f\n", hypotenuse(s1, s2));	//Executes the sum function using the values of s1 and s2 as x and y 
																		//giving the hypotenuse rounded up to two decimal spaces also \n adds spacing
	return 0; //Returns a value of 0
}

/////////////////////////////////////////////////////////////////////////////////