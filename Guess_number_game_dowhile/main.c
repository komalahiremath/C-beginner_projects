/***************************************************
 * Program: Guess the lucky number
 * Author: Komala 
 **************************************************/

#include <stdio.h>
#include <stdlib.h>  /* srand() */
#include <time.h>    /* time() */

int main()
{
    /* */ Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guess_count = 0;
    int guessed_number;

    // guess the number loop
    do
    {
        printf("Guess Your lucky number");
        scanf("%d", &guessed_number);
        if(guessed_number>randomNumber){
            printf("predict Lower number please!\n");
        }
        else if(guessed_number<randomNumber){
            printf("predict Higher number please!\n");
        }
        else{
            printf("Congrats!!\n");
        }
        no_of_guess_count++;

    } while (guessed_number != randomNumber);

    printf("You guessed in %d chance", no_of_guess_count);

    return 0;
}