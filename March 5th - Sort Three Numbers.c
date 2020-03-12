//Include the libraries needed to execute the code//
#include <stdio.h> //Standard inputs and outputs library
#include <stdlib.h> //Standard library
#include <string.h> //Contains tools for string and memory function handling
#include <math.h> //Mathematical functions library

/////////////////////////////////////////////////////////////////////////////////

//Mar 05 - Convert to Arguments and Functions Exercises: Sort Three Numbers//

int sort_max(int n1, int n2, int n3) //int type function that uses three integers, n1, n2 and n3
{
	int max; //Initializes the variable max
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
				max=n3; //makes the value of max equal to the value of n3
			}
		}
	}
	return max; //Returns the value of max
}
int sort_min(int n1, int n2, int n3) //int type function that uses three integers, n1, n2 and n3
{
	int min; //Initializes the variable min
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
	return min; //Returns the value of min
}
int sort_mid(int n1, int n2, int n3) //int type function that uses three integers, n1, n2 and n3
{
	int mid; //Initializes the variable mid
	if(n1>n2 && n1<n3) //Checks to see if n1 is neither the largest or the smallest amogst all three values
	{
		mid=n1; //makes the value of mid equal to the value of n1
	}
	else //Otherwise...
	{
		if(n1>n3 && n1<n2) //Checks to see if n1 is neither the largest or the smallest amogst all three values
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
	return mid; //Returns the value of mid
}

int main(int argc, char** argv)  //Argument count & argument vector
									//argc is the number of arguments, the program name counts as 1
									//argv is where the arguments are going to be contained
									//argv[0] is the program name, and argv[1] is the first argument and so on...
{
	int nn1=atoi(argv[1]);	//Initializes num1 and assings it the value of argv[1] while also converting it from argument to integer
	int nn2=atoi(argv[2]);	//Initializes num1 and assings it the value of argv[2] while also converting it from argument to integer
	int nn3=atoi(argv[3]);	//Initializes num1 and assings it the value of argv[3] while also converting it from argument to integer
	printf("%d %d %d",sort_max(nn1,nn2,nn3),sort_mid(nn1,nn2,nn3),sort_min(nn1,nn2,nn3)); //Executes all three sort functions (max, min and mid)
																						//Prints the max,mid,min values in that order also \n adds spacing
	return 0; //Returns a value of 0
}

/////////////////////////////////////////////////////////////////////////////////