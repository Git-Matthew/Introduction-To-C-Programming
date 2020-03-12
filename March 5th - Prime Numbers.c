//Include the libraries needed to execute the code//
#include <stdio.h> //Standard inputs and outputs library
#include <stdlib.h> //Standard library
#include <string.h> //Contains tools for string and memory function handling
#include <math.h> //Mathematical functions library

/////////////////////////////////////////////////////////////////////////////////

//Mar 05 - Convert to Arguments and Functions Exercises: Prime Numbers//

int prime_number(int x) //int type function that uses an integer variable x
{
	int y; //Creates the variable y but doesnt define it yet
	for(y=1;y<=x;y++) //Executes a "for" cycle, setting y equal to 1, adding +1 to y every time the cycle completes and it keeps going until y is greater than x
	{
		if(x%y==0) //Checks to see if x is divisible by y without giving a remainder
		{
			c++; //If so it then adds +1 to the counter c
		}
	}
	if(c==2) //If it only has two divisors that dont give a remainder then it means it's a prime number
	{
		y=1; //In case the counter is equal to two y is then set to equal 1 and represents "true" as in it is a prime number
	}
	else
	{
		y=0; //In case the counter is not equal to two y is then set to equal 0 and represents "false" as in it is not a prime number
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
		printf("Is it a prime number?%d\n",prime_number(num1)); //Executes the prime_number function using the value of num1 as x
																//Prints whether the number is prime or not
																//This checks whether x is a prime number also \n adds spacing
	}
	return 0; //Returns a value of 0
}

/////////////////////////////////////////////////////////////////////////////////