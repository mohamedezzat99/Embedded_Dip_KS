/*
 ============================================================================
 Name        : MIDTERM_Q9.c
 Author      : Mohamed Ezzat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

void reverseWords(char* str) {
    int start = 0;
    int end = 0;
    int length = strlen(str);

    // Reverse the entire string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Reverse each word in the string
    while (end < length) {
        if (str[end] != ' ') {
            start = end;
            while (str[end] != ' ' && str[end] != '\0') {
                end++;
            }
            int wordLength = end - start;

            // Reverse the word
            for (int i = 0; i < wordLength / 2; i++) {
                char temp = str[start + i];
                str[start + i] = str[end - i - 1];
                str[end - i - 1] = temp;
            }
        } else {
            end++;
        }
    }
}

int main() {
    char str[] = "mohamed gamal";

    printf("Original string: %s\n", str);

    reverseWords(str);

    printf("Reversed words: %s\n", str);

    return 0;
}
