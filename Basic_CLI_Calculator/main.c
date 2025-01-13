/*****************************************************************
 * Program: Basic command line interface Calculator application.
 * Author: Komala 
 ****************************************************************/

#include <stdio.h>
#include <ctype.h>     /* tolower() */
#include <conio.h>    /* getchar() *	/

int main() 
{
	int user_input1, user_input2, output;
	char num_operation;

	printf("Enter two inputs for computation:\n");
	scanf("%d %d", &user_input1, &user_input2);
	fflush(stdin);

	/**
	 * flush the input buffer. You might use this function if you think that
	 * there might be some data in input buffer which can create problems for
	 * you while taking user inputs from stdin.
	 */
	printf("Select the operator:\n");
	printf("1. Enter 'a' for addition\n");
	printf("2. Enter 's' for subtraction\n");
	printf("3. Enter 'm' for multiplication\n");
	printf("4. Enter 'd' for division\n");
	printf("5. Enter 'p' for modulo division\n");

	/**
	 * getchar: This operation is vital here as it will take care of unwanted
	 * '\n' char which will falsely be taken as an input at the next scanf()
	 * [line 37]. 
	 */
	getchar();
	scanf("%c", &num_operation);
	/* Convert the user_input into readable format. */
	num_operation = tolower(num_operation);

	switch (num_operation) {
	case 'a':
		output = (user_input1 + user_input2);
		break;

	case 's':
		output = (user_input1 - user_input2);
		break;

	case 'm':
		output = (user_input1 * user_input2);
		break;

	case 'd':
		output = (user_input1 / user_input2);
		break;

	case 'p':
		/* Modulus division only works with integers. */
		output = (user_input1 % user_input2); 
		break;

	default:
		printf("invalid operation\n");
	}
	printf("calculated output = %d", output);

	return 0;
}
