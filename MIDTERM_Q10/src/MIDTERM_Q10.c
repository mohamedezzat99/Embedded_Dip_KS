/*
 ============================================================================
 Name        : MIDTERM_Q10.c
 Author      : Mohamed Ezzat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int countMaxOnesBetweenZeros(int num) {
    int maxCount = 0;
    int currentCount = 0;
    int foundZero = 0;

    while (num > 0) {
        if (num & 1) {
            currentCount++;
        } else {
            if (foundZero) {
                if (currentCount > maxCount) {
                    maxCount = currentCount;
                }
                currentCount = 0;
            } else {
                foundZero = 1;
            }
        }
        num >>= 1;
    }

    if (currentCount > maxCount) {
        maxCount = currentCount;
    }

    return maxCount;
}

int main() {
    printf("Max number of ones between two zeros: %d\n", countMaxOnesBetweenZeros(14));
    fflush(stdout);
    printf("Max number of ones between two zeros: %d\n", countMaxOnesBetweenZeros(110));
    fflush(stdout);
    return 0;
}
