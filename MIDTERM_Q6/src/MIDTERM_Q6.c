/*
 ============================================================================
 Name        : MIDTERM_Q6.c
 Author      : Mohamed Ezzat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

/*
 * The input array MUST be sorted.
 * This function finds the unique number in an array of integers.
 * The array is guaranteed to have only one unique number.
 */
int findUniqueNumber(int arr[], int size) {
	int i;
	if(arr[0] != arr[1]) return arr[0];
	for (i = 1; i < size - 1; i++) {
		if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
			return arr[i];
	}
	if(arr[size-1] != arr[size-2]) return arr[size-1];
}

void quicksort(int arr[], int low, int high) {
	int i = low, j = high;
	int temp;
	int pivot = arr[(low + high) / 2];

	while (i <= j) {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j) {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}

	if (low < j)
		quicksort(arr, low, j);
	if (i < high)
		quicksort(arr, i, high);
}

int main() {
    int a[] = {4,2,5,2,5,7,4};
    int size_a = sizeof(a) / sizeof(a[0]);
    quicksort(a,0,size_a-1);
    printf("The unique number in the array is: %d\n", findUniqueNumber(a, size_a));
    fflush(stdout);

    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");


    int b[3]={4,2,4};
    int size_b = sizeof(b) / sizeof(b[0]);
    quicksort(b,0,size_b-1);
    printf("The unique number in the array is: %d\n", findUniqueNumber(b, size_b));
    fflush(stdout);

    return 0;
}
