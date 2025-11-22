#include <stdio.h>
#include <stdlib.h>

int main() {
    	int n, i;
    	printf("Enter number of elements: ");
    	scanf("%d", &n);
    	int *ptrArr = malloc(n * sizeof(int));
    	for (i = 0; i < n; i++) {
        	scanf("%d", &ptrArr[i]);
    	}
    	int *largest = ptrArr;
    	for (i = 1; i < n; i++) {
        	if (ptrArr[i] > *largest) {
            		largest = &ptrArr[i];
        	}
    	}
    	printf("Largest Element: %d\n", *largest);
    	free(ptrArr);
    	return 0;
}
