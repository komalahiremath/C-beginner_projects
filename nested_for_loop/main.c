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

#include<stdio.h> 

int main()
{
	 int user_input, i,j,k,l;
	 /* fetch input from the user */
	 printf("Enter a Number");
	 scanf("%d",&user_input);

	/* NxN box to be constructed */
	for(k=1;k<=2;k++)
	{
			for(l=1;l<=user_input;l++)
			{
				printf("*");
			}
			printf("\n");
			for(k=1;k<=user_input-2;k++)
			{
				printf("*\t*");
				printf("\n");
			}
			for(j=1;j<=user_input;j++)
			{
				printf("*");
			}
			printf("\n");
	}

	return 0;
}