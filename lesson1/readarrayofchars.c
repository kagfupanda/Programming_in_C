/*
* Author: Siddharth
* This program will use getchar() to read characters and
* store them in an array
* it will print the array of characters after reading a new line
*clang -Wall readarrayofchars.c -o readarrayofchars
*/

#include <stdio.h>

void print_string(char str[])
{
/* the format specifier for strign is %s in printf() */
printf("%s\n", str);
}

int main(void) 
{
	/* define array of char to store input */
	char  arr_of_chars[1024]; /* array size of 1024 char */

	/*
	* read a char usinng getchar()
	* store the char in arr_of_char startinng at index 0
	* inncrement index
	* until new line is read
	*/

	int value_read; /* stack variable to store getchar() return */
	int index; /* index into array of chars */

	/* initialize variables */
	value_read = getchar(); /* read a char from */
	index = 0; /* start at index 0 */

	while (value_read != '\n') {
		/* store the value in arr_of_chars and increment idex */
		arr_of_chars[index] = (char)value_read; /* cast int to char */
		/* read next char input */
		value_read = getchar();
		++index; /* increment index */
	}
	/* get here, read new line, exit loop */
	/* print the array of characters read and stored so far */
	for(int i = 0; i < index; ++i) {
		printf("%c",arr_of_chars[i]);
	}
	/* printed all characters read in but not the new line */
	printf("\n"); /* to be pretty output */

	/* Null character terminate teh array of characters to print it as a string */
	arr_of_chars[index] = '\0';
	print_string(arr_of_chars);
	return 0;
}
