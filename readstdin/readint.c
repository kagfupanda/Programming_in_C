/*
* Author: Siddharth
* This program reads an 'int' from stdin ( console)
* using scanf() - formatted read,
* It prints the int value read to stdout using printf()
*/
#include <stdio.h>

int main(int argc, char **argv) 
{
	/*
	* scanf() needs a place to store the value read
	*/
	int *int_p;
	/* Is there enough space to store at int_p? */
	int_p = NULL; /* store Null as the location value */

	/* tell compiler to give space for 'int' */
	int value_read; /* value read 'int' allocated on stack */

	/* how to get address or location of 'value_read'?
	* use apmersand '&' operator: &value_read */
	/* Copy the address of value_read into int_p */
	int_p = &value_read; /* int_p points to value_read */
	scanf("%d", int_p); /* read int from stdin, store it at the address provided in int_p */
	/* print the integer value read */
	printf("%d\n", *int_p); /* dereference the int_p pointer */

	return 0;
}
