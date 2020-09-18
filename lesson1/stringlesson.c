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
	(void)strcpy(result_string, argv[1]); /* copy first string into result buffer */
	strcat(result_string, argv[2]); /* append second string */

	/* output the result string */
	printf("%s\n", result_string);
	
	return 0;
}
