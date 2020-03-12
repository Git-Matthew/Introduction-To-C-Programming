//Include the libraries needed to execute the code//
#include <stdio.h> //Standard inputs and outputs library
#include <stdlib.h> //Standard library
#include <string.h> //Contains tools for string and memory function handling
#include <math.h> //Mathematical functions library

/////////////////////////////////////////////////////////////////////////////////

//Mar 03 - Pseudocode Examination: Perfect Numbers//

int main() //Means the function needs to return an integer
{
	int i,j,n,m; //Creates the variables i, j, n and m to work as counters, totals and auxiliary variables
	for(i=1;i<=1000;i++) //Executes a "for" cycle, setting i equal to 1, adding +1 to i every time the cycle completes and it keeps going until i is greater than 1000
	{
		m=0; //Sets and resets m equal to cero to have it as a counter later after leaving the for cycle
		for(j=1;j<=i;j++) //Executes a "for" cycle, setting j equal to 1, adding +1 to j every time the cycle completes and it keeps going until j is greater than 1
		{
			if(i%j==0) //Checks to see if i is divisible by j without a remainder
			{
				m=j+m; //Adds the value of j to m, which keeps track of whether it does or not sum up to the original number
				n=m/2; //Divides by two in order to get the original number because of how the cycle is set up
			}
		}
    if(n==i) //Checks to see if it's a perfect number, which is the case if the sum of the divisors "n" is equal to the original number "i"
	{
		printf("%d is a perfect number\n",i); //Prints the original number that ended up being a perfect number due to the other conditions
    }
	}
	return 0; //Returns a value of 0
}

/////////////////////////////////////////////////////////////////////////////////