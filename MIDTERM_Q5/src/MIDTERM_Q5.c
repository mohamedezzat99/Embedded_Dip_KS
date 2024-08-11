/*
 ============================================================================
 Name        : MIDTERM_Q5.c
 Author      : Mohamed Ezzat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

int countOnes(int num) {
    int count = 0;

    while (num != 0) {
        if (num % 2 == 1) {
            count++;
        }
        num /= 2;
    }

    return count;
}

int main() {

	for (int i = 0; i < 2; i++) {
		int number;
		printf("Enter a number: ");
		fflush(stdout);
		scanf("%d", &number);

		printf("Number of ones in the binary number: %d\n", countOnes(number));
		fflush(stdout);
	}

	return 0;
}
