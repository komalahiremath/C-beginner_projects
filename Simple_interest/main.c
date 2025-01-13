/***************************************************
 * Program: Program to calculate the simple interest.
 * Author: Komala 
 **************************************************/
#include <stdio.h>

int main()
{
    int principleAmount;
    int numberOfYears;
    int rateOfInterest;
    int SimpleInterest;

    printf("enter principleAmount\n",principleAmount);
    scanf("%d",&principleAmount);
    printf("enter number of year\n",numberOfYears);
    scanf("%d",&numberOfYears);
    printf("enter rate of interest\n",rateOfInterest);
    scanf("%d",&rateOfInterest);

    /* Compute simple interest */
    SimpleInterest=(principleAmount*numberOfYears*rateOfInterest)/100;
    printf("Simple interest is %d",SimpleInterest);

return 0;
}