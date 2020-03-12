//Include the libraries needed to execute the code//
#include <stdio.h> //Standard inputs and outputs library
#include <stdlib.h> //Standard library
#include <string.h> //Contains tools for string and memory function handling
#include <math.h> //Mathematical functions library

/////////////////////////////////////////////////////////////////////////////////

//Mar 03 - Pseudocode Examination: Prime Numbers//

int main() //Means the function needs to return an integer
{
	int i,j,c,m; //Creates the variables i, j, c, m
	for(i=2;i<=200;i++) //Executes a "for" cycle, setting i equal to 2, adding +1 to i every time the cycle completes and it keeps going until i is greater than 200
	{
		c=0; //Sets c equal to cero to reset the counter after leaving the for cycle
		for(j=1;j<=200;j++) //Executes a "for" cycle, setting j equal to 1, adding +1 to j every time the cycle completes and it keeps going until j is greater than 200
		{
			if(i%j==0) //Chekcs to see if i is divisible by j without a remainder to see how many numbers it has as divisors without remainder
			{
				c++; //If it is divisible it adds +1 to the counter
			}
		}
		if(c==2) //If it only has two divisors that dont give a remainder then it means it's a prime number
		{
		printf("%d\n",i); //In case it is a prime number it prints it on screen as an integer
		m++; //Adds a +1 to the other counter in order to see how many prime numers there were at the end
		}
	}
	printf("Prime number count:%d\n",m); //Prints out the final value of m which is equal to how many prime numbers there were
	return 0; //Returns a value of 0
}

/////////////////////////////////////////////////////////////////////////////////