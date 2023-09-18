/*
 ============================================================================
 Name        : VoteIF.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int age;
	printf("What's your age?:\n");
	scanf("%d", &age);

	if (age >= 18){
		puts("You can vote"); /* prints !!!Hello World!!! */
	}
	else {
		puts("You can not vote, you are too young");
	}
	return EXIT_SUCCESS;
}
