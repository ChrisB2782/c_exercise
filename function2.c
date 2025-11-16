#include <stdio.h>

int sumArray(int arr[], int size) {
    	if (size == 0) {
		return 0;
	}
    	return arr[size - 1] + sumArray(arr, size - 1);
}

int main() {
    	int arr[] = {2, 18, 27, 28, 87};
    	int size = 5;
    	printf("Sum of array is %d\n", sumArray(arr, size));
    	return 0;
}
