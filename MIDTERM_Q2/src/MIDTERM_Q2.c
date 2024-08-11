/*
 ============================================================================
 Name        : MIDTERM_Q2.c
 Author      : Mohamed Ezzat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

double customAbs(double value) {
	return (value < 0) ? -value : value;
}

double calculateSquareRoot(int number) {
	double guess = number / 2.0;
	double epsilon = 0.00001; /* desired precision */

	while (customAbs(guess * guess - number) > epsilon) {
		guess = (guess + number / guess) / 2.0;
	}

	return guess;
}

int main() {
	int number;
	int i=0;
	for (;  i<2 ; i++) {
		printf("Enter a number: ");
		fflush(stdout);
		scanf("%d", &number);

		double squareRoot = calculateSquareRoot(number);
		printf("Square root of %d is %.2f\n", number, squareRoot);
		fflush(stdout);
	}

	return 0;
}
