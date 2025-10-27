#include <stdio.h>

int main() {
	int n, i;
	unsigned long factorial = 1;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	if(n < 0) {
		printf("Please enter a non-negative number.\n");
		return 0;
	}
	for (i = 1; i <= n; i++) {
		factorial *= i;
	}
	printf("The factorial of %d is %lu\n", n, factorial);
	return 0;
}
