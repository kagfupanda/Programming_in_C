/*
* Author: Siddharth
* Simple program to get adresses of variables/identifiesrs
* and print the address.
*/

#include <stdio.h>

int main(void)
{
	int val = 1234;

	printf("Value stored at address %p is %d\n", &val, val);

	char *str; /* str is the address of a character */
	/* In C, strigns are 'char*'  sequence char that edns with '\0' */
	
	char *namestr = "Sid Srinivasan";

	/*how to print a strign? */
	printf("%s\n", namestr); /* Identifier for %s should be a char * */

	char *another_pointer = namestr; /* assign: copy of a pointer */
	/* If you print another_pointer, what will be its output? */
	printf("%s\n", another_pointer);

	/* Uninitilzed pointers - will it seg fault*/
	/* Some compiliers implicitily initialize them to null */
	char *uninit_p;
	printf("%s\n", uninit_p);

	/* will this seg fault core dump */
	char *null_ptr = NULL;
	printf("%s\n", null_ptr);

	/* What happens if you try to dereference a null pointer */
/*	printf("%c\n",*null_ptr); */

	/* Define a int pointer to a weird address */
	int *int_p = (int *)0x12345678;
	/* Now derefernce the int pointer. What happens */
	printf("%d\n", *int_p);



	return 0;
}
