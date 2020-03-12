//Include the libraries needed to execute the code//
#include <stdio.h> //Standard inputs and outputs library
#include <stdlib.h> //Standard library
#include <string.h> //Contains tools for string and memory function handling
#include <math.h> //Mathematical functions library

/////////////////////////////////////////////////////////////////////////////////

//Mar 03 - Pseudocode Examination: Leap Year//

int main() //Means the function needs to return an integer
{
	int i,j=0; //Creates the variables i and j while also declaring the value of j to be cero
	for(i=1500;i<=2100;i++) //Executes a "for" cycle, setting i equal to 1500, adding +1 to i every time the cycle completes and it keeps going until i is greater than 2100
	{
		if((i%400==0)||(i%4==0 && i%100!=0)) //Checks to see if it's a leap year by checking if i is divisible by 400 or by 4 without a remainder but not by 100
		{
			printf("%d\n",i); //Prints the current value of i as in which year is considered a leap year
			j++; //Adds +1 to the counter to keep track of how many leap years
		}
	}
	printf("Leap Year Count: %d\n",j); //prints the current value of j as in how many leap years there were also \n adds spacing
	return 0; //Returns a value of 0
}

/////////////////////////////////////////////////////////////////////////////////