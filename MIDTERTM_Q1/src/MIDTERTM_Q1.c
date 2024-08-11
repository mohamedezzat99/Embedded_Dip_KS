/*
 ============================================================================
 Name        : MIDTERTM_Q1.c
 Author      : Mohamed Ezzat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int sumDigits(int number) {
	int sum = 0;

	while (number != 0) {
		sum += number % 10;
		number /= 10;
	}

	return (sum);
}

int main(void) {
	int number;
	int i = 0;
	for (; i <= 2; i++) {
		printf("Enter an integer: ");
		fflush(stdout);
		scanf("%d", &number);
		printf("The sum of the digits of %d is %d\n", number,
				sumDigits(number));
		fflush(stdout);
	}
	return (0);
}
