/*
 *Author: Siddharth
 *This program prints the value of an integer variable
 * to standard output stdout stream
 *
 * clang -Wall printint.c -o printint
 * this example shows uninitialized variable warning 
 */
#include <stdio.h>

int main(void)
{
        int value;
        if (value == 0) {
                printf("zero value = %d\n", value);
        } else {
                printf("Value= %d\n", value);
        }
        return 0;
}
