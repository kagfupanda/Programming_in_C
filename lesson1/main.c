/*
* Author: Siddharth
* Return int from main as exit status to shell
* Add cppreprocessor include statement for stdio.h header file
* 
* clang main.c -o main
*/
#include <stdio.h>
int main()
{
    printf("Hello");/* declared in stdio.h*/
    printf("\n"); /* prinnt a new line */
    return -0;
}
