/*
*Author: Siddharth
*This program prints value of an integer string
* printf() and %d format
*
*clang -Wall printint2.c -o printint2
*/
#include <stdio.h>

int main(void) 
{
    int value; /* define local var on stack */
    value = 1234; 
    printf("Value =%d\n", value);

    /* print integers from 0 to 100*/
    for(int i = 0; i < 100; i++){
        printf("i = %d\n", i);
    }

    /*print integers from 0 to 100, 10 in each line*/
    for(int i = 0; i < 100; i++){
        printf("%02d ", i);
            if((i+1) % 10 == 0)
                printf("\n");
    }

    return 0;
}
