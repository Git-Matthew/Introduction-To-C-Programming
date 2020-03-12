//Include the libraries needed to execute the code//
#include <stdio.h> //Standard inputs and outputs library
#include <stdlib.h> //Standard library
#include <string.h> //Contains tools for string and memory function handling
#include <math.h> //Mathematical functions library

/////////////////////////////////////////////////////////////////////////////////

//Mar 05 - Convert to Arguments and Functions Exercises: Leap Year//

//Include the libraries needed to execute the code//
#include <stdio.h> //Standard inputs and outputs library
#include <stdlib.h> //Standard library
#include <string.h> //Contains tools for string and memory function handling
#include <math.h> //Mathematical functions library

/////////////////////////////////////////////////////////////////////////////////

//Mar 05 - Convert to Arguments and Functions Exercises: Leap Year//

int leap_year(int x) //int type function that uses an integer variable x
{
	int y=3; //sets y equal to three for now to help with troubleshooting but it could just create y and not give it a value yet
	if(x%400==0) //Checks to see if it's a leap year by checking if i is divisible 400 without a remainder
	{
		y=1; //Sets y equal to 1 as in true meaning it is a leap year
	}
	else //Otherwise...
	{
		if(x%4==0 && x%100!=0) //Checks to see if it's a leap year by checking if i is divisible 4 without a remainder but not by 100
		{
			y=1; //Sets y equal to 1 as in true, meaning it is a leap year
		}
		else //Otherwise...
		{
			y=0; //Sets y equal to 1 as in true, meaning it is a leap year
		}
	}

	return (y); //Returns the value of y
}

int main(int argc, char** argv) //Argument count & argument vector
									//argc is the number of arguments, the program name counts as 1
									//argv is where the arguments are going to be contained
									//argv[0] is the program name, and argv[1] is the first argument and so on...
{
	int num1=atoi(argv[1]);	//Initializes num1 and assings it the value of argv[1] while also converting it from argument to integer
	{
		printf("Is it a leap year?%d\n",leap_year(num1)); 	//Executes the leap_year function using the value of num1 as x
															//This checks to see if the year x is a leap year or not also \n adds spacing
															//Prints whether the uear is leap year or not
	}
	return 0; //Returns a value of 0
}

/////////////////////////////////////////////////////////////////////////////////