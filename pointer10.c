#include <stdio.h>

int* larger(int *a, int *b) {
    	if (*a > *b) {
        	return a;
	} 
	else {
        	return b;
	}
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int *ptr = larger(&x, &y);
    printf("Larger Number: %d\n", *ptr);
    return 0;
}
