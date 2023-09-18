/*
 ============================================================================
 Name        : CompareNums.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num1, num2;

	printf("Give me the first Number: \n");
	scanf("%d", &num1 );
	printf("Give me the first Number: \n");
	scanf("%d", &num2 );

	if(num1 == num2){
		printf("both numbers are equal");
	}else if (num1 > num2){
		printf("The biggest of the two is: %d", num1 );
	}else{
		printf("The biggest of the two is: %d", num2);
	}
	return EXIT_SUCCESS;
}
