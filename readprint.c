#include <stdio.h>

int main() {
	int n, i;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter %d integers:\n", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Array\n");
	for (i = 0; i < n; i++) {
		printf("%d", arr[i]);
	}
	printf("Reverse Array\n");
	for (i = n - 1; i >= 0; i--) {
		printf("%d", arr[i]);
	}
	return 0;
}
