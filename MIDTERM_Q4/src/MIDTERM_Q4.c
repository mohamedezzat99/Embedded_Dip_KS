/*
 ============================================================================
 Name        : MIDTERM_Q4.c
 Author      : Mohamed Ezzat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

int reverseDigits(int num) {
	int reversedNum = 0;

	while (num != 0) {
		int digit = num % 10;
		reversedNum = reversedNum * 10 + digit;
		num /= 10;
	}

	return reversedNum;
}

int main() {

	int number;
	int i = 0;
	for (; i < 2; i++) {
		printf("Enter a number: ");
		fflush(stdout);
		scanf("%d", &number);

		printf("Reversed number: %d\n", reverseDigits(number));
		fflush(stdout);

	}

	return 0;
}
