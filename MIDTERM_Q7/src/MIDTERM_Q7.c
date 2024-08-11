/*
 ============================================================================
 Name        : MIDTERM_Q7.c
 Author      : Mohamed Ezzat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

int sumNumbers(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumNumbers(n - 1);
    }
}

int main() {
    int sum = sumNumbers(100);
    printf("The sum of numbers from 1 to 100 is: %d\n", sum);
    return 0;
}
