/***************************************************
 * Program: Trivial program to print hello-universe
 * Author: Komala 
 **************************************************/

#include <stdio.h>

int main(void) {
    int * pc; /* the '*' is used to make pointer */
    int c;

    c = 22;
    printf("Address of c: %p\n", (void * ) & c);
    printf("Value of c: %d\n\n", c);

    pc = & c;
    printf("Address of c: %p\n", (void * ) pc);
    printf("Content of c: %d\n\n", * pc);

    c = 11;
    printf("Address of c: %p\n", (void * ) pc);
    printf("Content of c: %d\n\n", * pc);

    * pc = 2;
    printf("Address of c: %p\n", (void * ) & c);
    printf("Value of c: %d\n\n", c);
    return 0;
}