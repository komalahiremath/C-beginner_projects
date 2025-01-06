/***************************************************
 * Program: Program to print N X N empty box
 * Author: Komala 
 * Example output:
	 ++++++++++
	 +        +
	 +        +
	 +        +
	 +        +
	 +        +
	 +        +
	 +        +
	 +        +
	 ++++++++++
 **************************************************/

#include <stdio.h> 

#define MAX_DIMENSION   30

void print_nxn_box(const unsigned int dimension)
{
	/* NxN box to be constructed */
	for(int length=1; length<=dimension; length++)
	{
		for(int width=1; width<=dimension; width++)
		{
			/* print the star for first and last row */
			if(length==1 || length==dimension || width==1 || width==dimension)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}


int main()
{
	unsigned int dimension;

	printf("Enter the dimension for (NxN) empty box: ");
	scanf(" %d", &dimension);
	
	if(dimension > 0 && dimension < MAX_DIMENSION)
	{
		print_nxn_box(dimension);
	}
	else
	{
		printf("Please enter valid number");
	}
	return 0;
}