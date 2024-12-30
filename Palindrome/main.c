/***************************************************
 * Program: Trivial program to print hello-universe
 * Author: Komala 
 **************************************************/

#include<stdio.h>
#include <string.h>
int main()
{
	int len,i, count=0;
	char n[50];

	//Taking the inputin form of a string
	printf("Enter a number/word: ");
	scanf("%s",n);

	//Finding the number of digits by calculating the lenght of the string
	len=strlen(n);

	//Checking if the number is a palindrome or not
	for(i=0;i<len/2;i++)
	{
		if(n[i]==n[len-i-1])                        //ex:n[0]==n[3], n[1]==n[2]
				count++;
	}
	if(count==len/2)
		printf("The entered number %s is a palindrome\n",n);
	else
		printf("The entered number %s is not a palindrome\n",n);
	return 0;
}