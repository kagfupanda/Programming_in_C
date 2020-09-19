/*
 * Author: Siddharth
 * this program reads text characters from standard input
 * stdin stream, and prints it out to stdout.
 * Echoes out the input
 *
 * clang -Wall readstdnin.c -o readstdin
 */

#include <stdio.h> /* declarations of standard I/O functions*/

int main(void) 
{
        /* use getchar() function to read a character at a time */
        int value_read;
        value_read = getchar(); /* this will bblock until a char is read */

        /* print the char value read */
        printf("value_read is %d\n", value_read);

        /* print the character representation of the value read */
        printf("char read in is %c\n", value_read);

        printf("loop and read entire line\n");
        /* read all the characters one by one until end of line*/
        value_read = getchar(); /* read a character from stdin */
        while (value_read != '\n') /* if not EOF */
        {
            printf("%c", value_read); /* print character */
            value_read = getchar();     /* read next character from stdin, loop */
        }

        return 0;
}
