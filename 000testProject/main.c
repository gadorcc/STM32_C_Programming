/*
 * main.c
 *
 *  Created on: Aug 30, 2023
 *      Author: Gador
 */

#include <stdio.h>

int main(void)
{
	float num1;
	float num2;
	float num3;
	float average;

	printf("Hola Gador, Enter the first number: ");
	fflush(stdout);
	scanf("%f", &num1);


	printf("\nHola Gador, Enter the second number: ");
	fflush(stdout);
	scanf("%f", &num2);

	printf("\nHola Gador, Enter the third number: ");
	fflush(stdout);
	scanf("%f", &num3);

	average = (num1 + num2 + num3)/3;
	printf("The average is: %f", average);

	return 0;
}


