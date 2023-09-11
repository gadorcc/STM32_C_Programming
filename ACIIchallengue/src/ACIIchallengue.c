/*
 ============================================================================
 Name        : ACIIchallengue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch1; char ch2; char ch3; char ch4; char ch5; char ch6;
	printf("Enter the character to get the ASCII value: ");

	scanf("%c", &ch1, &ch2, &ch3, &ch4, &ch5, &ch6);

	int ascii1 = ch1;


	printf("ASCII value of %d", ascii1);
	return EXIT_SUCCESS;
}
