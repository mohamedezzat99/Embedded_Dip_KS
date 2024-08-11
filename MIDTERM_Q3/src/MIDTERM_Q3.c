/*
 ============================================================================
 Name        : MIDTERM_Q3.c
 Author      : Mohamed Ezzat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int isPrime(int num) {
    if (num < 1) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

void printPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    fflush(stdout);

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            fflush(stdout);
        }
    }

    printf("\n");
}

int main() {
    int start, end;

    printf("Enter the starting number: ");
    fflush(stdout);
    scanf("%d", &start);

    printf("Enter the ending number: ");
    fflush(stdout);
    scanf("%d", &end);

    printPrimes(start, end);

    return 0;
}
