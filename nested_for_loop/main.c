/***************************************************
 * Program: Program to print N X N empty box
 * Example output:
   ++++++++++
   +   +
   +   +
   +   +
   +   +
   +   +
   +   +
   +   +
   +   +
   ++++++++++
 * Author: Komala 
 **************************************************/


#include<stdio.h> 

int main()
{
   int N, i,j,k,l;
   printf("Enter a Number");        //to get a positive integer number (N) from the user
   scanf("%d",&N);                  //address for the variable to store
   
   for(k=1;k<=2;k++)                 //nested for loop
   {
       for(l=1;l<=N;l++)
       {
           printf("*");
       }
       printf("\n");
       for(k=1;k<=N-2;k++)
       {
          printf("*\t*");
          printf("\n");
       }
       for(j=1;j<=N;j++)
        {
            printf("*");
        }
        printf("\n");
   }
   
  return 0; 
}