#include <stdio.h>

void reverse(int *arr, int size) {
    	int *start = arr;
    	int *end = arr + size - 1;
    	int temp;
    	while (start < end) {
        	temp = *start;
        	*start = *end;
        	*end = temp;
        	start++;
        	end--;
    	}
}

int main() {
    	int arr[5] = {2, 18, 27, 28, 82};
    	reverse(arr, 5);
    	for (int i = 0; i < 5; i++) {
        	printf("%d ", arr[i]);
    	}
    	return 0;
}
