//Include the libraries needed to execute the code//
#include <stdio.h> //Standard inputs and outputs library
#include <stdlib.h> //Standard library
#include <string.h> //Contains tools for string and memory function handling
#include <math.h> //Mathematical functions library

/////////////////////////////////////////////////////////////////////////////////

//Feb 18 - Classroom Exercises: Fizz Buzz//

int main(void) //Voids any value that would be returned
{
    int i; //Initializes the i variable
    for(i=1;i<=100;++i) //Executes a "for" cycle, setting i equal to 1, adding +1 to i every time the cycle completes and it keeps going until i is greater than 100
    {
		if ((i%3==0) && (i%5==0))	//Checks to see if dividing i by both 3 and 5 gives a remainder of 0
		{
            printf("FIZZ BUZZ\n");	//If so then it prints FIZZ BUZZ and \n adds spacing
		}
		else	//Otherwise it...
		{
			if (i%3==0) //Checks to see if dividing i by 3 gives a remainder of 0
			{
				printf("FIZZ\n");	//If so then it prints FIZZ and \n adds spacing
			}
			else //Otherwise it...
			{
				if (i%5==0) //Checks to see if dividing i by 5 gives a remainder of 0
				{
					printf("BUZZ\n");	//If so then it prints BUZZ and \n adds spacing
				}
				else	//Otherwise it...
				{
					printf("Number: %d\n", i);	//Prints the current value of i as in which number was neither fizz nor buzz
				}
			}   
		}
    }
    return 0; //Returns a value of 0
}

/////////////////////////////////////////////////////////////////////////////////