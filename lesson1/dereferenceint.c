/*
* Author: Siddharth
* Example code to dereference a pointer and print the value
*
* The type of the value pointed to by the pointer can be deterermined by looking at the decleration .
* for example,
* 	int *ptr;
* declaration states that 'ptr' is a pointer to an 'int' value
* Similarly
* char *ptr;
* declared 'ptr' to be a pointer a 'char' value.
* 
*This program shows how to get a value pointed to by a pointer and print it.
* Getting the value pointed to by a pointer is called derefencing a pointer.
*/

#include <stdio.h>
int main(int argc, char **argv) {
	/* simple pointers and dereferencing */
	const int *str = (int *)"Hello World"; /* declares int literal*/
	
	/* lets dereference 'str' */
	/* The pointer dereference operator is '*' */
	/* i.e '*str' means dereference (get value at) str pointer 'str' */
	printf("%d\n",*str); /* Use %d because str is a int * */
	
	/* Basics of pointer arithmetic*/
	/* How to get 'next' elemennt pointed to? */
	/* increment the pointer by the size of its value type */
	int *nextchar_p = str + 1; /* point to the next value (char) */
	printf("%d\n", *nextchar_p); /* dereference the pointer to get the value */

	/* print the pointer (address) values of str and nextchar_p */
	printf("str is %p nextchar_p is %p\n", str, nextchar_p);

	/* print the locations of the pointer identifiers using & operator */
	printf("&str is %p &nextchar_p is %p\n", &str, &nextchar_p);
	return 0;
}
