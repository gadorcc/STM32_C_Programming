/*
 ============================================================================
 Name        : PointerChallenge.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c = 100;
	printf("The address of c is %p", &c);

	char* pAddress = &c;

	char value = *pAddress;
	printf("read value is: %d\n", value);

	*pAddress = 65;
	printf("Value of data is : %d\n", data);

	return 0;
}
