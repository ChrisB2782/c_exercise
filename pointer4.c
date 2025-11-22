#include <stdio.h>

int main() {
    	int arr[5] = {2, 18, 27, 28, 82};
    	int *ptrArr = arr;
    	for (int i = 0; i < 5; i++) {
        	printf("%d ", *(ptrArr + i));
    	}
    	return 0;
}
