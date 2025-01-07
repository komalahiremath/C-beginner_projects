/*****************************************************************
 * Program: Program to swap the two number using bitwise operator
 * Author: Komala 
 *****************************************************************/

#include <stdio.h>

int main()
{
	int num1,num2;

	printf("Enter two numbers for swapping:\n");
	scanf("%d %d",&num1,&num2);

	printf("Before swapping num1=%d num2=%d\n", num1,num2);
	/* XOR operation for swapping*/
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	printf("After swapping using XOR num1=%d num2=%d", num1,num2);
	return 0;
}