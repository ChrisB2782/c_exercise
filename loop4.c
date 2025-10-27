#include <stdio.h>

int main(){
	int n, first = 0, second = 1, next, count = 0;
	printf("Enter the number of terms:");
	scanf("%d", &n);
	if (n <= 0) {
		printf("Please enter a positive integer.\n");
		return 0;
	}
	while (count < n) {
		printf("%d" , first);
		next = first + second;
		first = second;
		second = next;
		count++;
	}
	return 0;
}
