/*
* Author: Siddharth
* This program prints all the command line arguments
* given bby the user
*/

#include <stdio.h>

int main(int argc, char *argv[]) 
{
	for( int i = 0; i< argc; ++i) {
		printf("%s\n", argv[i]);
	}
	return 0;
}
