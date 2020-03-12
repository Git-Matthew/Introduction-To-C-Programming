//Include the libraries needed to execute the code//
#include <stdio.h> //Standard inputs and outputs library
#include <stdlib.h> //Standard library
#include <string.h> //Contains tools for string and memory function handling
#include <math.h> //Mathematical functions library

/////////////////////////////////////////////////////////////////////////////////

//Mar 05 - Convert to Arguments and Functions Exercises: Perfect Numbers//

int perfect_number(int x)
{
	int j,i=0; //Creates the variables j and i but makes i equal to cero
	for(j=1;j<x;++j) //Executes a "for" cycle, setting j equal to 1, adding +1 to j every time the cycle completes and it keeps going until j is greater than x
	{
		if(x%j==0) //Checks to see if i is divisible by j without a remainder
		{
			i=i+j; //Adds the value of j to i, which keeps track of whether it does or not sum up to the original number
		}
	}
 
	if(i==x) //Checks to see if it's a perfect number, which is the case if the sum of the divisors "x" is equal to the original number "i"
	{
		y=1; //Sets y equal to 1 as in true, meaning it is a perfect number
	}	
	else //Otherwise...
	{
		y=0; //Sets y equal to 0 as in false, meaning it is not a perfect number
	}
	
	return y; //Returns the value of y
}
int main(int argc, char** argv) //Argument count & argument vector
									//argc is the number of arguments, the program name counts as 1
									//argv is where the arguments are going to be contained
									//argv[0] is the program name, and argv[1] is the first argument and so on...
{
	int num1=atoi(argv[1]);	//Initializes num1 and assings it the value of argv[1] while also converting it from argument to integer
	{
		printf("Is it a perfect number?%d\n",perfect_number(num1)); //Executes the perfect_number function using num1 as the value of x
																	//Prints whether it is a perfect number or not
																	//This checks whether x is a prime number also \n adds spacing
	}
	return 0; //Returns a value of 0
}

/////////////////////////////////////////////////////////////////////////////////