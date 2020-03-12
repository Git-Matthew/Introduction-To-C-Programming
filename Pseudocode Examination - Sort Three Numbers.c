//Include the libraries needed to execute the code//
#include <stdio.h> //Standard inputs and outputs library
#include <stdlib.h> //Standard library
#include <string.h> //Contains tools for string and memory function handling
#include <math.h> //Mathematical functions library

/////////////////////////////////////////////////////////////////////////////////

//Mar 03 - Pseudocode Examination: Sort Three Numbers//

int main() //Means the function needs to return an integer
{
	int n1,n2,n3,min,mid,max; //Creates the variables n1, n2, n3, min, mid and max
	printf("Input 3 different positive simplified integers:\n"); //Prints a message to ask the user for three integers
	scanf("%d %d %d",&n1,&n2,&n3); //Lets the user input three integers
	if(n1>n2 && n1>n3) //Checks to see if n1 is the largest amogst all three values
	{
		max=n1; //makes the value of max equal to the value of n1
	}
	else //Otherwise...
	{
		if(n2>n1 && n2>n3) //Checks to see if n2 is the largest amogst all three values
		{
			max=n2; //makes the value of max equal to the value of n2
		}
		else //Otherwise...
		{
			if(n3>n1 && n3>n2) //Checks to see if n3 is the largest amogst all three values
			{
				max=n3; //makes the value of max equal to the value of n2
			}
		}
	}
	if(n1<n2 && n1<n3) //Checks to see if n1 is the smallest amogst all three values
	{
		min=n1; //makes the value of min equal to the value of n1
	}
	else //Otherwise...
	{
		if(n2<n1 && n2<n3) //Checks to see if n1 is the smallest amogst all three values
		{
		min=n2; //makes the value of min equal to the value of n2
		}
		else //Otherwise...
		{
		if(n3<n1 && n3<n2) //Checks to see if n1 is the smallest amogst all three values
		{
			min=n3; //makes the value of min equal to the value of n3
		}
		}
	}
	if(n1>n2 && n1<n3) //Checks to see if n3 is neither the largest or the smallest amogst all three values
	{
		mid=n1; //makes the value of mid equal to the value of n1
	}
	else //Otherwise...
	{
		if(n1>n3 && n1<n2) //Checks to see if n3 is neither the largest or the smallest amogst all three values
		{
		mid=n1; //makes the value of mid equal to the value of n1
		}
		else //Otherwise...
		{
		if(n2>n1 && n2<n3) //Checks to see if n2 is neither the largest or the smallest amogst all three values
		{
			mid=n2; //makes the value of mid equal to the value of n2
		}
		else //Otherwise...
		{
			if(n2>n3 && n2<n1) //Checks to see if n2 is neither the largest or the smallest amogst all three values
			{
			mid=n2; //makes the value of mid equal to the value of n2
			}
			else //Otherwise...
			{
			if(n3>n1 && n3<n2) //Checks to see if n3 is neither the largest or the smallest amogst all three values
			{
				mid=n3; //makes the value of mid equal to the value of n3
			}
			else //Otherwise...
			{
				if(n3>n2 && n3<n1) //Checks to see if n3 is neither the largest or the smallest amogst all three values
				{
				mid=n3; //makes the value of mid equal to the value of n3
				}
			}
			}
		}
		}
	}
	printf("%d %d %d",max,mid,min); //Prints the values of max, mid and min, in that order
	return 0; //Returns a value of 0
}

/////////////////////////////////////////////////////////////////////////////////