/***************************************************
 * Program: Basic program to show the utilization of 
 * Relational operators using if-else statement. 
 * Author: Komala 
 **************************************************/

#include <stdio.h>

int main()
{
	int num1, num2;
	printf("Enter two numbers: \n");
	scanf("%d %d",&num1,&num2);

	/* Greater than operator */
	printf("\n(>) operation:\n");
	if (num1>num2)
		printf("num1(%d) is greater than num2(%d)\n", num1,num2);
	else
		printf("num1(%d) is smaller than num2(%d)\n", num1,num2);

	/* Greater than or equal to */
	printf("\n(>=) operation:\n");
	if (num1>=num2)
		printf("num1(%d) is greater than or equal to num2(%d)\n", num1,num2);
	else
		printf("num1(%d) is neither greater than or equal to num2(%d)\n", num1,num2);

	/* Less than */
	printf("\n(<) operation:\n");
	if (num1<num2)
		printf("num1(%d) is less than num2(%d)\n", num1,num2);
	else
		printf("num1(%d) is greater than num2(%d)\n", num1,num2);

	/* Lesser than equal to */
	printf("\n(<=) operation:\n");
	if (num1<=num2)
		printf("num1(%d) is neither less than or equal to num2(%d)\n", num1,num2);
	else
		printf("num2(%d) is greater than num1(%d)\n", num1,num2);

	/* equal to */
	printf("\n(==) operation:\n");
	if (num1==num2)
		printf("num1(%d) is equal to num2(%d)\n", num1,num2);
	else
		printf("num1(%d) is not equal to num2(%d)\n", num1,num2);

	/* not equal to */
	printf("\n(!=) operation:\n");
	if (num1!=num2)
		printf("Condition true,num1(%d) is not equal to num2(%d)\n", num1,num2);
	else
		printf("Condition fails,num1(%d) is equal to num2(%d)\n", num1,num2);

	return 0;

}