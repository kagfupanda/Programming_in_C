/*
* Author: siddharth
* Simple program to use C library for string manipulation
*/
#include <stdio.h>
#include <string.h> /* to use string library functions */

/*
* Concatenate the two strigns provided as arguments. and output the concatenated string
* Example:
*	a.out abcd xyz
* Output printed should be: abcdxyz
*/
#define MAX_STRINGLEN 128 /* Use to define constannts */
int main(int argc, char **argv)
{
	/* Input strings are in argv*/
	/* argv[0] index is program name */
	/* First stringn is in argv index 1, argv[1] */
	/* second input strings in argv index 2, argv[1] */
	if (argc != 3) {
		printf("Insufficient arguments. Invalid syntax. \n");
		printf("Usage: %s <string1> <string2>\n", argv[0]);
		return -1;
	}
	
	/* strcat() is C library function to concatenate strings */
	/* assume maximum string size MAX_STRINGLEN */
	char result_string[MAX_STRINGLEN]; /* buffer to use to concatenate strings */
#if 0
	(void)strcpy(result_string, argv[1]); /* copy first string into result buffer */
	strcat(result_string, argv[2]); /* append second string */
#endif
	/* make sure buffer is not written beyond size */
	/* copy MAX_STRINGLEN -1 bytes */
	strncpy(result_string, argv[1], MAX_STRINGLEN -1);
	/* add the nul char terminate */
	result_string[MAX_STRINGLEN-1] = '\0';
	/* Append the secoond String */
	strncat(result_string, argv[2], MAX_STRINGLEN-strlen(result_string) - 1);
	/* MAX_STRIGNLEN - strlen(result_string) -1 gives available space in result-string buffer */
	/* output the result string */
	printf("%s\n", result_string);
	
	return 0;
}
